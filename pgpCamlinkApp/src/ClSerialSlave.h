#ifndef	CL_SERIAL_SLAVE_H
#define	CL_SERIAL_SLAVE_H

#include <mutex>
#include <queue>
#include <epicsTime.h>
#include <rogue/interfaces/stream/Slave.h>

class ClSerialSlave : public rogue::interfaces::stream::Slave
{
public:

	// Create a static class creator to return our custom class
	// wrapped with a shared pointer
	static std::shared_ptr<ClSerialSlave> create()
	{
		static std::shared_ptr<ClSerialSlave> ret = std::make_shared<ClSerialSlave>();
		return(ret);
	}

	ClSerialSlave();

	~ClSerialSlave();

	/// readBytes function can handle binary data containing zeroes.
	int readBytes( unsigned char * buffer, double timeout, size_t nBytesMax );

	/// acceptFrame is called by rogue for each new serial byte
	void acceptFrame ( std::shared_ptr<rogue::interfaces::stream::Frame> frame );

	/// Get the number of available received bytes in input buffer
	size_t	getNumAvailBytes( ) const
	{
		// std::lock_guard<std::mutex> lockBuffer( m_bufferLock );
		return m_replyBuffer.size();
	}

	/// flush input buffer
	void flush( );

	//static const 	size_t	S_REPLY_BUFFER	= 256;

    /// Configure the input end-of-string terminator.
    /// Pass eosLen=0 to disable EOS detection (binary mode).
    void setInputEos( const char *eos, int eosLen );

    /// Returns true if the last readBytes() call terminated because
    /// the configured EOS sequence was found at the end of the data.
    bool wasEosFound() const { return m_eosFound; }

    /// Set the inter-character timeout (milliseconds).
    /// After first byte arrives, if no new data arrives within this time,
    /// readBytes() returns what it has.  Default: 100ms.
    void setInterCharTimeout( int ms ) { m_interCharTimeoutMs = ms; }

private:
	void	addToBuffer(	unsigned char c );
	int		readFromBuffer(	unsigned char * buffer, size_t nBytesMax );

private:
	std::string					m_diagBuffer;
	std::queue<unsigned char>	m_replyBuffer;
	size_t						m_nBytesInBuffer;
	size_t						m_nBytesReq;
	std::condition_variable		m_replyReady;
	std::mutex					m_replyLock;
	std::mutex					m_bufferLock;

    char    m_inputEos[16];       // Configured input EOS sequence
    int     m_inputEosLen;        // Length of EOS (0 = no EOS, binary mode)
    bool    m_eosFound;           // True if last read terminated due to EOS match
    int     m_interCharTimeoutMs; // Inter-character timeout in ms (default 100)
};

// Shared pointer alias
typedef std::shared_ptr<ClSerialSlave> ClSerialSlavePtr;

#endif	/* CL_SERIAL_SLAVE_H */
