#ifndef	FEB_MEMORY_MASTER_H
#define	FEB_MEMORY_MASTER_H

#include <rogue/interfaces/memory/Master.h>

// Custom stream master class
class FebMemoryMaster : public rogue::interfaces::memory::Master
{
public:
	// Create a static class creator to return our custom class wrapped with a shared pointer
	static std::shared_ptr<FebMemoryMaster> create() {
		static std::shared_ptr<FebMemoryMaster> ret = std::make_shared<FebMemoryMaster>();
		return(ret);
	}

	// Standard class creator which is called by create
	FebMemoryMaster() : rogue::interfaces::memory::Master() {
	}

	int incrAddress( uint64_t	address, std::string label = "" )
	{
		uint32_t	scratch = 0xdead;
		uint32_t	id;
		if ( label.size() == 0 )
			label = "FebMemoryMaster::incrAddress";
		scratch = 0xdead;
		this->clearError();
		id = this->reqTransaction( address, 4, &scratch, rogue::interfaces::memory::Read );
		this->waitTransaction( id );
		if ( this->getError().size() != 0 )
		{
			printf( "%s addr 0x%lX: =0x%X, Read Error=%s\n", label.c_str(), address, scratch, this->getError().c_str() );
			return -1;
		}

		scratch++;
		this->clearError();
		id = this->reqTransaction( address, 4, &scratch, rogue::interfaces::memory::Write );
		this->waitTransaction( id );
		if ( this->getError().size() != 0 )
		{
			printf( "%s addr 0x%lX =0x%X, Write Error=%s\n", label.c_str(), address, scratch, this->getError().c_str() );
			return -1;
		}

		scratch = 0xdead;
		this->clearError();
		id = this->reqTransaction( address, 4, &scratch, rogue::interfaces::memory::Read );
		this->waitTransaction( id );
		if ( this->getError().size() != 0 )
		{
			printf( "%s addr 0x%lX =0x%X, Read Error=%s\n", label.c_str(), address, scratch, this->getError().c_str() );
			return -1;
		}
		printf( "%s addr 0x%lX =0x%X\n", label.c_str(), address, scratch );
		return 0;
	}

};

// Shared pointer alias
typedef std::shared_ptr<FebMemoryMaster> FebMemoryMasterPtr;

#endif	/*	FEB_MEMORY_MASTER_H */
