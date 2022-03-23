// #############################################
// Auto Generated Header File From Rogue
// #############################################
#ifndef __ROGUE_ADDR_MAP_H__
#define __ROGUE_ADDR_MAP_H__

#define ROGUE_ADDR_MAP "Path	TypeStr	Address	Offset	Mode	BitOffset	BitSize	Minimum	Maximum	Enum	OverlapEn	Verify	ModelId	ByteReverse	BitReverse	BinPoint	BulkEn	UpdateNotify	MemBaseName	BlockName	BlockSize	NumValues	ValueBits	ValueStride	RetryCount	Description|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaVersion	UInt32	0x20000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaVersion	0x4	0	32	32	0	FPGA Firmware Version Number|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.ScratchPad	UInt32	0x20004	0x4	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.ScratchPad	0x4	0	32	32	0	Register to test reads and writes|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UpTimeCnt	UInt32	0x20008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UpTimeCnt	0x4	0	32	32	0	Number of seconds since last reset|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaReloadHalt	UInt1	0x20100	0x100	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaReloadHalt	0x4	0	1	1	0	Used to halt automatic reloads via AxiVersion|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaReload	UInt1	0x20104	0x104	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaReload	0x4	0	1	1	0	Optional Reload the FPGA from the attached PROM|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaReloadAddress	UInt32	0x20108	0x108	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FpgaReloadAddress	0x4	0	32	32	0	Reload start address|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UserReset	UInt1	0x2010c	0x10c	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.UserReset	0x4	0	1	1	0	Optional User Reset|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FdSerial	UInt64	0x20300	0x300	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.FdSerial	0x8	0	64	64	0	Board ID value read from DS2411 chip|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DeviceId	UInt32	0x20500	0x500	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DeviceId	0x4	0	32	32	0	Device Identification  (configued by generic)|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.GitHash	UInt160	0x20600	0x600	RO	[0]	[160]	0	1461501637330902918203684832716283019655932542975	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.GitHash	0x14	0	160	160	0	GIT SHA-1 Hash|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DeviceDna	UInt128	0x20700	0x700	RO	[0]	[128]	0	340282366920938463463374607431768211455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DeviceDna	0x10	0	128	128	0	Xilinx Device DNA value burned into FPGA|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp	String(256)	0x20800	0x800	RO	[0]	[2048]	None	None	None	False	True	5	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BuildStamp	0x100	0	2048	2048	0	Firmware Build String|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_SIZE_G	UInt32	0x20400	0x400	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_SIZE_G	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.Reserved	UInt32	0x20404	0x404	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.Reserved	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DRIVER_TYPE_ID_G	UInt32	0x20408	0x408	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DRIVER_TYPE_ID_G	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.XIL_DEVICE_G	UInt32	0x2040c	0x40c	RO	[0]	[32]	0	4294967295	{0: 'ULTRASCALE', 1: '7SERIES'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.XIL_DEVICE_G	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_CLK_FREQ_C	UInt32	0x20410	0x410	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_CLK_FREQ_C	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BOOT_PROM_G	UInt32	0x20414	0x414	RO	[0]	[32]	0	4294967295	{0: 'BPI', 1: 'SPIx8', 2: 'SPIx4'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.BOOT_PROM_G	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x20418	0x418	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x20418	0x418	RO	[20]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x20418	0x418	RO	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TID_BITS_C	UInt4	0x20418	0x418	RO	[12]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x20418	0x418	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x20418	0x418	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x20418	0x418	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AppReset	Bool	0x20418	0x418	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.DMA_AXIS_CONFIG_G_TDATA_BYTES_C	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_ADDR_WIDTH_C	UInt8	0x2041c	0x41c	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_ADDR_WIDTH_C	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_DATA_BYTES_C	UInt8	0x2041c	0x41c	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_ADDR_WIDTH_C	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_ID_BITS_C	UInt8	0x2041c	0x41c	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_ADDR_WIDTH_C	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_LEN_BITS_C	UInt8	0x2041c	0x41c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AXI_PCIE_CONFIG_C_ADDR_WIDTH_C	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AppClkFreq	UInt32	0x20420	0x420	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.AppClkFreq	0x4	0	32	32	0	Application Clock Frequency|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.PCIE_HW_TYPE_G	UInt32	0x20424	0x424	RO	[0]	[32]	0	4294967295	{0: 'Undefined', 1: 'AlphaDataKu3', 2: 'BittWareXupVv8', 3: 'SlacPgpCardG3', 4: 'SlacPgpCardG4', 5: 'XilinxAc701', 6: 'XilinxAlveoU50', 7: 'XilinxAlveoU200', 8: 'XilinxAlveoU250', 9: 'XilinxAlveoU280', 10: 'XilinxKc705', 11: 'XilinxKcu105', 12: 'XilinxKcu116', 13: 'XilinxKcu1500', 14: 'XilinxVcu128', 15: 'XilinxAlveoU55C', 16: 'XilinxVariumC1100'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiVersion.PCIE_HW_TYPE_G	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	UInt1	0x60000	0x0	WO	[0]	[1]	0	1	None	True	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x60000	0x0	RO	[24]	[8]	0	255	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x60000	0x0	RO	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x60000	0x0	RO	[16]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TID_BITS_C	UInt4	0x60000	0x0	RO	[12]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x60000	0x0	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x60000	0x0	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x60000	0x0	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.COMMON_CLK_G	Bool	0x60000	0x0	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameCnt	UInt64	0x60004	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameRate	Int32	0x6000c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameRateMax	Int32	0x60010	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameRateMin	Int32	0x60014	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].RawBandwidth	UInt64	0x60018	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].RawBandwidthMax	UInt64	0x60020	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].RawBandwidthMin	UInt64	0x60028	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameSize	Int32	0x60030	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameSizeMax	Int32	0x60034	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameSizeMin	Int32	0x60038	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[0].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameCnt	UInt64	0x60044	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameRate	Int32	0x6004c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameRateMax	Int32	0x60050	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameRateMin	Int32	0x60054	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].RawBandwidth	UInt64	0x60058	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].RawBandwidthMax	UInt64	0x60060	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].RawBandwidthMin	UInt64	0x60068	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameSize	Int32	0x60070	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameSizeMax	Int32	0x60074	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameSizeMin	Int32	0x60078	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[1].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameCnt	UInt64	0x60084	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameRate	Int32	0x6008c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameRateMax	Int32	0x60090	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameRateMin	Int32	0x60094	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].RawBandwidth	UInt64	0x60098	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].RawBandwidthMax	UInt64	0x600a0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].RawBandwidthMin	UInt64	0x600a8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameSize	Int32	0x600b0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameSizeMax	Int32	0x600b4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameSizeMin	Int32	0x600b8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[2].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameCnt	UInt64	0x600c4	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameRate	Int32	0x600cc	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameRateMax	Int32	0x600d0	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameRateMin	Int32	0x600d4	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].RawBandwidth	UInt64	0x600d8	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].RawBandwidthMax	UInt64	0x600e0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].RawBandwidthMin	UInt64	0x600e8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameSize	Int32	0x600f0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameSizeMax	Int32	0x600f4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameSizeMin	Int32	0x600f8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaIbAxisMon.Ch[3].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	UInt1	0x68000	0x0	WO	[0]	[1]	0	1	None	True	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x68000	0x0	RO	[24]	[8]	0	255	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x68000	0x0	RO	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x68000	0x0	RO	[16]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TID_BITS_C	UInt4	0x68000	0x0	RO	[12]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x68000	0x0	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x68000	0x0	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x68000	0x0	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.COMMON_CLK_G	Bool	0x68000	0x0	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameCnt	UInt64	0x68004	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameRate	Int32	0x6800c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameRateMax	Int32	0x68010	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameRateMin	Int32	0x68014	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].RawBandwidth	UInt64	0x68018	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].RawBandwidthMax	UInt64	0x68020	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].RawBandwidthMin	UInt64	0x68028	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameSize	Int32	0x68030	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameSizeMax	Int32	0x68034	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameSizeMin	Int32	0x68038	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[0].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameCnt	UInt64	0x68044	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameRate	Int32	0x6804c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameRateMax	Int32	0x68050	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameRateMin	Int32	0x68054	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].RawBandwidth	UInt64	0x68058	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].RawBandwidthMax	UInt64	0x68060	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].RawBandwidthMin	UInt64	0x68068	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameSize	Int32	0x68070	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameSizeMax	Int32	0x68074	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameSizeMin	Int32	0x68078	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[1].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameCnt	UInt64	0x68084	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameRate	Int32	0x6808c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameRateMax	Int32	0x68090	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameRateMin	Int32	0x68094	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].RawBandwidth	UInt64	0x68098	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].RawBandwidthMax	UInt64	0x680a0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].RawBandwidthMin	UInt64	0x680a8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameSize	Int32	0x680b0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameSizeMax	Int32	0x680b4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameSizeMin	Int32	0x680b8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[2].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameCnt	UInt64	0x680c4	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameRate	Int32	0x680cc	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameRateMax	Int32	0x680d0	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameRateMin	Int32	0x680d4	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].RawBandwidth	UInt64	0x680d8	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].RawBandwidthMax	UInt64	0x680e0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].RawBandwidthMin	UInt64	0x680e8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameSize	Int32	0x680f0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameSizeMax	Int32	0x680f4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameSizeMin	Int32	0x680f8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.DmaObAxisMon.Ch[3].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.VendorID	UInt16	0x10000	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.VendorID	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.DeviceID	UInt16	0x10000	0x0	RO	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.VendorID	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Command	UInt16	0x10004	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Command	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Status	UInt16	0x10004	0x4	RO	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Command	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.RevisionID	UInt8	0x10008	0x8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.RevisionID	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.ProgIF	UInt8	0x10008	0x8	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.RevisionID	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Subclass	UInt8	0x10008	0x8	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.RevisionID	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.ClassCode	UInt8	0x10008	0x8	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.RevisionID	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CacheLineSize	UInt8	0x1000c	0xc	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CacheLineSize	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LatencyTimer	UInt8	0x1000c	0xc	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CacheLineSize	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.HeaderType	UInt8	0x1000c	0xc	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CacheLineSize	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BIST	UInt8	0x1000c	0xc	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CacheLineSize	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[0]	UInt32	0x10010	0x10	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[0]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[1]	UInt32	0x10014	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[1]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[2]	UInt32	0x10018	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[2]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[3]	UInt32	0x1001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[3]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[4]	UInt32	0x10020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[4]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[5]	UInt32	0x10024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.BaseAddressBar[5]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CardbusCisPointer	UInt32	0x10028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CardbusCisPointer	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.SubVendorId	UInt16	0x1002c	0x2c	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.SubVendorId	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.SubDeviceId	UInt16	0x1002c	0x2c	RO	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.SubVendorId	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.ExpansionRomBaseAddress	UInt32	0x10030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.ExpansionRomBaseAddress	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CapabilitiesPointer	UInt8	0x10034	0x34	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.CapabilitiesPointer	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.InterruptLine	UInt8	0x1003c	0x3c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.InterruptLine	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.InterruptPin	UInt8	0x1003c	0x3c	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.InterruptLine	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.MinGrant	UInt8	0x1003c	0x3c	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.InterruptLine	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.MaxLatency	UInt8	0x1003c	0x3c	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.InterruptLine	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Gen2Capable	UInt1	0x10130	0x130	RO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Gen2Capable	0x4	0	1	1	0	If set, underlying integrated block supports PCIe Gen2 speed.|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Gen3Capable	UInt1	0x10130	0x130	RO	[3]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Gen2Capable	0x4	0	1	1	0	If set, underlying integrated block supports PCIe Gen3 speed.|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.RootPortPresent	UInt1	0x10130	0x130	RO	[1]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Gen2Capable	0x4	0	1	1	0	Indicates the underlying integrated block is a Root Port when this bit is set. If set, Root Port registers are present in this interface.|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.UpConfigCapable	UInt1	0x10130	0x130	RO	[2]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.Gen2Capable	0x4	0	1	1	0	Indicates the underlying integrated block is upconfig capable when this bit is set.|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkRateGen2	UInt1	0x10144	0x144	RO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkRateGen2	0x4	0	1	1	0	0b = 2.5 GT/s (if bit[12] = 0), or 8.0GT/s (if bit[12] = 1), 1b = 5.0 GT/s|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkRateGen3	UInt1	0x10144	0x144	RO	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkRateGen2	0x4	0	1	1	0	Reports the current link rate. 0b = see bit[0]. 1b = 8.0 GT/s|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkWidth16	UInt1	0x10144	0x144	RO	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkRateGen2	0x4	0	1	1	0	Reports the current link width. 0b = See bit[2:1]. 1b = x16.|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkWidth	UInt2	0x10144	0x144	RO	[1]	[2]	0	3	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxiPciePhy.LinkRateGen2	0x4	0	2	2	0	Reports the current link width. 00b = x1, 01b = x2, 10b = x4, 11b = x8.|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Rnw	UInt1	0x70000	0x0	RW	[0]	[1]	0	1	{0: 'Write', 1: 'Read'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Rnw	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Done	Bool	0x70004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Done	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Resp	UInt2	0x70004	0x4	RW	[1]	[2]	0	3	{0: 'OK', 1: 'EXOK', 2: 'SLVERR', 3: 'DECERR'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Done	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Addr	UInt32	0x70008	0x8	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Addr	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Data	UInt32	0x7000c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.AxiPcieCore.AxilBridge.Regs.Data	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]	UInt32	0xc00000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[0]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[1]	UInt32	0xc00004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[1]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[2]	UInt32	0xc00008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.DataCnt[2]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NullCnt[0]	UInt32	0xc00100	0x100	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NullCnt[0]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NullCnt[1]	UInt32	0xc00104	0x104	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NullCnt[1]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NullCnt[2]	UInt32	0xc00108	0x108	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NullCnt[2]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimeoutDropCnt[0]	UInt32	0xc00200	0x200	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimeoutDropCnt[0]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimeoutDropCnt[1]	UInt32	0xc00204	0x204	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimeoutDropCnt[1]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimeoutDropCnt[2]	UInt32	0xc00208	0x208	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimeoutDropCnt[2]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TransactionCnt	UInt32	0xc00fc0	0xfc0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TransactionCnt	0x4	0	32	32	0	Increments every time a transition frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TRANS_TDEST_G	UInt8	0xc00fc4	0xfc4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TRANS_TDEST_G	0x4	0	8	8	0	TRANS_TDEST_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.Bypass	UInt3	0xc00fd0	0xfd0	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.Bypass	0x4	0	3	3	0	Mask to bypass a channel|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.Timeout	UInt32	0xc00ff0	0xff0	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.Timeout	0x4	0	32	32	0	Sets the timer's timeout duration.  Setting to 0x0 (default) bypasses the timeout feature|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NUM_SLAVES_G	UInt8	0xc00ff4	0xff4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NUM_SLAVES_G	0x4	0	8	8	0	NUM_SLAVES_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.State	UInt1	0xc00ff8	0xff8	RO	[8]	[1]	0	1	{0: 'IDLE_S', 1: 'MOVE_S'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.State	0x4	0	1	1	0	current state of FSM (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.BlowoffExt	Bool	0xc00ff4	0xff4	RO	[16]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.NUM_SLAVES_G	0x4	0	1	1	0	Status of external blowoff input|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.Blowoff	Bool	0xc00ff8	0xff8	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.State	0x4	0	1	1	0	Blows off the inbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst	UInt1	0xc00ffc	0xffc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.TimerRst	UInt1	0xc00ffc	0xffc	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.HardRst	UInt1	0xc00ffc	0xffc	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.SoftRst	UInt1	0xc00ffc	0xffc	WO	[3]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[0].XpmPauseThresh	UInt9	0xc10100	0x10100	RW	[0]	[9]	0	511	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[0].XpmPauseThresh	0x4	0	9	9	0	Threshold in unit of AXIS words (8 bytes per word).  The XPM is 48byte message. So setting this register to 0x7 would NOT back pressure until there is two message in the pipeline|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.DataCnt[0]	UInt32	0xc80000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.DataCnt[0]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.DataCnt[1]	UInt32	0xc80004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.DataCnt[1]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.DataCnt[2]	UInt32	0xc80008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.DataCnt[2]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NullCnt[0]	UInt32	0xc80100	0x100	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NullCnt[0]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NullCnt[1]	UInt32	0xc80104	0x104	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NullCnt[1]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NullCnt[2]	UInt32	0xc80108	0x108	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NullCnt[2]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimeoutDropCnt[0]	UInt32	0xc80200	0x200	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimeoutDropCnt[0]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimeoutDropCnt[1]	UInt32	0xc80204	0x204	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimeoutDropCnt[1]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimeoutDropCnt[2]	UInt32	0xc80208	0x208	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimeoutDropCnt[2]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TransactionCnt	UInt32	0xc80fc0	0xfc0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TransactionCnt	0x4	0	32	32	0	Increments every time a transition frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TRANS_TDEST_G	UInt8	0xc80fc4	0xfc4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TRANS_TDEST_G	0x4	0	8	8	0	TRANS_TDEST_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.Bypass	UInt3	0xc80fd0	0xfd0	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.Bypass	0x4	0	3	3	0	Mask to bypass a channel|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.Timeout	UInt32	0xc80ff0	0xff0	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.Timeout	0x4	0	32	32	0	Sets the timer's timeout duration.  Setting to 0x0 (default) bypasses the timeout feature|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NUM_SLAVES_G	UInt8	0xc80ff4	0xff4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NUM_SLAVES_G	0x4	0	8	8	0	NUM_SLAVES_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.State	UInt1	0xc80ff8	0xff8	RO	[8]	[1]	0	1	{0: 'IDLE_S', 1: 'MOVE_S'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.State	0x4	0	1	1	0	current state of FSM (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.BlowoffExt	Bool	0xc80ff4	0xff4	RO	[16]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.NUM_SLAVES_G	0x4	0	1	1	0	Status of external blowoff input|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.Blowoff	Bool	0xc80ff8	0xff8	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.State	0x4	0	1	1	0	Blows off the inbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.CntRst	UInt1	0xc80ffc	0xffc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.TimerRst	UInt1	0xc80ffc	0xffc	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.HardRst	UInt1	0xc80ffc	0xffc	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.SoftRst	UInt1	0xc80ffc	0xffc	WO	[3]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[1].XpmPauseThresh	UInt9	0xc90100	0x10100	RW	[0]	[9]	0	511	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[1].XpmPauseThresh	0x4	0	9	9	0	Threshold in unit of AXIS words (8 bytes per word).  The XPM is 48byte message. So setting this register to 0x7 would NOT back pressure until there is two message in the pipeline|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.DataCnt[0]	UInt32	0xd00000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.DataCnt[0]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.DataCnt[1]	UInt32	0xd00004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.DataCnt[1]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.DataCnt[2]	UInt32	0xd00008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.DataCnt[2]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NullCnt[0]	UInt32	0xd00100	0x100	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NullCnt[0]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NullCnt[1]	UInt32	0xd00104	0x104	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NullCnt[1]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NullCnt[2]	UInt32	0xd00108	0x108	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NullCnt[2]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimeoutDropCnt[0]	UInt32	0xd00200	0x200	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimeoutDropCnt[0]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimeoutDropCnt[1]	UInt32	0xd00204	0x204	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimeoutDropCnt[1]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimeoutDropCnt[2]	UInt32	0xd00208	0x208	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimeoutDropCnt[2]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TransactionCnt	UInt32	0xd00fc0	0xfc0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TransactionCnt	0x4	0	32	32	0	Increments every time a transition frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TRANS_TDEST_G	UInt8	0xd00fc4	0xfc4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TRANS_TDEST_G	0x4	0	8	8	0	TRANS_TDEST_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.Bypass	UInt3	0xd00fd0	0xfd0	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.Bypass	0x4	0	3	3	0	Mask to bypass a channel|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.Timeout	UInt32	0xd00ff0	0xff0	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.Timeout	0x4	0	32	32	0	Sets the timer's timeout duration.  Setting to 0x0 (default) bypasses the timeout feature|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NUM_SLAVES_G	UInt8	0xd00ff4	0xff4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NUM_SLAVES_G	0x4	0	8	8	0	NUM_SLAVES_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.State	UInt1	0xd00ff8	0xff8	RO	[8]	[1]	0	1	{0: 'IDLE_S', 1: 'MOVE_S'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.State	0x4	0	1	1	0	current state of FSM (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.BlowoffExt	Bool	0xd00ff4	0xff4	RO	[16]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.NUM_SLAVES_G	0x4	0	1	1	0	Status of external blowoff input|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.Blowoff	Bool	0xd00ff8	0xff8	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.State	0x4	0	1	1	0	Blows off the inbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.CntRst	UInt1	0xd00ffc	0xffc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.TimerRst	UInt1	0xd00ffc	0xffc	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.HardRst	UInt1	0xd00ffc	0xffc	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.SoftRst	UInt1	0xd00ffc	0xffc	WO	[3]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[2].XpmPauseThresh	UInt9	0xd10100	0x10100	RW	[0]	[9]	0	511	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[2].XpmPauseThresh	0x4	0	9	9	0	Threshold in unit of AXIS words (8 bytes per word).  The XPM is 48byte message. So setting this register to 0x7 would NOT back pressure until there is two message in the pipeline|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.DataCnt[0]	UInt32	0xd80000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.DataCnt[0]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.DataCnt[1]	UInt32	0xd80004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.DataCnt[1]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.DataCnt[2]	UInt32	0xd80008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.DataCnt[2]	0x4	0	32	32	0	Increments every time a data frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NullCnt[0]	UInt32	0xd80100	0x100	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NullCnt[0]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NullCnt[1]	UInt32	0xd80104	0x104	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NullCnt[1]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NullCnt[2]	UInt32	0xd80108	0x108	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NullCnt[2]	0x4	0	32	32	0	Increments every time a null frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimeoutDropCnt[0]	UInt32	0xd80200	0x200	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimeoutDropCnt[0]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimeoutDropCnt[1]	UInt32	0xd80204	0x204	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimeoutDropCnt[1]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimeoutDropCnt[2]	UInt32	0xd80208	0x208	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimeoutDropCnt[2]	0x4	0	32	32	0	Increments every time a timeout slave channel drop event happens|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TransactionCnt	UInt32	0xd80fc0	0xfc0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TransactionCnt	0x4	0	32	32	0	Increments every time a transition frame is received|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TRANS_TDEST_G	UInt8	0xd80fc4	0xfc4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TRANS_TDEST_G	0x4	0	8	8	0	TRANS_TDEST_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.Bypass	UInt3	0xd80fd0	0xfd0	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.Bypass	0x4	0	3	3	0	Mask to bypass a channel|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.Timeout	UInt32	0xd80ff0	0xff0	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.Timeout	0x4	0	32	32	0	Sets the timer's timeout duration.  Setting to 0x0 (default) bypasses the timeout feature|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NUM_SLAVES_G	UInt8	0xd80ff4	0xff4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NUM_SLAVES_G	0x4	0	8	8	0	NUM_SLAVES_G generic value|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.State	UInt1	0xd80ff8	0xff8	RO	[8]	[1]	0	1	{0: 'IDLE_S', 1: 'MOVE_S'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.State	0x4	0	1	1	0	current state of FSM (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.BlowoffExt	Bool	0xd80ff4	0xff4	RO	[16]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.NUM_SLAVES_G	0x4	0	1	1	0	Status of external blowoff input|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.Blowoff	Bool	0xd80ff8	0xff8	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.State	0x4	0	1	1	0	Blows off the inbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.CntRst	UInt1	0xd80ffc	0xffc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.TimerRst	UInt1	0xd80ffc	0xffc	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.HardRst	UInt1	0xd80ffc	0xffc	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.SoftRst	UInt1	0xd80ffc	0xffc	WO	[3]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].EventBuilder.CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Application.AppLane[3].XpmPauseThresh	UInt9	0xd90100	0x10100	RW	[0]	[9]	0	511	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Application.AppLane[3].XpmPauseThresh	0x4	0	9	9	0	Threshold in unit of AXIS words (8 bytes per word).  The XPM is 48byte message. So setting this register to 0x7 would NOT back pressure until there is two message in the pipeline|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.CountReset	UInt1	0x800000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.WRITE_EN_G	Bool	0x800004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.NUM_VC_G	UInt8	0x800004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x800004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x800004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.SkipInterval	UInt32	0x800008	0x8	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	UInt3	0x80000c	0xc	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.FlowControlDisable	Bool	0x80000c	0xc	RW	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.TxDisable	Bool	0x80000c	0xc	RW	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.ResetTx	Bool	0x80000c	0xc	RW	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.ResetRx	Bool	0x80000c	0xc	RW	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.TxDiffCtrl	UInt5	0x80000c	0xc	RW	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.TxPreCursor	UInt5	0x80000c	0xc	RW	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.TxPostCursor	UInt5	0x80000c	0xc	RW	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[0]	UInt12	0x800400	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[1]	UInt12	0x800404	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[2]	UInt12	0x800408	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[3]	UInt12	0x80040c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[0]	UInt8	0x800440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[1]	UInt8	0x800444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[2]	UInt8	0x800448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[3]	UInt8	0x80044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.FrameCnt	UInt12	0x800500	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.OpCodeEnCnt	UInt12	0x800504	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActiveCnt	UInt8	0x800600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxInitCnt	UInt8	0x800604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.GearboxAlignedCnt	UInt8	0x800608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkReadyCnt	UInt8	0x80060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemRxLinkReadyCnt	UInt8	0x800610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.FrameErrorCnt	UInt8	0x800614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkDownCnt	UInt8	0x800618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkErrorCnt	UInt8	0x80061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.EbOverflowCnt	UInt8	0x800620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellErrorCnt	UInt8	0x800624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellSofErrorCnt	UInt8	0x800628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellSeqErrorCnt	UInt8	0x80062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellVersionErrorCnt	UInt8	0x800630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellCrcModeErrorCnt	UInt8	0x800634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellCrcErrorCnt	UInt8	0x800638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellEofeErrorCnt	UInt8	0x80063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActive	Bool	0x800710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.GearboxAligned	Bool	0x800710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.LinkReady	Bool	0x800710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemRxLinkReady	Bool	0x800710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemLinkData	UInt48	0x800720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOpCodeData	UInt48	0x800730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemRxPause	UInt4	0x800740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RxClockFreqRaw	UInt32	0x800750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[0]	UInt12	0x800800	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[1]	UInt12	0x800804	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[2]	UInt12	0x800808	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[3]	UInt12	0x80080c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[0]	UInt8	0x800840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[1]	UInt8	0x800844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[2]	UInt8	0x800848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[3]	UInt8	0x80084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.FrameCnt	UInt12	0x800900	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.OpCodeEnCnt	UInt12	0x800904	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.phyTxActiveCnt	UInt8	0x800a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LinkReadyCnt	UInt8	0x800a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.FrameErrorCnt	UInt8	0x800a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.phyTxActive	Bool	0x800b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LinkReady	Bool	0x800b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocLinkData	UInt48	0x800b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOpCodeData	UInt48	0x800b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocTxPause	UInt4	0x800b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.TxClockFreqRaw	UInt32	0x800b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[0].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	UInt1	0x802000	0x0	WO	[0]	[1]	0	1	None	True	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x802000	0x0	RO	[24]	[8]	0	255	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x802000	0x0	RO	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x802000	0x0	RO	[16]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TID_BITS_C	UInt4	0x802000	0x0	RO	[12]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x802000	0x0	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x802000	0x0	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x802000	0x0	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].COMMON_CLK_G	Bool	0x802000	0x0	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameCnt	UInt64	0x802004	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameRate	Int32	0x80200c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameRateMax	Int32	0x802010	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameRateMin	Int32	0x802014	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].RawBandwidth	UInt64	0x802018	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].RawBandwidthMax	UInt64	0x802020	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].RawBandwidthMin	UInt64	0x802028	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameSize	Int32	0x802030	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameSizeMax	Int32	0x802034	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameSizeMin	Int32	0x802038	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[0].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameCnt	UInt64	0x802044	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameRate	Int32	0x80204c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameRateMax	Int32	0x802050	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameRateMin	Int32	0x802054	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].RawBandwidth	UInt64	0x802058	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].RawBandwidthMax	UInt64	0x802060	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].RawBandwidthMin	UInt64	0x802068	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameSize	Int32	0x802070	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameSizeMax	Int32	0x802074	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameSizeMin	Int32	0x802078	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[1].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameCnt	UInt64	0x802084	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameRate	Int32	0x80208c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameRateMax	Int32	0x802090	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameRateMin	Int32	0x802094	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].RawBandwidth	UInt64	0x802098	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].RawBandwidthMax	UInt64	0x8020a0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].RawBandwidthMin	UInt64	0x8020a8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameSize	Int32	0x8020b0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameSizeMax	Int32	0x8020b4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameSizeMin	Int32	0x8020b8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[2].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameCnt	UInt64	0x8020c4	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameRate	Int32	0x8020cc	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameRateMax	Int32	0x8020d0	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameRateMin	Int32	0x8020d4	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].RawBandwidth	UInt64	0x8020d8	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].RawBandwidthMax	UInt64	0x8020e0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].RawBandwidthMin	UInt64	0x8020e8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameSize	Int32	0x8020f0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameSizeMax	Int32	0x8020f4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameSizeMin	Int32	0x8020f8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[0].Ch[3].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.CountReset	UInt1	0x810000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.WRITE_EN_G	Bool	0x810004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.NUM_VC_G	UInt8	0x810004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x810004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x810004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.SkipInterval	UInt32	0x810008	0x8	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	UInt3	0x81000c	0xc	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.FlowControlDisable	Bool	0x81000c	0xc	RW	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.TxDisable	Bool	0x81000c	0xc	RW	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.ResetTx	Bool	0x81000c	0xc	RW	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.ResetRx	Bool	0x81000c	0xc	RW	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.TxDiffCtrl	UInt5	0x81000c	0xc	RW	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.TxPreCursor	UInt5	0x81000c	0xc	RW	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.TxPostCursor	UInt5	0x81000c	0xc	RW	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[0]	UInt12	0x810400	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[1]	UInt12	0x810404	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[2]	UInt12	0x810408	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[3]	UInt12	0x81040c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[0]	UInt8	0x810440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[1]	UInt8	0x810444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[2]	UInt8	0x810448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[3]	UInt8	0x81044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.FrameCnt	UInt12	0x810500	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.OpCodeEnCnt	UInt12	0x810504	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActiveCnt	UInt8	0x810600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxInitCnt	UInt8	0x810604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.GearboxAlignedCnt	UInt8	0x810608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkReadyCnt	UInt8	0x81060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemRxLinkReadyCnt	UInt8	0x810610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.FrameErrorCnt	UInt8	0x810614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkDownCnt	UInt8	0x810618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkErrorCnt	UInt8	0x81061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.EbOverflowCnt	UInt8	0x810620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellErrorCnt	UInt8	0x810624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellSofErrorCnt	UInt8	0x810628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellSeqErrorCnt	UInt8	0x81062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellVersionErrorCnt	UInt8	0x810630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellCrcModeErrorCnt	UInt8	0x810634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellCrcErrorCnt	UInt8	0x810638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellEofeErrorCnt	UInt8	0x81063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActive	Bool	0x810710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.GearboxAligned	Bool	0x810710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.LinkReady	Bool	0x810710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemRxLinkReady	Bool	0x810710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemLinkData	UInt48	0x810720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOpCodeData	UInt48	0x810730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemRxPause	UInt4	0x810740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RxClockFreqRaw	UInt32	0x810750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[0]	UInt12	0x810800	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[1]	UInt12	0x810804	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[2]	UInt12	0x810808	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[3]	UInt12	0x81080c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[0]	UInt8	0x810840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[1]	UInt8	0x810844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[2]	UInt8	0x810848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[3]	UInt8	0x81084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.FrameCnt	UInt12	0x810900	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.OpCodeEnCnt	UInt12	0x810904	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.phyTxActiveCnt	UInt8	0x810a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LinkReadyCnt	UInt8	0x810a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.FrameErrorCnt	UInt8	0x810a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.phyTxActive	Bool	0x810b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LinkReady	Bool	0x810b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocLinkData	UInt48	0x810b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOpCodeData	UInt48	0x810b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocTxPause	UInt4	0x810b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.TxClockFreqRaw	UInt32	0x810b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[1].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	UInt1	0x812000	0x0	WO	[0]	[1]	0	1	None	True	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x812000	0x0	RO	[24]	[8]	0	255	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x812000	0x0	RO	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x812000	0x0	RO	[16]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TID_BITS_C	UInt4	0x812000	0x0	RO	[12]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x812000	0x0	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x812000	0x0	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x812000	0x0	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].COMMON_CLK_G	Bool	0x812000	0x0	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameCnt	UInt64	0x812004	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameRate	Int32	0x81200c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameRateMax	Int32	0x812010	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameRateMin	Int32	0x812014	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].RawBandwidth	UInt64	0x812018	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].RawBandwidthMax	UInt64	0x812020	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].RawBandwidthMin	UInt64	0x812028	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameSize	Int32	0x812030	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameSizeMax	Int32	0x812034	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameSizeMin	Int32	0x812038	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[0].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameCnt	UInt64	0x812044	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameRate	Int32	0x81204c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameRateMax	Int32	0x812050	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameRateMin	Int32	0x812054	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].RawBandwidth	UInt64	0x812058	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].RawBandwidthMax	UInt64	0x812060	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].RawBandwidthMin	UInt64	0x812068	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameSize	Int32	0x812070	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameSizeMax	Int32	0x812074	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameSizeMin	Int32	0x812078	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[1].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameCnt	UInt64	0x812084	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameRate	Int32	0x81208c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameRateMax	Int32	0x812090	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameRateMin	Int32	0x812094	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].RawBandwidth	UInt64	0x812098	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].RawBandwidthMax	UInt64	0x8120a0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].RawBandwidthMin	UInt64	0x8120a8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameSize	Int32	0x8120b0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameSizeMax	Int32	0x8120b4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameSizeMin	Int32	0x8120b8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[2].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameCnt	UInt64	0x8120c4	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameRate	Int32	0x8120cc	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameRateMax	Int32	0x8120d0	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameRateMin	Int32	0x8120d4	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].RawBandwidth	UInt64	0x8120d8	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].RawBandwidthMax	UInt64	0x8120e0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].RawBandwidthMin	UInt64	0x8120e8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameSize	Int32	0x8120f0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameSizeMax	Int32	0x8120f4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameSizeMin	Int32	0x8120f8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[1].Ch[3].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.CountReset	UInt1	0x820000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.WRITE_EN_G	Bool	0x820004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.NUM_VC_G	UInt8	0x820004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x820004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x820004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.SkipInterval	UInt32	0x820008	0x8	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	UInt3	0x82000c	0xc	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.FlowControlDisable	Bool	0x82000c	0xc	RW	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.TxDisable	Bool	0x82000c	0xc	RW	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.ResetTx	Bool	0x82000c	0xc	RW	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.ResetRx	Bool	0x82000c	0xc	RW	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.TxDiffCtrl	UInt5	0x82000c	0xc	RW	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.TxPreCursor	UInt5	0x82000c	0xc	RW	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.TxPostCursor	UInt5	0x82000c	0xc	RW	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[0]	UInt12	0x820400	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[1]	UInt12	0x820404	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[2]	UInt12	0x820408	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[3]	UInt12	0x82040c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[0]	UInt8	0x820440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[1]	UInt8	0x820444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[2]	UInt8	0x820448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[3]	UInt8	0x82044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.FrameCnt	UInt12	0x820500	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.OpCodeEnCnt	UInt12	0x820504	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActiveCnt	UInt8	0x820600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxInitCnt	UInt8	0x820604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.GearboxAlignedCnt	UInt8	0x820608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkReadyCnt	UInt8	0x82060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemRxLinkReadyCnt	UInt8	0x820610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.FrameErrorCnt	UInt8	0x820614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkDownCnt	UInt8	0x820618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkErrorCnt	UInt8	0x82061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.EbOverflowCnt	UInt8	0x820620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellErrorCnt	UInt8	0x820624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellSofErrorCnt	UInt8	0x820628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellSeqErrorCnt	UInt8	0x82062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellVersionErrorCnt	UInt8	0x820630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellCrcModeErrorCnt	UInt8	0x820634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellCrcErrorCnt	UInt8	0x820638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellEofeErrorCnt	UInt8	0x82063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActive	Bool	0x820710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.GearboxAligned	Bool	0x820710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.LinkReady	Bool	0x820710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemRxLinkReady	Bool	0x820710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemLinkData	UInt48	0x820720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOpCodeData	UInt48	0x820730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemRxPause	UInt4	0x820740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RxClockFreqRaw	UInt32	0x820750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[0]	UInt12	0x820800	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[1]	UInt12	0x820804	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[2]	UInt12	0x820808	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[3]	UInt12	0x82080c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[0]	UInt8	0x820840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[1]	UInt8	0x820844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[2]	UInt8	0x820848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[3]	UInt8	0x82084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.FrameCnt	UInt12	0x820900	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.OpCodeEnCnt	UInt12	0x820904	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.phyTxActiveCnt	UInt8	0x820a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LinkReadyCnt	UInt8	0x820a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.FrameErrorCnt	UInt8	0x820a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.phyTxActive	Bool	0x820b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LinkReady	Bool	0x820b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocLinkData	UInt48	0x820b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOpCodeData	UInt48	0x820b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocTxPause	UInt4	0x820b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.TxClockFreqRaw	UInt32	0x820b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[2].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	UInt1	0x822000	0x0	WO	[0]	[1]	0	1	None	True	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x822000	0x0	RO	[24]	[8]	0	255	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x822000	0x0	RO	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x822000	0x0	RO	[16]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TID_BITS_C	UInt4	0x822000	0x0	RO	[12]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x822000	0x0	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x822000	0x0	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x822000	0x0	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].COMMON_CLK_G	Bool	0x822000	0x0	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameCnt	UInt64	0x822004	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameRate	Int32	0x82200c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameRateMax	Int32	0x822010	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameRateMin	Int32	0x822014	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].RawBandwidth	UInt64	0x822018	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].RawBandwidthMax	UInt64	0x822020	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].RawBandwidthMin	UInt64	0x822028	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameSize	Int32	0x822030	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameSizeMax	Int32	0x822034	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameSizeMin	Int32	0x822038	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[0].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameCnt	UInt64	0x822044	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameRate	Int32	0x82204c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameRateMax	Int32	0x822050	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameRateMin	Int32	0x822054	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].RawBandwidth	UInt64	0x822058	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].RawBandwidthMax	UInt64	0x822060	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].RawBandwidthMin	UInt64	0x822068	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameSize	Int32	0x822070	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameSizeMax	Int32	0x822074	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameSizeMin	Int32	0x822078	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[1].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameCnt	UInt64	0x822084	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameRate	Int32	0x82208c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameRateMax	Int32	0x822090	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameRateMin	Int32	0x822094	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].RawBandwidth	UInt64	0x822098	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].RawBandwidthMax	UInt64	0x8220a0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].RawBandwidthMin	UInt64	0x8220a8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameSize	Int32	0x8220b0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameSizeMax	Int32	0x8220b4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameSizeMin	Int32	0x8220b8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[2].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameCnt	UInt64	0x8220c4	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameRate	Int32	0x8220cc	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameRateMax	Int32	0x8220d0	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameRateMin	Int32	0x8220d4	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].RawBandwidth	UInt64	0x8220d8	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].RawBandwidthMax	UInt64	0x8220e0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].RawBandwidthMin	UInt64	0x8220e8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameSize	Int32	0x8220f0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameSizeMax	Int32	0x8220f4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameSizeMin	Int32	0x8220f8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[2].Ch[3].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.CountReset	UInt1	0x830000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.WRITE_EN_G	Bool	0x830004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.NUM_VC_G	UInt8	0x830004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x830004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x830004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.SkipInterval	UInt32	0x830008	0x8	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	UInt3	0x83000c	0xc	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.FlowControlDisable	Bool	0x83000c	0xc	RW	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.TxDisable	Bool	0x83000c	0xc	RW	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.ResetTx	Bool	0x83000c	0xc	RW	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.ResetRx	Bool	0x83000c	0xc	RW	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.TxDiffCtrl	UInt5	0x83000c	0xc	RW	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.TxPreCursor	UInt5	0x83000c	0xc	RW	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.TxPostCursor	UInt5	0x83000c	0xc	RW	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[0]	UInt12	0x830400	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[1]	UInt12	0x830404	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[2]	UInt12	0x830408	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[3]	UInt12	0x83040c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[0]	UInt8	0x830440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[1]	UInt8	0x830444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[2]	UInt8	0x830448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[3]	UInt8	0x83044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.FrameCnt	UInt12	0x830500	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.OpCodeEnCnt	UInt12	0x830504	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActiveCnt	UInt8	0x830600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxInitCnt	UInt8	0x830604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.GearboxAlignedCnt	UInt8	0x830608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkReadyCnt	UInt8	0x83060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemRxLinkReadyCnt	UInt8	0x830610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.FrameErrorCnt	UInt8	0x830614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkDownCnt	UInt8	0x830618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkErrorCnt	UInt8	0x83061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.EbOverflowCnt	UInt8	0x830620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellErrorCnt	UInt8	0x830624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellSofErrorCnt	UInt8	0x830628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellSeqErrorCnt	UInt8	0x83062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellVersionErrorCnt	UInt8	0x830630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellCrcModeErrorCnt	UInt8	0x830634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellCrcErrorCnt	UInt8	0x830638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellEofeErrorCnt	UInt8	0x83063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActive	Bool	0x830710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.GearboxAligned	Bool	0x830710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.LinkReady	Bool	0x830710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemRxLinkReady	Bool	0x830710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemLinkData	UInt48	0x830720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOpCodeData	UInt48	0x830730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemRxPause	UInt4	0x830740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RxClockFreqRaw	UInt32	0x830750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[0]	UInt12	0x830800	0x0	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[0]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[1]	UInt12	0x830804	0x4	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[1]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[2]	UInt12	0x830808	0x8	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[2]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[3]	UInt12	0x83080c	0xc	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocPauseCnt[3]	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[0]	UInt8	0x830840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[1]	UInt8	0x830844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[2]	UInt8	0x830848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[3]	UInt8	0x83084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.FrameCnt	UInt12	0x830900	0x100	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.FrameCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.OpCodeEnCnt	UInt12	0x830904	0x104	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.OpCodeEnCnt	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.phyTxActiveCnt	UInt8	0x830a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LinkReadyCnt	UInt8	0x830a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.FrameErrorCnt	UInt8	0x830a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.phyTxActive	Bool	0x830b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LinkReady	Bool	0x830b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocLinkData	UInt48	0x830b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOpCodeData	UInt48	0x830b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocTxPause	UInt4	0x830b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.TxClockFreqRaw	UInt32	0x830b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpMon[3].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	UInt1	0x832000	0x0	WO	[0]	[1]	0	1	None	True	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TDATA_BYTES_C	UInt8	0x832000	0x0	RO	[24]	[8]	0	255	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TDEST_BITS_C	UInt4	0x832000	0x0	RO	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TUSER_BITS_C	UInt4	0x832000	0x0	RO	[16]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TID_BITS_C	UInt4	0x832000	0x0	RO	[12]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TKEEP_MODE_C	UInt4	0x832000	0x0	RO	[8]	[4]	0	15	{0: 'TKEEP_NORMAL_C', 1: 'TKEEP_COMP_C', 2: 'TKEEP_FIXED_C', 3: 'TKEEP_COUNT_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TUSER_MODE_C	UInt4	0x832000	0x0	RO	[4]	[4]	0	15	{0: 'TUSER_NORMAL_C', 1: 'TUSER_FIRST_LAST_C', 2: 'TUSER_LAST_C', 3: 'TUSER_NONE_C', 15: 'UNDEFINED'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].AXIS_CONFIG_G_TSTRB_EN_C	Bool	0x832000	0x0	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].COMMON_CLK_G	Bool	0x832000	0x0	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	True	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].CntRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameCnt	UInt64	0x832004	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameRate	Int32	0x83200c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameRateMax	Int32	0x832010	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameRateMin	Int32	0x832014	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].RawBandwidth	UInt64	0x832018	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].RawBandwidthMax	UInt64	0x832020	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].RawBandwidthMin	UInt64	0x832028	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameSize	Int32	0x832030	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameSizeMax	Int32	0x832034	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameSizeMin	Int32	0x832038	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[0].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameCnt	UInt64	0x832044	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameRate	Int32	0x83204c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameRateMax	Int32	0x832050	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameRateMin	Int32	0x832054	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].RawBandwidth	UInt64	0x832058	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].RawBandwidthMax	UInt64	0x832060	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].RawBandwidthMin	UInt64	0x832068	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameSize	Int32	0x832070	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameSizeMax	Int32	0x832074	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameSizeMin	Int32	0x832078	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[1].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameCnt	UInt64	0x832084	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameRate	Int32	0x83208c	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameRateMax	Int32	0x832090	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameRateMin	Int32	0x832094	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].RawBandwidth	UInt64	0x832098	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].RawBandwidthMax	UInt64	0x8320a0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].RawBandwidthMin	UInt64	0x8320a8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameSize	Int32	0x8320b0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameSizeMax	Int32	0x8320b4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameSizeMin	Int32	0x8320b8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[2].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameCnt	UInt64	0x8320c4	0x4	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameCnt	0x8	0	64	64	0	Increments every time a tValid + tLast + tReady detected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameRate	Int32	0x8320cc	0xc	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameRate	0x4	0	32	32	0	Current Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameRateMax	Int32	0x8320d0	0x10	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameRateMax	0x4	0	32	32	0	Max Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameRateMin	Int32	0x8320d4	0x14	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameRateMin	0x4	0	32	32	0	Min Frame Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].RawBandwidth	UInt64	0x8320d8	0x18	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].RawBandwidth	0x8	0	64	64	0	Current Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].RawBandwidthMax	UInt64	0x8320e0	0x20	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].RawBandwidthMax	0x8	0	64	64	0	Max Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].RawBandwidthMin	UInt64	0x8320e8	0x28	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].RawBandwidthMin	0x8	0	64	64	0	Min Bandwidth|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameSize	Int32	0x8320f0	0x30	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameSize	0x4	0	32	32	0	Current Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameSizeMax	Int32	0x8320f4	0x34	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameSizeMax	0x4	0	32	32	0	Max Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameSizeMin	Int32	0x8320f8	0x38	RO	[0]	[32]	-2147483647	2147483647	None	False	True	3	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.PgpRxAxisMon[3].Ch[3].FrameSizeMin	0x4	0	32	32	0	Min Frame Size. Note: Only valid for non-interleaved AXI stream frames|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[0]	UInt32	0x900000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[0]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[1]	UInt32	0x900004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[1]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[2]	UInt32	0x900008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[2]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[3]	UInt32	0x90000c	0xc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[3]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[4]	UInt32	0x900010	0x10	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[4]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[5]	UInt32	0x900014	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[5]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[6]	UInt32	0x900018	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[6]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[7]	UInt32	0x90001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[7]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[8]	UInt32	0x900020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[8]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[9]	UInt32	0x900024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[9]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[10]	UInt32	0x900028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[10]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[11]	UInt32	0x90002c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[11]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[12]	UInt32	0x900030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[12]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[13]	UInt32	0x900034	0x34	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[13]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[14]	UInt32	0x900038	0x38	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[14]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[15]	UInt32	0x90003c	0x3c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[15]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[16]	UInt32	0x900040	0x40	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[16]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[17]	UInt32	0x900044	0x44	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[17]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[18]	UInt32	0x900048	0x48	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[18]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[19]	UInt32	0x90004c	0x4c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[19]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[20]	UInt32	0x900050	0x50	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[20]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[21]	UInt32	0x900054	0x54	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[21]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[22]	UInt32	0x900058	0x58	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[22]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[23]	UInt32	0x90005c	0x5c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[23]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[24]	UInt32	0x900060	0x60	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[24]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[25]	UInt32	0x900064	0x64	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[25]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[26]	UInt32	0x900068	0x68	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[26]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[27]	UInt32	0x90006c	0x6c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[27]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[28]	UInt32	0x900070	0x70	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[28]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[29]	UInt32	0x900074	0x74	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[29]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[30]	UInt32	0x900078	0x78	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[30]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[31]	UInt32	0x90007c	0x7c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[31]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[32]	UInt32	0x900080	0x80	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[32]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[33]	UInt32	0x900084	0x84	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[33]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[34]	UInt32	0x900088	0x88	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[34]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[35]	UInt32	0x90008c	0x8c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[35]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[36]	UInt32	0x900090	0x90	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[36]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[37]	UInt32	0x900094	0x94	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[37]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[38]	UInt32	0x900098	0x98	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[38]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[39]	UInt32	0x90009c	0x9c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[39]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[40]	UInt32	0x9000a0	0xa0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[40]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[41]	UInt32	0x9000a4	0xa4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[41]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[42]	UInt32	0x9000a8	0xa8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[42]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[43]	UInt32	0x9000ac	0xac	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[43]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[44]	UInt32	0x9000b0	0xb0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[44]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[45]	UInt32	0x9000b4	0xb4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[45]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[46]	UInt32	0x9000b8	0xb8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[46]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[47]	UInt32	0x9000bc	0xbc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[47]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[48]	UInt32	0x9000c0	0xc0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[48]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[49]	UInt32	0x9000c4	0xc4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[49]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[50]	UInt32	0x9000c8	0xc8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[50]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[51]	UInt32	0x9000cc	0xcc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[51]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[52]	UInt32	0x9000d0	0xd0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[52]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[53]	UInt32	0x9000d4	0xd4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[53]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[54]	UInt32	0x9000d8	0xd8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[54]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[55]	UInt32	0x9000dc	0xdc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[55]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[56]	UInt32	0x9000e0	0xe0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[56]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[57]	UInt32	0x9000e4	0xe4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[57]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[58]	UInt32	0x9000e8	0xe8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[58]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[59]	UInt32	0x9000ec	0xec	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[59]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[60]	UInt32	0x9000f0	0xf0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[60]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[61]	UInt32	0x9000f4	0xf4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[61]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[62]	UInt32	0x9000f8	0xf8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[62]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[63]	UInt32	0x9000fc	0xfc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseCount[63]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseTarget	UInt7	0x900100	0x100	RW	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseTarget	0x4	0	7	7	0	Timing frame phase lock target|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].ResetLen	UInt4	0x900100	0x100	RW	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].PhaseTarget	0x4	0	4	4	0	Reset length|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].LastPhase	UInt7	0x900104	0x104	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].LastPhase	0x4	0	7	7	0	Last timing frame phase seen|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].TxClkFreqRaw	UInt32	0x900108	0x108	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].TxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].RxClkFreqRaw	UInt32	0x90010c	0x10c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[0].RxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[0]	UInt32	0x910000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[0]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[1]	UInt32	0x910004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[1]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[2]	UInt32	0x910008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[2]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[3]	UInt32	0x91000c	0xc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[3]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[4]	UInt32	0x910010	0x10	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[4]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[5]	UInt32	0x910014	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[5]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[6]	UInt32	0x910018	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[6]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[7]	UInt32	0x91001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[7]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[8]	UInt32	0x910020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[8]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[9]	UInt32	0x910024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[9]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[10]	UInt32	0x910028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[10]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[11]	UInt32	0x91002c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[11]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[12]	UInt32	0x910030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[12]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[13]	UInt32	0x910034	0x34	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[13]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[14]	UInt32	0x910038	0x38	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[14]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[15]	UInt32	0x91003c	0x3c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[15]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[16]	UInt32	0x910040	0x40	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[16]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[17]	UInt32	0x910044	0x44	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[17]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[18]	UInt32	0x910048	0x48	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[18]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[19]	UInt32	0x91004c	0x4c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[19]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[20]	UInt32	0x910050	0x50	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[20]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[21]	UInt32	0x910054	0x54	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[21]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[22]	UInt32	0x910058	0x58	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[22]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[23]	UInt32	0x91005c	0x5c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[23]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[24]	UInt32	0x910060	0x60	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[24]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[25]	UInt32	0x910064	0x64	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[25]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[26]	UInt32	0x910068	0x68	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[26]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[27]	UInt32	0x91006c	0x6c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[27]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[28]	UInt32	0x910070	0x70	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[28]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[29]	UInt32	0x910074	0x74	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[29]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[30]	UInt32	0x910078	0x78	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[30]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[31]	UInt32	0x91007c	0x7c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[31]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[32]	UInt32	0x910080	0x80	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[32]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[33]	UInt32	0x910084	0x84	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[33]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[34]	UInt32	0x910088	0x88	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[34]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[35]	UInt32	0x91008c	0x8c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[35]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[36]	UInt32	0x910090	0x90	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[36]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[37]	UInt32	0x910094	0x94	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[37]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[38]	UInt32	0x910098	0x98	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[38]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[39]	UInt32	0x91009c	0x9c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[39]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[40]	UInt32	0x9100a0	0xa0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[40]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[41]	UInt32	0x9100a4	0xa4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[41]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[42]	UInt32	0x9100a8	0xa8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[42]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[43]	UInt32	0x9100ac	0xac	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[43]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[44]	UInt32	0x9100b0	0xb0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[44]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[45]	UInt32	0x9100b4	0xb4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[45]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[46]	UInt32	0x9100b8	0xb8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[46]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[47]	UInt32	0x9100bc	0xbc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[47]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[48]	UInt32	0x9100c0	0xc0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[48]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[49]	UInt32	0x9100c4	0xc4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[49]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[50]	UInt32	0x9100c8	0xc8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[50]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[51]	UInt32	0x9100cc	0xcc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[51]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[52]	UInt32	0x9100d0	0xd0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[52]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[53]	UInt32	0x9100d4	0xd4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[53]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[54]	UInt32	0x9100d8	0xd8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[54]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[55]	UInt32	0x9100dc	0xdc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[55]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[56]	UInt32	0x9100e0	0xe0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[56]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[57]	UInt32	0x9100e4	0xe4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[57]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[58]	UInt32	0x9100e8	0xe8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[58]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[59]	UInt32	0x9100ec	0xec	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[59]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[60]	UInt32	0x9100f0	0xf0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[60]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[61]	UInt32	0x9100f4	0xf4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[61]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[62]	UInt32	0x9100f8	0xf8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[62]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[63]	UInt32	0x9100fc	0xfc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseCount[63]	0x4	0	32	32	0	Timing frame phase|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseTarget	UInt7	0x910100	0x100	RW	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseTarget	0x4	0	7	7	0	Timing frame phase lock target|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].ResetLen	UInt4	0x910100	0x100	RW	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].PhaseTarget	0x4	0	4	4	0	Reset length|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].LastPhase	UInt7	0x910104	0x104	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].LastPhase	0x4	0	7	7	0	Last timing frame phase seen|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].TxClkFreqRaw	UInt32	0x910108	0x108	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].TxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].RxClkFreqRaw	UInt32	0x91010c	0x10c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.GthRxAlignCheck[1].RxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.sofCount	UInt32	0x980000	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.sofCount	0x4	0	32	32	0	Start of frame count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.eofCount	UInt32	0x980004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.eofCount	0x4	0	32	32	0	End of frame count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.FidCount	UInt32	0x980008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.FidCount	0x4	0	32	32	0	Valid frame count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.CrcErrCount	UInt32	0x98000c	0xc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.CrcErrCount	0x4	0	32	32	0	CRC error count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxClkCount	UInt32	0x980010	0x10	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxClkCount	0x4	0	32	32	0	Recovered clock count div 16|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxRstCount	UInt32	0x980014	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxRstCount	0x4	0	32	32	0	Receive link reset count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDecErrCount	UInt32	0x980018	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDecErrCount	0x4	0	32	32	0	Receive 8b/10b decode error count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDspErrCount	UInt32	0x98001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDspErrCount	0x4	0	32	32	0	Receive disparity error count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	UInt1	0x980020	0x20	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Reset receive counters|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxLinkUp	UInt1	0x980020	0x20	RO	[1]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Receive link status|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxPolarity	UInt1	0x980020	0x20	RW	[2]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Invert receive link polarity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.C_RxReset	UInt1	0x980020	0x20	WO	[3]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Reset receive link|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClkSel	UInt1	0x980020	0x20	RW	[4]	[1]	0	1	{0: 'LCLS-I Clock', 1: 'LCLS-II Clock'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Select LCLS-I/LCLS-II Timing|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxDown	UInt1	0x980020	0x20	RW	[5]	[1]	0	1	None	False	False	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Rx down latch status|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.BypassRst	UInt1	0x980020	0x20	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Buffer bypass reset status|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.RxPllReset	UInt1	0x980020	0x20	WO	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Reset RX PLL|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ModeSel	UInt1	0x980020	0x20	RW	[9]	[1]	0	1	{0: 'Lcls1Protocol', 1: 'Lcls2Protocol'}	False	False	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Select timing mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ModeSelEn	UInt1	0x980020	0x20	RW	[10]	[1]	0	1	{0: 'UseClkSel', 1: 'UseModeSel'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.ClearRxCounters	0x4	0	1	1	0	Enable ModeSel register|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.MsgDelay	UInt20	0x980024	0x24	RW	[0]	[20]	0	1048575	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.MsgDelay	0x4	0	20	20	0	LCLS-II timing frame pipeline delay (186MHz clks)|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.TxClkCount	UInt32	0x980028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.TxClkCount	0x4	0	32	32	0	Transmit clock counter div 16|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.BypassDoneCount	UInt16	0x98002c	0x2c	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.BypassDoneCount	0x4	0	16	16	0	Buffer bypass done count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.BypassResetCount	UInt16	0x98002c	0x2c	RO	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingFrameRx.BypassDoneCount	0x4	0	16	16	0	Buffer bypass reset count|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxPolarity	UInt1	0x930000	0x0	RW	[1]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxPolarity	0x4	0	1	1	0	Invert transmit link polarity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxLoopback	UInt3	0x930000	0x0	RW	[2]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxPolarity	0x4	0	3	3	0	Set transmit link loopback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxInhibit	UInt1	0x930000	0x0	RW	[5]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxPolarity	0x4	0	1	1	0	Set transmit link inhibit|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BaseControl	UInt16	0x930004	0x4	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BaseControl	0x4	0	16	16	0	Base rate trigger divisor|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PulseIdWr	UInt64	0x930058	0x58	WO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PulseIdWr	0x8	0	64	64	0	Pulse ID write|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PulseIdRd	UInt64	0x930008	0x8	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PulseIdRd	0x8	0	64	64	0	Pulse ID read|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PulseIdSet	UInt1	0x930070	0x70	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PulseIdSet	0x4	0	1	1	0	Activates PulseId register value|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TStampWr	UInt64	0x930060	0x60	WO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TStampWr	0x8	0	64	64	0	Time stamp Write|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TStampRd	UInt64	0x930010	0x10	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TStampRd	0x8	0	64	64	0	Time stamp read|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TStampSet	UInt1	0x930074	0x74	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TStampSet	0x4	0	1	1	0	Activates Timestamp register value|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[0]	UInt32	0x930018	0x18	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[0]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[1]	UInt32	0x93001c	0x1c	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[1]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[2]	UInt32	0x930020	0x20	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[2]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[3]	UInt32	0x930024	0x24	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[3]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[4]	UInt32	0x930028	0x28	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[4]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[5]	UInt32	0x93002c	0x2c	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[5]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[6]	UInt32	0x930030	0x30	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[6]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[7]	UInt32	0x930034	0x34	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[7]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[8]	UInt32	0x930038	0x38	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[8]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[9]	UInt32	0x93003c	0x3c	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.FixedRateDiv[9]	0x4	0	32	32	0	Fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.RateReload	UInt1	0x930040	0x40	WO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.RateReload	0x4	0	1	1	0	Loads cached fixed rate marker divisors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NBeamSeq	UInt6	0x93004c	0x4c	RO	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NBeamSeq	0x4	0	6	6	0	Number of beam request engines|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NControlSeq	UInt8	0x93004c	0x4c	RO	[6]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NBeamSeq	0x4	0	8	8	0	Number of control sequence engines|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NArraysBsa	UInt8	0x93004c	0x4c	RO	[14]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NBeamSeq	0x4	0	8	8	0	Number of BSA arrays|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.SeqAddrLen	UInt4	0x93004c	0x4c	RO	[22]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NBeamSeq	0x4	0	4	4	0	Number of beam sequence engines|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NAllowSeq	UInt6	0x93004c	0x4c	RO	[26]	[6]	0	63	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.NBeamSeq	0x4	0	6	6	0	Number of beam allow engines|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxReset	UInt1	0x930068	0x68	WO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.TxReset	0x4	0	1	1	0	Reset transmit link|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.CountIntervalReset	UInt1	0x93006c	0x6c	WO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.CountIntervalReset	0x4	0	1	1	0	Count Interval Reset|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	UInt12	0x930078	0x78	RW	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	0x4	0	12	12	0	Lcls-1 BSA Number of Samples - 1|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaRate	UInt3	0x930078	0x78	RW	[12]	[3]	0	7	{0: '120Hz', 1: '60Hz', 2: '30Hz', 3: '10Hz', 4: '5Hz', 5: '1Hz', 6: '0.5Hz'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	0x4	0	3	3	0	Lcls-1 BSA Rate|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaTimeSlot	UInt3	0x930078	0x78	RW	[15]	[3]	0	7	{0: 'TS1', 1: 'TS2', 2: 'TS3', 3: 'TS4', 4: 'TS5', 5: 'TS6'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	0x4	0	3	3	0	Lcls-1 BSA Time Slot|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaSeverity	UInt2	0x930078	0x78	RW	[18]	[2]	0	3	{0: 'INVALID', 1: 'MAJOR', 2: 'MINOR'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	0x4	0	2	2	0	Lcls-1 BSA Rejection Severity Threshold|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaEdefSlot	UInt4	0x930078	0x78	RW	[20]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	0x4	0	4	4	0	Lcls-1 BSA EDEF Slot Number|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumAvgs	UInt8	0x930078	0x78	RW	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaNumSamples	0x4	0	8	8	0	Lcls-1 BSA Number of Values to Average per Sample - 1|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaStart	UInt32	0x93007c	0x7c	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.Lcls1BsaStart	0x4	0	32	32	0	Lcls-1 BSA Started by Writing any Value Here|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaCompleteWr	UInt64	0x930050	0x50	WO	[0]	[64]	0	18446744073709551615	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaCompleteWr	0x8	0	64	64	0	BSA complete write|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaCompleteRd	UInt64	0x930050	0x50	RO	[0]	[64]	0	18446744073709551615	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaCompleteWr	0x8	0	64	64	0	BSA complete read|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaActive[0]	UInt1	0x9301fc	0x1fc	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaActive[0]	0x4	0	1	1	0	Activates/Deactivates BSA EDEF|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	UInt2	0x930200	0x200	RW	[0]	[2]	0	3	{0: 'FixedRate', 1: 'ACRate', 2: 'Sequencer'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	2	2	0	BSA def rate mode selection|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaFixedRate[0]	UInt4	0x930200	0x200	RW	[2]	[4]	0	15	{0: '1MHz', 1: '71kHz', 2: '10kHz', 3: '1kHz', 4: '100Hz', 5: '10Hz', 6: '1Hz'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	4	4	0	BSA fixed rate mode selection|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaACRate[0]	UInt3	0x930200	0x200	RW	[6]	[3]	0	7	{0: '60Hz', 1: '30Hz', 2: '10Hz', 3: '5Hz', 4: '1Hz', 5: '0.5Hz'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	3	3	0	BSA AC rate mode selection|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaACTSMask[0]	UInt6	0x930200	0x200	RW	[9]	[6]	0	63	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	6	6	0	BSA AC timeslot mask selection|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaSequenceSelect[0]	UInt5	0x930200	0x200	RW	[15]	[5]	0	31	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	5	5	0	BSA sequencer selection|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaSequenceBitSelect[0]	UInt4	0x930200	0x200	RW	[20]	[4]	0	15	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	4	4	0	BSA sequencer bit selection|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaDestMode[0]	UInt2	0x930200	0x200	RW	[24]	[2]	0	3	{0: 'Dont_Care', 1: 'Inclusive', 2: 'Exclusive'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaRateSelMode[0]	0x4	0	2	2	0	BSA destination mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaDestInclusiveMask[0]	UInt16	0x930204	0x204	RW	[0]	[16]	0	65535	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaDestInclusiveMask[0]	0x4	0	16	16	0	BSA inclusive destination mask|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaDestExclusiveMask[0]	UInt16	0x930204	0x204	RW	[16]	[16]	0	65535	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaDestInclusiveMask[0]	0x4	0	16	16	0	BSA exclusive destination mask|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaNtoAvg[0]	UInt13	0x930208	0x208	RW	[0]	[13]	0	8191	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaNtoAvg[0]	0x4	0	13	13	0	BSA def num acquisitions to average|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaAvgToWr[0]	UInt16	0x930208	0x208	RW	[16]	[16]	0	65535	None	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaNtoAvg[0]	0x4	0	16	16	0	BSA def num averages to record|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaMaxSeverity[0]	UInt2	0x930208	0x208	RW	[14]	[2]	0	3	{0: 'NoAlarm', 1: 'Minor', 2: 'Major', 3: 'Invalid'}	True	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BsaNtoAvg[0]	0x4	0	2	2	0	BSA def max alarm severity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PllCnt	UInt32	0x930500	0x500	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.PllCnt	0x4	0	32	32	0	Count of PLL status changes|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.ClkCnt	UInt32	0x930504	0x504	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.ClkCnt	0x4	0	32	32	0	Count of local 186M clock|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.SyncErrCnt	UInt32	0x930508	0x508	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.SyncErrCnt	0x4	0	32	32	0	Count of 71k sync errors|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.CountInterval	UInt32	0x93050c	0x50c	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.CountInterval	0x4	0	32	32	0	Interval counters update period|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BaseRateCount	UInt32	0x930510	0x510	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.TPGMiniCore.BaseRateCount	0x4	0	32	32	0	Count of base rate triggers|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.AxilRdEn	Bool	0x931014	0x14	RW	[31]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.AxilRdEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Link	UInt4	0x931000	0x0	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Link	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	Bool	0x931004	0x4	RW	[18]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxPllRst	Bool	0x931004	0x4	RW	[19]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Loopback	Bool	0x931004	0x4	RW	[28]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxRst	Bool	0x931004	0x4	RW	[29]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxRst	Bool	0x931004	0x4	RW	[30]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.HwEnable	Bool	0x931004	0x4	RW	[31]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxPllRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	UInt16	0x931008	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxResetDone	Bool	0x931008	0x8	RO	[16]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.TxReady	Bool	0x931008	0x8	RO	[17]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxResetDone	Bool	0x931008	0x8	RO	[18]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxReady	Bool	0x931008	0x8	RO	[19]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxIsXpm	Bool	0x931008	0x8	RO	[20]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxErrorCnts	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxId	UInt32	0x93100c	0xc	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxId	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxRcvCnts	UInt32	0x931010	0x10	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.RxRcvCnts	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Config_L0Select_Reset	UInt1	0x931014	0x14	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.AxilRdEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Config_L0Select_Enabled	Bool	0x931014	0x14	RW	[16]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.AxilRdEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Config_L0Select_RateSel	UInt16	0x931018	0x18	RW	[0]	[16]	0	65535	{0: '929 kHz', 1: '71 kHz', 2: '10 kHz', 3: '1 kHz', 4: '100 Hz', 5: '10 Hz', 6: '1 Hz', 32768: 'Undefined'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Config_L0Select_RateSel	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Config_L0Select_DestSel	UInt16	0x931018	0x18	RW	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Config_L0Select_RateSel	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_Enabled	UInt40	0x931020	0x20	RO	[0]	[40]	0	1099511627775	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_Enabled	0x8	0	40	40	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_Inhibited	UInt40	0x931028	0x28	RO	[0]	[40]	0	1099511627775	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_Inhibited	0x8	0	40	40	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_Num	UInt40	0x931030	0x30	RO	[0]	[40]	0	1099511627775	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_Num	0x8	0	40	40	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_NumInh	UInt40	0x931038	0x38	RO	[0]	[40]	0	1099511627775	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_NumInh	0x8	0	40	40	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_NumAcc	UInt40	0x931040	0x40	RO	[0]	[40]	0	1099511627775	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Status_L0Select_NumAcc	0x8	0	40	40	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Pipeline_Depth_Clks	UInt16	0x931048	0x48	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Pipeline_Depth_Clks	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Pipeline_Depth_Fids	UInt8	0x931048	0x48	RW	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.Pipeline_Depth_Clks	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.PartitionMessage_Hdr	UInt16	0x93104c	0x4c	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.XpmMiniWrapper.XpmMini.PartitionMessage_Hdr	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].EnableReg	Bool	0x940000	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].EnableReg	0x4	0	1	1	0	Enable Register|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].RateType	UInt2	0x940004	0x4	RW	[11]	[2]	0	3	{0: 'FixedRates', 1: 'AcRates', 2: 'ControlWord', 3: 'INVALID'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].RateSel	UInt11	0x940004	0x4	RW	[0]	[11]	0	2047	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].RateType	0x4	0	11	11	0	Rate select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].DestType	UInt2	0x940004	0x4	RW	[29]	[2]	0	3	{2: 'All', 0: 'BeamRequest', 1: 'NotBeamRequest', 3: 'Invalid'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].DestSel	UInt16	0x940004	0x4	RW	[13]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].RateType	0x4	0	16	16	0	Destination select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].Count	UInt32	0x940008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[0].Count	0x4	0	32	32	0	Counts|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].EnableReg	Bool	0x940100	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].EnableReg	0x4	0	1	1	0	Enable Register|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].RateType	UInt2	0x940104	0x4	RW	[11]	[2]	0	3	{0: 'FixedRates', 1: 'AcRates', 2: 'ControlWord', 3: 'INVALID'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].RateSel	UInt11	0x940104	0x4	RW	[0]	[11]	0	2047	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].RateType	0x4	0	11	11	0	Rate select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].DestType	UInt2	0x940104	0x4	RW	[29]	[2]	0	3	{2: 'All', 0: 'BeamRequest', 1: 'NotBeamRequest', 3: 'Invalid'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].DestSel	UInt16	0x940104	0x4	RW	[13]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].RateType	0x4	0	16	16	0	Destination select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].Count	UInt32	0x940108	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[1].Count	0x4	0	32	32	0	Counts|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].EnableReg	Bool	0x940200	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].EnableReg	0x4	0	1	1	0	Enable Register|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].RateType	UInt2	0x940204	0x4	RW	[11]	[2]	0	3	{0: 'FixedRates', 1: 'AcRates', 2: 'ControlWord', 3: 'INVALID'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].RateSel	UInt11	0x940204	0x4	RW	[0]	[11]	0	2047	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].RateType	0x4	0	11	11	0	Rate select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].DestType	UInt2	0x940204	0x4	RW	[29]	[2]	0	3	{2: 'All', 0: 'BeamRequest', 1: 'NotBeamRequest', 3: 'Invalid'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].DestSel	UInt16	0x940204	0x4	RW	[13]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].RateType	0x4	0	16	16	0	Destination select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].Count	UInt32	0x940208	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[2].Count	0x4	0	32	32	0	Counts|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].EnableReg	Bool	0x940300	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].EnableReg	0x4	0	1	1	0	Enable Register|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].RateType	UInt2	0x940304	0x4	RW	[11]	[2]	0	3	{0: 'FixedRates', 1: 'AcRates', 2: 'ControlWord', 3: 'INVALID'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].RateSel	UInt11	0x940304	0x4	RW	[0]	[11]	0	2047	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].RateType	0x4	0	11	11	0	Rate select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].DestType	UInt2	0x940304	0x4	RW	[29]	[2]	0	3	{2: 'All', 0: 'BeamRequest', 1: 'NotBeamRequest', 3: 'Invalid'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].RateType	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].DestSel	UInt16	0x940304	0x4	RW	[13]	[16]	0	65535	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].RateType	0x4	0	16	16	0	Destination select|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].Count	UInt32	0x940308	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2ChannelReg[3].Count	0x4	0	32	32	0	Counts|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].EnableTrig	Bool	0x941000	0x0	RW	[31]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].EnableTrig	0x4	0	1	1	0	Trigger Enable|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].Source	UInt4	0x941000	0x0	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].EnableTrig	0x4	0	4	4	0	Source mask|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].Polarity	UInt1	0x941000	0x0	RW	[16]	[1]	0	1	{0: 'Falling', 1: 'Rising'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].EnableTrig	0x4	0	1	1	0	Signal polarity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].ComplEn	UInt1	0x941000	0x0	RW	[29]	[1]	0	1	{0: 'Disabled', 1: 'Enabled'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].EnableTrig	0x4	0	1	1	0	Enable complementary trigger outputs|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].ComplAnd	UInt1	0x941000	0x0	RW	[30]	[1]	0	1	{0: 'LogicOR', 1: 'LogicAND'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].EnableTrig	0x4	0	1	1	0	Complementary trigger logic|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].Delay	UInt28	0x941004	0x4	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].Delay	0x4	0	28	28	0	Delay in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].Width	UInt28	0x941008	0x8	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[0].Width	0x4	0	28	28	0	Width in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].EnableTrig	Bool	0x941100	0x0	RW	[31]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].EnableTrig	0x4	0	1	1	0	Trigger Enable|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].Source	UInt4	0x941100	0x0	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].EnableTrig	0x4	0	4	4	0	Source mask|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].Polarity	UInt1	0x941100	0x0	RW	[16]	[1]	0	1	{0: 'Falling', 1: 'Rising'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].EnableTrig	0x4	0	1	1	0	Signal polarity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].ComplEn	UInt1	0x941100	0x0	RW	[29]	[1]	0	1	{0: 'Disabled', 1: 'Enabled'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].EnableTrig	0x4	0	1	1	0	Enable complementary trigger outputs|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].ComplAnd	UInt1	0x941100	0x0	RW	[30]	[1]	0	1	{0: 'LogicOR', 1: 'LogicAND'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].EnableTrig	0x4	0	1	1	0	Complementary trigger logic|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].Delay	UInt28	0x941104	0x4	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].Delay	0x4	0	28	28	0	Delay in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].Width	UInt28	0x941108	0x8	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[1].Width	0x4	0	28	28	0	Width in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].EnableTrig	Bool	0x941200	0x0	RW	[31]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].EnableTrig	0x4	0	1	1	0	Trigger Enable|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].Source	UInt4	0x941200	0x0	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].EnableTrig	0x4	0	4	4	0	Source mask|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].Polarity	UInt1	0x941200	0x0	RW	[16]	[1]	0	1	{0: 'Falling', 1: 'Rising'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].EnableTrig	0x4	0	1	1	0	Signal polarity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].ComplEn	UInt1	0x941200	0x0	RW	[29]	[1]	0	1	{0: 'Disabled', 1: 'Enabled'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].EnableTrig	0x4	0	1	1	0	Enable complementary trigger outputs|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].ComplAnd	UInt1	0x941200	0x0	RW	[30]	[1]	0	1	{0: 'LogicOR', 1: 'LogicAND'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].EnableTrig	0x4	0	1	1	0	Complementary trigger logic|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].Delay	UInt28	0x941204	0x4	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].Delay	0x4	0	28	28	0	Delay in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].Width	UInt28	0x941208	0x8	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[2].Width	0x4	0	28	28	0	Width in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].EnableTrig	Bool	0x941300	0x0	RW	[31]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].EnableTrig	0x4	0	1	1	0	Trigger Enable|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].Source	UInt4	0x941300	0x0	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].EnableTrig	0x4	0	4	4	0	Source mask|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].Polarity	UInt1	0x941300	0x0	RW	[16]	[1]	0	1	{0: 'Falling', 1: 'Rising'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].EnableTrig	0x4	0	1	1	0	Signal polarity|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].ComplEn	UInt1	0x941300	0x0	RW	[29]	[1]	0	1	{0: 'Disabled', 1: 'Enabled'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].EnableTrig	0x4	0	1	1	0	Enable complementary trigger outputs|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].ComplAnd	UInt1	0x941300	0x0	RW	[30]	[1]	0	1	{0: 'LogicOR', 1: 'LogicAND'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].EnableTrig	0x4	0	1	1	0	Complementary trigger logic|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].Delay	UInt28	0x941304	0x4	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].Delay	0x4	0	28	28	0	Delay in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].Width	UInt28	0x941308	0x8	RW	[0]	[28]	0	268435455	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.EvrV2CoreTriggers.EvrV2TriggerReg[3].Width	0x4	0	28	28	0	Width in ticks|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[0]	UInt7	0x948000	0x0	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[0]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[1]	UInt7	0x948004	0x4	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[1]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[2]	UInt7	0x948008	0x8	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[2]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[3]	UInt7	0x94800c	0xc	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[3]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[4]	UInt7	0x948010	0x10	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[4]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[5]	UInt7	0x948014	0x14	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[5]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[6]	UInt7	0x948018	0x18	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[6]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[7]	UInt7	0x94801c	0x1c	RO	[0]	[7]	0	127	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.PartitionDelay[7]	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.TxId	UInt32	0x948020	0x20	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.TxId	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.RxId	UInt32	0x948024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.XpmMessageAligner.RxId	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].MasterEnable	Bool	0x949000	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].MasterEnable	0x4	0	1	1	0	Enables both the trigger and event processing in Firmware|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TriggerCount	UInt32	0x949028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TriggerCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].Partition	UInt3	0x949004	0x4	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].Partition	0x4	0	3	3	0	Selected Partition to listen for events on|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TriggerSource	UInt1	0x949004	0x4	RW	[16]	[1]	0	1	{0: 'XPM', 1: 'EVR'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].Partition	0x4	0	1	1	0	Source of trigger|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].PauseThreshold	UInt5	0x949008	0x8	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].PauseThreshold	0x4	0	5	5	0	Buffer level at which Pause is asserted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TriggerDelay	UInt32	0x94900c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TriggerDelay	0x4	0	32	32	0	Number of timingClk cycles to delay trigger output to application|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	Bool	0x949010	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	0x4	0	1	1	0	Overflow signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmPause	Bool	0x949010	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	0x4	0	1	1	0	Pause condition and signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].FifoOverflow	Bool	0x949010	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	0x4	0	1	1	0	Event Buffer Overflow condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].FifoPause	Bool	0x949010	0x10	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	0x4	0	1	1	0	Event Buffer Pause condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].FifoWrCnt	UInt5	0x949010	0x10	RO	[4]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	0x4	0	5	5	0	Number of Events in Event Buffer|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].L0Count	UInt32	0x949014	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].L0Count	0x4	0	32	32	0	Number of L0 Triggers received|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].L1AcceptCount	UInt32	0x949018	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].L1AcceptCount	0x4	0	32	32	0	Number of L1 Triggers Accepted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].L1RejectCount	UInt32	0x94901c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].L1RejectCount	0x4	0	32	32	0	Number of L1 Triggers Rejected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TransitionCount	UInt32	0x949020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].TransitionCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmMessageCount	UInt32	0x949024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmMessageCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].LastPartitionAddr	UInt32	0x94902c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].LastPartitionAddr	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].LastPartitionWord0	UInt48	0x949030	0x30	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].LastPartitionWord0	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].PauseToTrig	UInt12	0x949038	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].PauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].NotPauseToTrig	UInt12	0x94903c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].NotPauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].ResetCounters	UInt1	0x949040	0x40	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].ResetCounters	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].FifoReset	UInt1	0x949010	0x10	WO	[31]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[0].XpmOverflow	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].MasterEnable	Bool	0x949100	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].MasterEnable	0x4	0	1	1	0	Enables both the trigger and event processing in Firmware|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TriggerCount	UInt32	0x949128	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TriggerCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].Partition	UInt3	0x949104	0x4	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].Partition	0x4	0	3	3	0	Selected Partition to listen for events on|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TriggerSource	UInt1	0x949104	0x4	RW	[16]	[1]	0	1	{0: 'XPM', 1: 'EVR'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].Partition	0x4	0	1	1	0	Source of trigger|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].PauseThreshold	UInt5	0x949108	0x8	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].PauseThreshold	0x4	0	5	5	0	Buffer level at which Pause is asserted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TriggerDelay	UInt32	0x94910c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TriggerDelay	0x4	0	32	32	0	Number of timingClk cycles to delay trigger output to application|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	Bool	0x949110	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	0x4	0	1	1	0	Overflow signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmPause	Bool	0x949110	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	0x4	0	1	1	0	Pause condition and signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].FifoOverflow	Bool	0x949110	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	0x4	0	1	1	0	Event Buffer Overflow condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].FifoPause	Bool	0x949110	0x10	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	0x4	0	1	1	0	Event Buffer Pause condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].FifoWrCnt	UInt5	0x949110	0x10	RO	[4]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	0x4	0	5	5	0	Number of Events in Event Buffer|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].L0Count	UInt32	0x949114	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].L0Count	0x4	0	32	32	0	Number of L0 Triggers received|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].L1AcceptCount	UInt32	0x949118	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].L1AcceptCount	0x4	0	32	32	0	Number of L1 Triggers Accepted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].L1RejectCount	UInt32	0x94911c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].L1RejectCount	0x4	0	32	32	0	Number of L1 Triggers Rejected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TransitionCount	UInt32	0x949120	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].TransitionCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmMessageCount	UInt32	0x949124	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmMessageCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].LastPartitionAddr	UInt32	0x94912c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].LastPartitionAddr	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].LastPartitionWord0	UInt48	0x949130	0x30	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].LastPartitionWord0	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].PauseToTrig	UInt12	0x949138	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].PauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].NotPauseToTrig	UInt12	0x94913c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].NotPauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].ResetCounters	UInt1	0x949140	0x40	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].ResetCounters	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].FifoReset	UInt1	0x949110	0x10	WO	[31]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[1].XpmOverflow	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].MasterEnable	Bool	0x949200	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].MasterEnable	0x4	0	1	1	0	Enables both the trigger and event processing in Firmware|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TriggerCount	UInt32	0x949228	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TriggerCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].Partition	UInt3	0x949204	0x4	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].Partition	0x4	0	3	3	0	Selected Partition to listen for events on|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TriggerSource	UInt1	0x949204	0x4	RW	[16]	[1]	0	1	{0: 'XPM', 1: 'EVR'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].Partition	0x4	0	1	1	0	Source of trigger|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].PauseThreshold	UInt5	0x949208	0x8	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].PauseThreshold	0x4	0	5	5	0	Buffer level at which Pause is asserted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TriggerDelay	UInt32	0x94920c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TriggerDelay	0x4	0	32	32	0	Number of timingClk cycles to delay trigger output to application|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	Bool	0x949210	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	0x4	0	1	1	0	Overflow signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmPause	Bool	0x949210	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	0x4	0	1	1	0	Pause condition and signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].FifoOverflow	Bool	0x949210	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	0x4	0	1	1	0	Event Buffer Overflow condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].FifoPause	Bool	0x949210	0x10	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	0x4	0	1	1	0	Event Buffer Pause condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].FifoWrCnt	UInt5	0x949210	0x10	RO	[4]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	0x4	0	5	5	0	Number of Events in Event Buffer|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].L0Count	UInt32	0x949214	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].L0Count	0x4	0	32	32	0	Number of L0 Triggers received|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].L1AcceptCount	UInt32	0x949218	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].L1AcceptCount	0x4	0	32	32	0	Number of L1 Triggers Accepted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].L1RejectCount	UInt32	0x94921c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].L1RejectCount	0x4	0	32	32	0	Number of L1 Triggers Rejected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TransitionCount	UInt32	0x949220	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].TransitionCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmMessageCount	UInt32	0x949224	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmMessageCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].LastPartitionAddr	UInt32	0x94922c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].LastPartitionAddr	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].LastPartitionWord0	UInt48	0x949230	0x30	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].LastPartitionWord0	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].PauseToTrig	UInt12	0x949238	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].PauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].NotPauseToTrig	UInt12	0x94923c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].NotPauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].ResetCounters	UInt1	0x949240	0x40	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].ResetCounters	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].FifoReset	UInt1	0x949210	0x10	WO	[31]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[2].XpmOverflow	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].MasterEnable	Bool	0x949300	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].MasterEnable	0x4	0	1	1	0	Enables both the trigger and event processing in Firmware|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TriggerCount	UInt32	0x949328	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TriggerCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].Partition	UInt3	0x949304	0x4	RW	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].Partition	0x4	0	3	3	0	Selected Partition to listen for events on|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TriggerSource	UInt1	0x949304	0x4	RW	[16]	[1]	0	1	{0: 'XPM', 1: 'EVR'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].Partition	0x4	0	1	1	0	Source of trigger|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].PauseThreshold	UInt5	0x949308	0x8	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].PauseThreshold	0x4	0	5	5	0	Buffer level at which Pause is asserted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TriggerDelay	UInt32	0x94930c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TriggerDelay	0x4	0	32	32	0	Number of timingClk cycles to delay trigger output to application|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	Bool	0x949310	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	0x4	0	1	1	0	Overflow signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmPause	Bool	0x949310	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	0x4	0	1	1	0	Pause condition and signal to XPM Feedback|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].FifoOverflow	Bool	0x949310	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	0x4	0	1	1	0	Event Buffer Overflow condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].FifoPause	Bool	0x949310	0x10	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	0x4	0	1	1	0	Event Buffer Pause condition|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].FifoWrCnt	UInt5	0x949310	0x10	RO	[4]	[5]	0	31	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	0x4	0	5	5	0	Number of Events in Event Buffer|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].L0Count	UInt32	0x949314	0x14	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].L0Count	0x4	0	32	32	0	Number of L0 Triggers received|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].L1AcceptCount	UInt32	0x949318	0x18	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].L1AcceptCount	0x4	0	32	32	0	Number of L1 Triggers Accepted|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].L1RejectCount	UInt32	0x94931c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].L1RejectCount	0x4	0	32	32	0	Number of L1 Triggers Rejected|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TransitionCount	UInt32	0x949320	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].TransitionCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmMessageCount	UInt32	0x949324	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmMessageCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].LastPartitionAddr	UInt32	0x94932c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].LastPartitionAddr	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].LastPartitionWord0	UInt48	0x949330	0x30	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].LastPartitionWord0	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].PauseToTrig	UInt12	0x949338	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].PauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].NotPauseToTrig	UInt12	0x94933c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].NotPauseToTrig	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].ResetCounters	UInt1	0x949340	0x40	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].ResetCounters	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].FifoReset	UInt1	0x949310	0x10	WO	[31]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TriggerEventManager.TriggerEventBuffer[3].XpmOverflow	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.MmcmRst	UInt1	0x920000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.MmcmRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.MmcmLocked	UInt2	0x920004	0x4	RO	[0]	[2]	0	3	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.MmcmLocked	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RefRstStatus	UInt2	0x920008	0x8	RO	[0]	[2]	0	3	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RefRstStatus	0x4	0	2	2	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.Loopback	UInt3	0x92000c	0xc	RW	[0]	[3]	0	7	{0: 'No', 1: 'Near-end PCS', 2: 'Near-end PMA', 4: 'Far-end PMA', 6: 'Far-end PCS'}	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.UseMiniTpg	Bool	0x920010	0x10	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.UseMiniTpg	0x4	0	1	1	0	Enables usage of the local miniTPG module in the Timing RX module (stand alone testing)|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RxUserRst	UInt1	0x920014	0x14	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RxUserRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxUserRst	UInt1	0x920018	0x18	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxUserRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxPhyReset	UInt1	0x920018	0x18	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxUserRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxPhyPllReset	UInt1	0x920018	0x18	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxUserRst	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxRstStatus	UInt1	0x920020	0x20	RO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxRstStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RxRstStatus	UInt1	0x920024	0x24	RO	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RxRstStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RefClkFreq[0]	UInt32	0x920030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RefClkFreq[0]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RefClkFreq[1]	UInt32	0x920034	0x34	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RefClkFreq[1]	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxClkFreq	UInt32	0x920038	0x38	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.TxClkFreq	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RxClkFreq	UInt32	0x92003c	0x3c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.RxClkFreq	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.CntRst	UInt1	0x9200fc	0xfc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	PCIe_Bar0	ClinkDevRoot.ClinkPcie.Hsio.TimingRx.TimingPhyMonitor.CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaVersion	UInt32	0x0	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaVersion	0x4	0	32	32	0	FPGA Firmware Version Number|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.ScratchPad	UInt32	0x4	0x4	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.ScratchPad	0x4	0	32	32	0	Register to test reads and writes|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.UpTimeCnt	UInt32	0x8	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.UpTimeCnt	0x4	0	32	32	0	Number of seconds since last reset|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaReloadHalt	UInt1	0x100	0x100	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaReloadHalt	0x4	0	1	1	0	Used to halt automatic reloads via AxiVersion|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaReload	UInt1	0x104	0x104	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaReload	0x4	0	1	1	0	Optional Reload the FPGA from the attached PROM|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaReloadAddress	UInt32	0x108	0x108	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.FpgaReloadAddress	0x4	0	32	32	0	Reload start address|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.UserReset	UInt1	0x10c	0x10c	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.UserReset	0x4	0	1	1	0	Optional User Reset|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.FdSerial	UInt64	0x300	0x300	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.FdSerial	0x8	0	64	64	0	Board ID value read from DS2411 chip|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.DeviceId	UInt32	0x500	0x500	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.DeviceId	0x4	0	32	32	0	Device Identification  (configued by generic)|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.GitHash	UInt160	0x600	0x600	RO	[0]	[160]	0	1461501637330902918203684832716283019655932542975	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.GitHash	0x14	0	160	160	0	GIT SHA-1 Hash|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.DeviceDna	UInt128	0x700	0x700	RO	[0]	[128]	0	340282366920938463463374607431768211455	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.DeviceDna	0x10	0	128	128	0	Xilinx Device DNA value burned into FPGA|"\
     "ClinkDevRoot.ClinkFeb[0].AxiVersion.BuildStamp	String(256)	0x800	0x800	RO	[0]	[2048]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].AxiVersion.BuildStamp	0x100	0	2048	2048	0	Firmware Build String|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalTemperatureHighByte	UInt8	0x2000	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalTemperatureHighByte	0x4	0	8	8	0	Local temperature high byte (LTHB)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteTemperatureHighByte	UInt8	0x2004	0x4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteTemperatureHighByte	0x4	0	8	8	0	Remote temperature high byte (RTHB)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	Bool	0x2008	0x8	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, A/D is busy converting. POR state = n/a.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Lhigh	Bool	0x2008	0x8	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates local HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Llow	Bool	0x2008	0x8	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Rhigh	Bool	0x2008	0x8	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Rlow	Bool	0x2008	0x8	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Open	Bool	0x2008	0x8	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode disconnect. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Rcrit	Bool	0x2008	0x8	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.Lcrit	Bool	0x2008	0x8	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskRead	Bool	0x200c	0xc	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskWrite	Bool	0x2024	0x24	WO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.StopRead	Bool	0x200c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.StopWrite	Bool	0x2024	0x24	WO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RcritMaskRead	Bool	0x200c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RcritMaskWrite	Bool	0x2024	0x24	WO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LcritMaskRead	Bool	0x200c	0xc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LcritMaskWrite	Bool	0x2024	0x24	WO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.FaultQueueRead	Bool	0x200c	0xc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.FaultQueueWrite	Bool	0x2024	0x24	WO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.ConvertRateRead	UInt4	0x2010	0x10	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.ConvertRateRead	0x4	0	4	4	0	conversion rate read access (CR)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.ConvertRateWrite	UInt4	0x2028	0x28	WO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.ConvertRateWrite	0x4	0	4	4	0	conversion rate write access (CR)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalHighSetpointRead	UInt8	0x2014	0x14	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalHighSetpointRead	0x4	0	8	8	0	local high setpoint read access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalHighSetpointWrite	UInt8	0x202c	0x2c	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalHighSetpointWrite	0x4	0	8	8	0	local high setpoint write access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalLowSetpointRead	UInt8	0x2018	0x18	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalLowSetpointRead	0x4	0	8	8	0	Local Low setpoint read access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalLowSetpointWrite	UInt8	0x2030	0x30	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalLowSetpointWrite	0x4	0	8	8	0	Local Low setpoint write access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteHighSetpointHighByteRead	UInt8	0x201c	0x1c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteHighSetpointHighByteRead	0x4	0	8	8	0	Remote high setpoint high byte read access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteHighSetpointHighByteWrite	UInt8	0x2034	0x34	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteHighSetpointHighByteWrite	0x4	0	8	8	0	Remote high setpoint high byte write access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteLowSetpointHighByteRead	UInt8	0x2020	0x20	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteLowSetpointHighByteRead	0x4	0	8	8	0	Remote Low setpoint high byte read access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteLowSetpointHighByteWrite	UInt8	0x2038	0x38	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteLowSetpointHighByteWrite	0x4	0	8	8	0	Remote Low setpoint high byte write access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteTcritSetpoint	Int8	0x2064	0x64	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.RemoteTcritSetpoint	0x4	0	8	8	0	Remote T_CRIT setpoint (RCS)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalTcritSetpoint	Int8	0x2080	0x80	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.LocalTcritSetpoint	0x4	0	8	8	0	Local T_CRIT setpoint (LCS)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.TcritHysteresis	UInt5	0x2084	0x84	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.TcritHysteresis	0x4	0	5	5	0	T_CRIT hysteresis (TH)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.OneShot	UInt1	0x203c	0x3c	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.OneShot	0x4	0	1	1	0	writing register initiates a one-shot conversion (One Shot)|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMode	Bool	0x22fc	0x2fc	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.AlertMode	0x4	0	1	1	0	Alert mode (AM))|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.ManufacturerId	UInt8	0x23f8	0x3f8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.ManufacturerId	0x4	0	8	8	0	Read manufacturers ID (RMID) should be 0xA1|"\
     "ClinkDevRoot.ClinkFeb[0].BoardTemp.DieRevision	UInt8	0x23fc	0x3fc	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardTemp.DieRevision	0x4	0	8	8	0	Read stepping or die revision (RDR) should be 0x00|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.SenseMsb	UInt8	0x2400	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.SenseMsb	0x4	0	8	8	0	Sense MSB Data|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.SenseLsb	UInt4	0x2404	0x4	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.SenseLsb	0x4	0	4	4	0	Sense LSB Data|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.VinMsb	UInt8	0x2408	0x8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.VinMsb	0x4	0	8	8	0	Vin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.VinLsb	UInt4	0x240c	0xc	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.VinLsb	0x4	0	4	4	0	Vin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.AdinMsb	UInt8	0x2410	0x10	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.AdinMsb	0x4	0	8	8	0	Adin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.AdinLsb	UInt4	0x2414	0x14	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.AdinLsb	0x4	0	4	4	0	Adin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[0].BoardPwr.Control	UInt8	0x2418	0x18	RW	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].BoardPwr.Control	0x4	0	8	8	0	Controls ADC Operation Mode and Test Mode|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawTemperature	UInt12	0x3200	0x200	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawTemperature	0x4	0	12	12	0	\
The result of the on-chip temperature sensor measurement is\
stored in this location. The data is MSB justified in the\
16-bit register (Read Only).  The 12 MSBs correspond to the\
temperature sensor transfer function shown in Figure 2-8,\
page 31 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxTemperature	UInt12	0x3280	0x280	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxTemperature	0x4	0	12	12	0	\
Maximum temperature measurement recorded since\
power-up or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMinTemperature	UInt12	0x3290	0x290	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMinTemperature	0x4	0	12	12	0	\
Minimum temperature measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Over Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.UserTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawVccInt	UInt12	0x3204	0x204	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawVccInt	0x4	0	12	12	0	\
The result of the on-chip VccInt supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxVccInt	UInt12	0x3284	0x284	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxVccInt	0x4	0	12	12	0	\
Maximum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMinVccInt	UInt12	0x3294	0x294	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMinVccInt	0x4	0	12	12	0	\
Minimum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.VccIntAlarm	Bool	0x32fc	0x2fc	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccInt Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawVccAux	UInt12	0x3208	0x208	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawVccAux	0x4	0	12	12	0	\
The result of the on-chip VccAux supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxVccAux	UInt12	0x3288	0x288	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxVccAux	0x4	0	12	12	0	\
Maximum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMinVccAux	UInt12	0x3298	0x298	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMinVccAux	0x4	0	12	12	0	\
Minimum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.VccAuxAlarm	Bool	0x32fc	0x2fc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccAux Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawVccBram	UInt12	0x3218	0x218	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawVccBram	0x4	0	12	12	0	\
The result of the on-chip VccBram supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxVccBram	UInt12	0x328c	0x28c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMaxVccBram	0x4	0	12	12	0	\
Maximum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawMinVccBram	UInt12	0x329c	0x29c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawMinVccBram	0x4	0	12	12	0	\
Minimum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.VccBramAlarm	Bool	0x32fc	0x2fc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccBram Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawVin	UInt12	0x320c	0x20c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawVin	0x4	0	12	12	0	\
The result of a conversion on the dedicated analog input\
channel is stored in this register. The data is MSB justified\
in the 16-bit register (Read Only). The 12 MSBs correspond to the\
transfer function shown in Figure 2-5, page 29 or\
Figure 2-6, page 29 of UG480 (v1.2) depending on analog input mode\
settings.|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawVrefp	UInt12	0x3210	0x210	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawVrefp	0x4	0	12	12	0	\
The result of a conversion on the reference input VrefP is\
stored in this register. The 12 MSBs correspond to the ADC\
transfer function shown in Figure 2-9  of UG480 (v1.2). The data is MSB\
justified in the 16-bit register (Read Only). The supply sensor is used\
when measuring VrefP.|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawVrefn	UInt12	0x3214	0x214	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawVrefn	0x4	0	12	12	0	\
The result of a conversion on the reference input VREFN is\
stored in this register (Read Only). This channel is measured in bipolar\
mode with a 2's complement output coding as shown in\
Figure 2-2, page 25. By measuring in bipolar mode, small\
positive and negative at: offset around 0V (VrefN) can be\
measured. The supply sensor is also used to measure\
VrefN, thus 1 LSB = 3V/4096. The data is MSB justified in\
the 16-bit register.|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.SupplyOffsetA	UInt12	0x3220	0x220	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.SupplyOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the supply sensor offset\
using ADC A is stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.AdcOffsetA	UInt12	0x3224	0x224	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.AdcOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A offset is stored at\
this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.AdcGainA	UInt12	0x3228	0x228	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.AdcGainA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A gain error is\
stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.JTGD	Bool	0x32fc	0x2fc	RO	[11]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface for more information.|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.JTGR	Bool	0x32fc	0x2fc	RO	[10]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface\
for more information.|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.REF	UInt1	0x32fc	0x2fc	RO	[9]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
When this bit is a logic 1, the ADC is using the internal\
voltage reference. When this bit is a logic 0, the external\
reference is being used.|"\
     "ClinkDevRoot.ClinkFeb[0].Xadc.RawOT_Limit	UInt12	0x334c	0x34c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Xadc.RawOT_Limit	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Identifier	UInt8	0x5000	0x0	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'GBIC', 2: 'Motherboard', 3: 'SFP', 4: 'XBI', 5: 'XENPAK', 6: 'XFP', 7: 'XFF', 8: 'XFP-E', 9: 'XPAK', 10: 'X2', 11: 'DWDM-SFP', 12: 'QSFP', 13: 'QSFP+', 14: 'CXP', 15: 'HD-4X', 16: 'HD-8X', 17: 'QSFP28', 18: 'CXP28', 19: 'CDFP-Style1/2', 20: 'HD-4X-Fanout', 21: 'HD-8X-Fanout', 22: 'CDFP-Style3', 23: 'microQSFP', 24: 'QSFP-DD', 25: 'OSFP', 26: 'SFP-DD', 27: 'DSFP', 28: 'MiniLinkx4', 29: 'MiniLinkx8', 30: 'QSFP+'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Identifier	0x4	0	8	8	0	Type of serial transceiver|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Connector	UInt8	0x5008	0x8	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'SC', 2: 'Fibre Channel Style 1 copper connector', 3: 'Fibre Channel Style 2 copper connector', 4: 'BNC/TNC', 5: 'Fibre Channel coaxial headers', 6: 'Fiber Jack', 7: 'LC', 8: 'MT-RJ', 9: 'MU', 10: 'SG', 11: 'Optical pigtail', 12: 'MPO 1x12', 13: 'MPO 2x16', 32: 'HSSDC II', 33: 'Copper Pigtail', 34: 'RJ45', 35: 'No separable connector', 36: 'MXC 2x16', 37: 'CS optical connector', 38: 'SN', 39: 'MPO 2x12', 40: 'MPO 1x16'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Connector	0x4	0	8	8	0	Code for connector type|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[0]	String(1)	0x5050	0x50	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[0]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[1]	String(1)	0x5054	0x54	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[1]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[2]	String(1)	0x5058	0x58	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[2]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[3]	String(1)	0x505c	0x5c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[3]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[4]	String(1)	0x5060	0x60	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[4]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[5]	String(1)	0x5064	0x64	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[5]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[6]	String(1)	0x5068	0x68	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[6]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[7]	String(1)	0x506c	0x6c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[7]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[8]	String(1)	0x5070	0x70	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[8]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[9]	String(1)	0x5074	0x74	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[9]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[10]	String(1)	0x5078	0x78	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[10]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[11]	String(1)	0x507c	0x7c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[11]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[12]	String(1)	0x5080	0x80	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[12]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[13]	String(1)	0x5084	0x84	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[13]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[14]	String(1)	0x5088	0x88	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[14]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[15]	String(1)	0x508c	0x8c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorNameRaw[15]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[0]	String(1)	0x50a0	0xa0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[0]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[1]	String(1)	0x50a4	0xa4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[1]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[2]	String(1)	0x50a8	0xa8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[2]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[3]	String(1)	0x50ac	0xac	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[3]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[4]	String(1)	0x50b0	0xb0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[4]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[5]	String(1)	0x50b4	0xb4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[5]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[6]	String(1)	0x50b8	0xb8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[6]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[7]	String(1)	0x50bc	0xbc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[7]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[8]	String(1)	0x50c0	0xc0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[8]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[9]	String(1)	0x50c4	0xc4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[9]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[10]	String(1)	0x50c8	0xc8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[10]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[11]	String(1)	0x50cc	0xcc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[11]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[12]	String(1)	0x50d0	0xd0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[12]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[13]	String(1)	0x50d4	0xd4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[13]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[14]	String(1)	0x50d8	0xd8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[14]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[15]	String(1)	0x50dc	0xdc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorPnRaw[15]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[0]	String(1)	0x50e0	0xe0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[0]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[1]	String(1)	0x50e4	0xe4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[1]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[2]	String(1)	0x50e8	0xe8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[2]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[3]	String(1)	0x50ec	0xec	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorRevRaw[3]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[0]	String(1)	0x5110	0x110	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[0]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[1]	String(1)	0x5114	0x114	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[1]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[2]	String(1)	0x5118	0x118	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[2]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[3]	String(1)	0x511c	0x11c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[3]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[4]	String(1)	0x5120	0x120	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[4]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[5]	String(1)	0x5124	0x124	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[5]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[6]	String(1)	0x5128	0x128	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[6]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[7]	String(1)	0x512c	0x12c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[7]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[8]	String(1)	0x5130	0x130	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[8]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[9]	String(1)	0x5134	0x134	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[9]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[10]	String(1)	0x5138	0x138	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[10]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[11]	String(1)	0x513c	0x13c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[11]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[12]	String(1)	0x5140	0x140	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[12]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[13]	String(1)	0x5144	0x144	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[13]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[14]	String(1)	0x5148	0x148	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[14]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[15]	String(1)	0x514c	0x14c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].VendorSnRaw[15]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[0]	String(1)	0x5150	0x150	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[0]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[1]	String(1)	0x5154	0x154	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[1]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[2]	String(1)	0x5158	0x158	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[2]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[3]	String(1)	0x515c	0x15c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[3]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[4]	String(1)	0x5160	0x160	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[4]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[5]	String(1)	0x5164	0x164	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].DateCode[5]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[0]	UInt8	0x5580	0x580	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[0]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[1]	UInt8	0x5584	0x584	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[1]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[2]	UInt8	0x5588	0x588	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[2]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[3]	UInt8	0x558c	0x58c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[3]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[4]	UInt8	0x5590	0x590	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[4]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[5]	UInt8	0x5594	0x594	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[5]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[6]	UInt8	0x5598	0x598	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[6]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[7]	UInt8	0x559c	0x59c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[7]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[8]	UInt8	0x55a0	0x5a0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[8]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[9]	UInt8	0x55a4	0x5a4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[9]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[10]	UInt8	0x55a8	0x5a8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[10]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[11]	UInt8	0x55ac	0x5ac	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[11]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[12]	UInt8	0x55b0	0x5b0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[12]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[13]	UInt8	0x55b4	0x5b4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sfp[1].Diagnostics[13]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.SemStatus	UInt7	0x8000	0x0	RO	[0]	[7]	0	127	{0: 'Initialization', 1: 'Undef_0x1', 2: 'Observation', 4: 'Correction', 8: 'Classification', 16: 'Injection', 32: 'Idle', 95: 'Halt'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.SemStatus	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.Essential	Bool	0x8000	0x0	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.Uncorrectable	Bool	0x8000	0x0	RO	[8]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.HeartbeatCount	UInt32	0x8004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.HeartbeatCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InjectBitAddress	UInt5	0x8010	0x10	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InjectBitAddress	0x8	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InjectWordAddress	UInt7	0x8010	0x10	RW	[5]	[7]	0	127	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InjectBitAddress	0x8	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InjectLinearFrame	UInt17	0x8010	0x10	RW	[12]	[17]	0	131071	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InjectBitAddress	0x8	0	17	17	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InjectAddrHigh	UInt11	0x8010	0x10	RW	[29]	[11]	0	2047	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InjectBitAddress	0x8	0	11	11	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InitilizationCount	UInt12	0x8020	0x20	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InitilizationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.ObservationCount	UInt12	0x8024	0x24	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.ObservationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.CorrectionCount	UInt12	0x8028	0x28	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.CorrectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.ClassificationCount	UInt12	0x802c	0x2c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.ClassificationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InjectionCount	UInt12	0x8030	0x30	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InjectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.IdleCount	UInt12	0x8034	0x34	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.IdleCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.EssentialCount	UInt12	0x8038	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.EssentialCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.UncorrectableCount	UInt12	0x803c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.UncorrectableCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[0].Sem.InjectStrobe	UInt1	0x800c	0xc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].Sem.InjectStrobe	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ChanCount	UInt4	0x100000	0x0	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ChanCount	0x4	0	4	4	0	Supported channels|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll	UInt1	0x100004	0x4	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel PLL reset|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ResetFsm	UInt1	0x100004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel FSM reset|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.CntRst	UInt1	0x100004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.RstPll	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	Bool	0x100010	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedB	Bool	0x100010	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedC	Bool	0x100010	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedCntA	UInt8	0x100010	0x10	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedCntB	UInt8	0x100010	0x10	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedCntC	UInt8	0x100010	0x10	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ShiftCountA	UInt3	0x100014	0x14	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ShiftCountB	UInt3	0x100014	0x14	RO	[8]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ShiftCountC	UInt3	0x100014	0x14	RO	[16]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.DelayA	UInt5	0x100018	0x18	RO	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel A|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.DelayB	UInt5	0x100018	0x18	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel B|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.DelayC	UInt5	0x100018	0x18	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel C|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ClkInFreq[0]	UInt32	0x10001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ClkInFreq[0]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ClkInFreq[1]	UInt32	0x100020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ClkInFreq[1]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ClkInFreq[2]	UInt32	0x100024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ClkInFreq[2]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ClinkClkFreq[0]	UInt32	0x100028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ClinkClkFreq[0]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ClinkClkFreq[1]	UInt32	0x10002c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ClinkClkFreq[1]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.ClinkClkFreq[2]	UInt32	0x100030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.ClinkClkFreq[2]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].LinkMode	UInt3	0x100100	0x0	RW	[0]	[3]	0	7	{0: 'Disable', 1: 'Base', 2: 'Medium', 3: 'Full', 4: 'Deca'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].LinkMode	0x4	0	3	3	0	\
Link mode control for camera link lanes:\
Disable: Nothing connected\
Base: Port Supported [A,B,C], # of chips = 1, # of connectors = 1\
Medium: Port Supported [A,B,C,D,E,F], # of chips = 2, # of connectors = 2\
Full: Port Supported [A,B,C,D,E,F,G,H], # of chips = 3, # of connectors = 3\
Deca: Refer to section /\"2.2.3 Camera Link 80 bit/\" CameraLink spec V2.0, page 16\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataMode	UInt4	0x100104	0x4	RW	[0]	[4]	0	15	{0: 'None', 1: '8Bit', 2: '10Bit', 3: '12Bit', 4: '14Bit', 5: '16Bit', 6: '24Bit', 7: '30Bit', 8: '36Bit'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataMode	0x4	0	4	4	0	Data mode|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].FrameMode	UInt2	0x100108	0x8	RW	[0]	[2]	0	3	{0: 'None', 1: 'Line', 2: 'Frame'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].FrameMode	0x4	0	2	2	0	\
None: Disables output\
Line: 1D camera\
Frame: 2D pixel array\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].TapCount	UInt4	0x10010c	0xc	RW	[0]	[4]	0	10	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].TapCount	0x4	0	4	4	0	# of video output taps on the Camera Link Interface (# of individual data value channels)|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataEn	Bool	0x100110	0x10	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Data enable.  When 0x0 causes reset on ClinkData's FSM module|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].Blowoff	Bool	0x100110	0x10	RW	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Blows off the outbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].CntRst	UInt1	0x100110	0x10	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].SerThrottle	UInt16	0x100110	0x10	RW	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DataEn	0x4	0	16	16	0	Throttles the UART Serial TX byte rate. Used when the camera cannot accept new bytes until the previous command processed|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].BaudRate	UInt24	0x100114	0x14	RW	[0]	[24]	0	16777215	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].BaudRate	0x4	0	24	24	0	Baud rate|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].SwControlValue	UInt4	0x100118	0x18	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].SwControlValue	0x4	0	4	4	0	Software camera control bit values|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].SwControlEn	UInt4	0x10011c	0x1c	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].SwControlEn	0x4	0	4	4	0	Software camera control bit enable mask for lane A|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].Running	Bool	0x100120	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].Running	0x4	0	1	1	0	Camera link lane running status|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].FrameCount	UInt32	0x100124	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].FrameCount	0x4	0	32	32	0	Frame counter|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DropCount	UInt32	0x100128	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].DropCount	0x4	0	32	32	0	Drop counter|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].FrameSize	UInt32	0x10012c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].FrameSize	0x4	0	32	32	0	Camera Image size|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].HSkip	UInt16	0x100130	0x30	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].HSkip	0x4	0	16	16	0	# of cycle to skip from the start of CLINK LineValid (LV)|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].HActive	UInt16	0x100134	0x34	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].HActive	0x4	0	16	16	0	# of active cycle after HSkip while CLINK LineValid (LV) is active|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].VSkip	UInt16	0x100138	0x38	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].VSkip	0x4	0	16	16	0	# of lines to skip from the start of CLINK FrameValid (FV)|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].VActive	UInt16	0x10013c	0x3c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Ch[0].VActive	0x4	0	16	16	0	# of active lines after VSkip while CLINK FrameValid (FV) is active|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[0]	UInt3	0x101020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[0]	UInt6	0x101020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[0]	UInt6	0x101020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[1]	UInt3	0x101028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[1]	UInt6	0x101028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[1]	UInt6	0x101028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[2]	UInt3	0x101030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[2]	UInt6	0x101030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[2]	UInt6	0x101030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[3]	UInt3	0x101038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[3]	UInt6	0x101038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[3]	UInt6	0x101038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[4]	UInt3	0x101040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[4]	UInt6	0x101040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[4]	UInt6	0x101040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[5]	UInt3	0x101018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[5]	UInt6	0x101018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[5]	UInt6	0x101018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[6]	UInt3	0x101048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME[6]	UInt6	0x101048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME[6]	UInt6	0x101048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_FB	UInt3	0x101050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME_FB	UInt6	0x101050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME_FB	UInt6	0x101050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	UInt3	0x101024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_EN[0]	UInt1	0x101024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_WF_R[0]	UInt1	0x101024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[0]	UInt2	0x101024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[0]	UInt1	0x101024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[0]	UInt1	0x101024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[0]	UInt6	0x101024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[1]	UInt2	0x10102c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[1]	UInt1	0x10102c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[1]	UInt1	0x10102c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[1]	UInt6	0x10102c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[2]	UInt2	0x101034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[2]	UInt1	0x101034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[2]	UInt1	0x101034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[2]	UInt6	0x101034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[3]	UInt2	0x10103c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[3]	UInt1	0x10103c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[3]	UInt1	0x10103c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[3]	UInt6	0x10103c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[4]	UInt2	0x101044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[4]	UInt1	0x101044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[4]	UInt1	0x101044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[4]	UInt6	0x101044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10101c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT[0]	UInt1	0x10101c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[5]	UInt2	0x10101c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[5]	UInt1	0x10101c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[5]	UInt1	0x10101c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[5]	UInt6	0x10101c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10104c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT_FB	UInt1	0x10104c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX[6]	UInt2	0x10104c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE[6]	UInt1	0x10104c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT[6]	UInt1	0x10104c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME[6]	UInt6	0x10104c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	UInt3	0x101054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_EN_FB	UInt1	0x101054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_WF_R_FB	UInt1	0x101054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].MX_FB	UInt2	0x101054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE_FB	UInt1	0x101054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT_FB	UInt1	0x101054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].DELAY_TIME_FB	UInt6	0x101054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE_DIV	UInt1	0x101058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].NO_COUNT_DIV	UInt1	0x101058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].HIGH_TIME_DIV	UInt6	0x101058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LOW_TIME_DIV	UInt6	0x101058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LockReg[0]	UInt16	0x101060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LockReg[1]	UInt16	0x101064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LockReg[2]	UInt16	0x101068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FiltReg[0]	UInt16	0x101138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FiltReg[1]	UInt16	0x10113c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].POWER	UInt16	0x1010a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[0].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[0]	UInt3	0x102020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[0]	UInt6	0x102020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[0]	UInt6	0x102020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[1]	UInt3	0x102028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[1]	UInt6	0x102028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[1]	UInt6	0x102028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[2]	UInt3	0x102030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[2]	UInt6	0x102030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[2]	UInt6	0x102030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[3]	UInt3	0x102038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[3]	UInt6	0x102038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[3]	UInt6	0x102038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[4]	UInt3	0x102040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[4]	UInt6	0x102040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[4]	UInt6	0x102040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[5]	UInt3	0x102018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[5]	UInt6	0x102018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[5]	UInt6	0x102018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[6]	UInt3	0x102048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME[6]	UInt6	0x102048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME[6]	UInt6	0x102048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_FB	UInt3	0x102050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME_FB	UInt6	0x102050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME_FB	UInt6	0x102050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	UInt3	0x102024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_EN[0]	UInt1	0x102024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_WF_R[0]	UInt1	0x102024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[0]	UInt2	0x102024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[0]	UInt1	0x102024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[0]	UInt1	0x102024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[0]	UInt6	0x102024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[1]	UInt2	0x10202c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[1]	UInt1	0x10202c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[1]	UInt1	0x10202c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[1]	UInt6	0x10202c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[2]	UInt2	0x102034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[2]	UInt1	0x102034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[2]	UInt1	0x102034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[2]	UInt6	0x102034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[3]	UInt2	0x10203c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[3]	UInt1	0x10203c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[3]	UInt1	0x10203c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[3]	UInt6	0x10203c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[4]	UInt2	0x102044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[4]	UInt1	0x102044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[4]	UInt1	0x102044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[4]	UInt6	0x102044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10201c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT[0]	UInt1	0x10201c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[5]	UInt2	0x10201c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[5]	UInt1	0x10201c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[5]	UInt1	0x10201c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[5]	UInt6	0x10201c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10204c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT_FB	UInt1	0x10204c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX[6]	UInt2	0x10204c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE[6]	UInt1	0x10204c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT[6]	UInt1	0x10204c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME[6]	UInt6	0x10204c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	UInt3	0x102054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_EN_FB	UInt1	0x102054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_WF_R_FB	UInt1	0x102054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].MX_FB	UInt2	0x102054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE_FB	UInt1	0x102054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT_FB	UInt1	0x102054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].DELAY_TIME_FB	UInt6	0x102054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE_DIV	UInt1	0x102058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].NO_COUNT_DIV	UInt1	0x102058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].HIGH_TIME_DIV	UInt6	0x102058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LOW_TIME_DIV	UInt6	0x102058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LockReg[0]	UInt16	0x102060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LockReg[1]	UInt16	0x102064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LockReg[2]	UInt16	0x102068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FiltReg[0]	UInt16	0x102138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FiltReg[1]	UInt16	0x10213c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].POWER	UInt16	0x1020a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[1].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[0]	UInt3	0x103020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[0]	UInt6	0x103020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[0]	UInt6	0x103020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[1]	UInt3	0x103028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[1]	UInt6	0x103028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[1]	UInt6	0x103028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[2]	UInt3	0x103030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[2]	UInt6	0x103030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[2]	UInt6	0x103030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[3]	UInt3	0x103038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[3]	UInt6	0x103038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[3]	UInt6	0x103038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[4]	UInt3	0x103040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[4]	UInt6	0x103040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[4]	UInt6	0x103040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[5]	UInt3	0x103018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[5]	UInt6	0x103018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[5]	UInt6	0x103018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[6]	UInt3	0x103048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME[6]	UInt6	0x103048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME[6]	UInt6	0x103048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_FB	UInt3	0x103050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME_FB	UInt6	0x103050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME_FB	UInt6	0x103050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	UInt3	0x103024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_EN[0]	UInt1	0x103024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_WF_R[0]	UInt1	0x103024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[0]	UInt2	0x103024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[0]	UInt1	0x103024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[0]	UInt1	0x103024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[0]	UInt6	0x103024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[1]	UInt2	0x10302c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[1]	UInt1	0x10302c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[1]	UInt1	0x10302c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[1]	UInt6	0x10302c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[2]	UInt2	0x103034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[2]	UInt1	0x103034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[2]	UInt1	0x103034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[2]	UInt6	0x103034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[3]	UInt2	0x10303c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[3]	UInt1	0x10303c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[3]	UInt1	0x10303c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[3]	UInt6	0x10303c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[4]	UInt2	0x103044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[4]	UInt1	0x103044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[4]	UInt1	0x103044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[4]	UInt6	0x103044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10301c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT[0]	UInt1	0x10301c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[5]	UInt2	0x10301c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[5]	UInt1	0x10301c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[5]	UInt1	0x10301c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[5]	UInt6	0x10301c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10304c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT_FB	UInt1	0x10304c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX[6]	UInt2	0x10304c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE[6]	UInt1	0x10304c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT[6]	UInt1	0x10304c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME[6]	UInt6	0x10304c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	UInt3	0x103054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_EN_FB	UInt1	0x103054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_WF_R_FB	UInt1	0x103054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].MX_FB	UInt2	0x103054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE_FB	UInt1	0x103054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT_FB	UInt1	0x103054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].DELAY_TIME_FB	UInt6	0x103054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE_DIV	UInt1	0x103058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].NO_COUNT_DIV	UInt1	0x103058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].HIGH_TIME_DIV	UInt6	0x103058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LOW_TIME_DIV	UInt6	0x103058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LockReg[0]	UInt16	0x103060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LockReg[1]	UInt16	0x103064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LockReg[2]	UInt16	0x103068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FiltReg[0]	UInt16	0x103138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FiltReg[1]	UInt16	0x10313c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].POWER	UInt16	0x1030a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].ClinkTop.Pll[2].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].EnableTrig	Bool	0x200000	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].EnableTrig	0x4	0	1	1	0	Enable triggering|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].InvCC	Bool	0x200004	0x4	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].InvCC	0x4	0	1	1	0	Inverter the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigMap	UInt1	0x200008	0x8	RW	[0]	[1]	0	1	{0: 'ChA', 1: 'ChB'}	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigMap	0x4	0	1	1	0	0x0: map trigger to channel A, 0x1: map trigger to channel B|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigPulseWidthRaw	UInt32	0x20000c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigPulseWidthRaw	0x4	0	32	32	0	Sets the trigger pulse width on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigMask	UInt4	0x200010	0x10	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigMask	0x4	0	4	4	0	Sets the trigger mask on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigRate	UInt32	0x2000f4	0xf4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigRate	0x4	0	32	32	0	Trigger Rate|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigCnt	UInt32	0x2000f8	0xf8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].TrigCnt	0x4	0	32	32	0	Trigger Counter|"\
     "ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst	UInt1	0x2000fc	0xfc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].TrigCtrl[0].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	Bool	0x400020	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	1	1	0	RX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxPhyReady	Bool	0x400020	0x20	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	1	1	0	TX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxLocalLinkReady	Bool	0x400020	0x20	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Local Link Ready|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemLinkReady	Bool	0x400020	0x20	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Remote Link Ready|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLinkReady	Bool	0x400020	0x20	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Tx Link Ready|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxLinkPolarity	UInt2	0x400020	0x20	RO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	2	2	0	Rx Link Polarity|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemPause	UInt4	0x400020	0x20	RO	[12]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	4	4	0	RX Remote Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocPause	UInt4	0x400020	0x20	RO	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Tx Local Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow	UInt4	0x400020	0x20	RO	[20]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received remote overflow flag|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow	UInt4	0x400020	0x20	RO	[24]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received local overflow flag|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemLinkData	UInt8	0x400024	0x24	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemLinkData	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxCellErrorCount	UInt8	0x400028	0x28	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxCellErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxLinkDownCount	UInt8	0x40002c	0x2c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxLinkDownCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxLinkErrorCount	UInt8	0x400030	0x30	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxLinkErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow0Count	UInt8	0x400034	0x34	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow1Count	UInt8	0x400038	0x38	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow2Count	UInt8	0x40003c	0x3c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow3Count	UInt8	0x400040	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxFrameErrorCount	UInt8	0x400044	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxFrameCount	UInt8	0x400048	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow0Count	UInt8	0x40004c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow1Count	UInt8	0x400050	0x50	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow2Count	UInt8	0x400054	0x54	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow3Count	UInt8	0x400058	0x58	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxLocOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxFrameErrorCount	UInt8	0x40005c	0x5c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxFrameCount	UInt8	0x400060	0x60	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemLinkReadyCount	UInt8	0x400080	0x80	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxRemLinkReadyCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].LastTxOpCode	UInt8	0x400070	0x70	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].LastTxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].LastRxOpCode	UInt8	0x400074	0x74	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].LastRxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxOpCodeCount	UInt8	0x400078	0x78	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxOpCodeCount	UInt8	0x40007c	0x7c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].CountReset	UInt1	0x400000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].CountReset	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].ResetRx	UInt1	0x400004	0x4	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].ResetTx	UInt1	0x400004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].ResetGt	UInt1	0x400004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxClkFreqRaw	UInt32	0x400064	0x64	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].RxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxClkFreqRaw	UInt32	0x400068	0x68	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[0].TxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.CountReset	UInt1	0x410000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.WRITE_EN_G	Bool	0x410004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.NUM_VC_G	UInt8	0x410004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.SkipInterval	UInt32	0x410008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	UInt3	0x41000c	0xc	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.FlowControlDisable	Bool	0x41000c	0xc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.TxDisable	Bool	0x41000c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.ResetTx	Bool	0x41000c	0xc	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.ResetRx	Bool	0x41000c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.TxDiffCtrl	UInt5	0x41000c	0xc	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.TxPreCursor	UInt5	0x41000c	0xc	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.TxPostCursor	UInt5	0x41000c	0xc	RO	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[0]	UInt16	0x410400	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[1]	UInt16	0x410404	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[2]	UInt16	0x410408	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[3]	UInt16	0x41040c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[0]	UInt8	0x410440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[1]	UInt8	0x410444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[2]	UInt8	0x410448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[3]	UInt8	0x41044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.FrameCnt	UInt16	0x410500	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.OpCodeEnCnt	UInt16	0x410504	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActiveCnt	UInt8	0x410600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxInitCnt	UInt8	0x410604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.GearboxAlignedCnt	UInt8	0x410608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkReadyCnt	UInt8	0x41060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemRxLinkReadyCnt	UInt8	0x410610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.FrameErrorCnt	UInt8	0x410614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkDownCnt	UInt8	0x410618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkErrorCnt	UInt8	0x41061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.EbOverflowCnt	UInt8	0x410620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellErrorCnt	UInt8	0x410624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellSofErrorCnt	UInt8	0x410628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellSeqErrorCnt	UInt8	0x41062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellVersionErrorCnt	UInt8	0x410630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellCrcModeErrorCnt	UInt8	0x410634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellCrcErrorCnt	UInt8	0x410638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellEofeErrorCnt	UInt8	0x41063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActive	Bool	0x410710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.GearboxAligned	Bool	0x410710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.LinkReady	Bool	0x410710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemRxLinkReady	Bool	0x410710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemLinkData	UInt48	0x410720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOpCodeData	UInt48	0x410730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemRxPause	UInt4	0x410740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RxClockFreqRaw	UInt32	0x410750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[0]	UInt16	0x410800	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[1]	UInt16	0x410804	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[2]	UInt16	0x410808	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[3]	UInt16	0x41080c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[0]	UInt8	0x410840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[1]	UInt8	0x410844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[2]	UInt8	0x410848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[3]	UInt8	0x41084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.FrameCnt	UInt16	0x410900	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.OpCodeEnCnt	UInt16	0x410904	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.phyTxActiveCnt	UInt8	0x410a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LinkReadyCnt	UInt8	0x410a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.FrameErrorCnt	UInt8	0x410a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.phyTxActive	Bool	0x410b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LinkReady	Bool	0x410b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocLinkData	UInt48	0x410b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOpCodeData	UInt48	0x410b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocTxPause	UInt4	0x410b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.TxClockFreqRaw	UInt32	0x410b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[0]	ClinkDevRoot.ClinkFeb[0].PgpMon[1].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaVersion	UInt32	0x0	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaVersion	0x4	0	32	32	0	FPGA Firmware Version Number|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.ScratchPad	UInt32	0x4	0x4	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.ScratchPad	0x4	0	32	32	0	Register to test reads and writes|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.UpTimeCnt	UInt32	0x8	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.UpTimeCnt	0x4	0	32	32	0	Number of seconds since last reset|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaReloadHalt	UInt1	0x100	0x100	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaReloadHalt	0x4	0	1	1	0	Used to halt automatic reloads via AxiVersion|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaReload	UInt1	0x104	0x104	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaReload	0x4	0	1	1	0	Optional Reload the FPGA from the attached PROM|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaReloadAddress	UInt32	0x108	0x108	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.FpgaReloadAddress	0x4	0	32	32	0	Reload start address|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.UserReset	UInt1	0x10c	0x10c	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.UserReset	0x4	0	1	1	0	Optional User Reset|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.FdSerial	UInt64	0x300	0x300	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.FdSerial	0x8	0	64	64	0	Board ID value read from DS2411 chip|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.DeviceId	UInt32	0x500	0x500	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.DeviceId	0x4	0	32	32	0	Device Identification  (configued by generic)|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.GitHash	UInt160	0x600	0x600	RO	[0]	[160]	0	1461501637330902918203684832716283019655932542975	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.GitHash	0x14	0	160	160	0	GIT SHA-1 Hash|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.DeviceDna	UInt128	0x700	0x700	RO	[0]	[128]	0	340282366920938463463374607431768211455	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.DeviceDna	0x10	0	128	128	0	Xilinx Device DNA value burned into FPGA|"\
     "ClinkDevRoot.ClinkFeb[1].AxiVersion.BuildStamp	String(256)	0x800	0x800	RO	[0]	[2048]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].AxiVersion.BuildStamp	0x100	0	2048	2048	0	Firmware Build String|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalTemperatureHighByte	UInt8	0x2000	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalTemperatureHighByte	0x4	0	8	8	0	Local temperature high byte (LTHB)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteTemperatureHighByte	UInt8	0x2004	0x4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteTemperatureHighByte	0x4	0	8	8	0	Remote temperature high byte (RTHB)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	Bool	0x2008	0x8	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, A/D is busy converting. POR state = n/a.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Lhigh	Bool	0x2008	0x8	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates local HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Llow	Bool	0x2008	0x8	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Rhigh	Bool	0x2008	0x8	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Rlow	Bool	0x2008	0x8	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Open	Bool	0x2008	0x8	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode disconnect. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Rcrit	Bool	0x2008	0x8	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.Lcrit	Bool	0x2008	0x8	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskRead	Bool	0x200c	0xc	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskWrite	Bool	0x2024	0x24	WO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.StopRead	Bool	0x200c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.StopWrite	Bool	0x2024	0x24	WO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RcritMaskRead	Bool	0x200c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RcritMaskWrite	Bool	0x2024	0x24	WO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LcritMaskRead	Bool	0x200c	0xc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LcritMaskWrite	Bool	0x2024	0x24	WO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.FaultQueueRead	Bool	0x200c	0xc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.FaultQueueWrite	Bool	0x2024	0x24	WO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.ConvertRateRead	UInt4	0x2010	0x10	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.ConvertRateRead	0x4	0	4	4	0	conversion rate read access (CR)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.ConvertRateWrite	UInt4	0x2028	0x28	WO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.ConvertRateWrite	0x4	0	4	4	0	conversion rate write access (CR)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalHighSetpointRead	UInt8	0x2014	0x14	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalHighSetpointRead	0x4	0	8	8	0	local high setpoint read access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalHighSetpointWrite	UInt8	0x202c	0x2c	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalHighSetpointWrite	0x4	0	8	8	0	local high setpoint write access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalLowSetpointRead	UInt8	0x2018	0x18	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalLowSetpointRead	0x4	0	8	8	0	Local Low setpoint read access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalLowSetpointWrite	UInt8	0x2030	0x30	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalLowSetpointWrite	0x4	0	8	8	0	Local Low setpoint write access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteHighSetpointHighByteRead	UInt8	0x201c	0x1c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteHighSetpointHighByteRead	0x4	0	8	8	0	Remote high setpoint high byte read access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteHighSetpointHighByteWrite	UInt8	0x2034	0x34	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteHighSetpointHighByteWrite	0x4	0	8	8	0	Remote high setpoint high byte write access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteLowSetpointHighByteRead	UInt8	0x2020	0x20	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteLowSetpointHighByteRead	0x4	0	8	8	0	Remote Low setpoint high byte read access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteLowSetpointHighByteWrite	UInt8	0x2038	0x38	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteLowSetpointHighByteWrite	0x4	0	8	8	0	Remote Low setpoint high byte write access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteTcritSetpoint	Int8	0x2064	0x64	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.RemoteTcritSetpoint	0x4	0	8	8	0	Remote T_CRIT setpoint (RCS)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalTcritSetpoint	Int8	0x2080	0x80	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.LocalTcritSetpoint	0x4	0	8	8	0	Local T_CRIT setpoint (LCS)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.TcritHysteresis	UInt5	0x2084	0x84	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.TcritHysteresis	0x4	0	5	5	0	T_CRIT hysteresis (TH)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.OneShot	UInt1	0x203c	0x3c	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.OneShot	0x4	0	1	1	0	writing register initiates a one-shot conversion (One Shot)|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMode	Bool	0x22fc	0x2fc	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.AlertMode	0x4	0	1	1	0	Alert mode (AM))|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.ManufacturerId	UInt8	0x23f8	0x3f8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.ManufacturerId	0x4	0	8	8	0	Read manufacturers ID (RMID) should be 0xA1|"\
     "ClinkDevRoot.ClinkFeb[1].BoardTemp.DieRevision	UInt8	0x23fc	0x3fc	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardTemp.DieRevision	0x4	0	8	8	0	Read stepping or die revision (RDR) should be 0x00|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.SenseMsb	UInt8	0x2400	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.SenseMsb	0x4	0	8	8	0	Sense MSB Data|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.SenseLsb	UInt4	0x2404	0x4	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.SenseLsb	0x4	0	4	4	0	Sense LSB Data|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.VinMsb	UInt8	0x2408	0x8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.VinMsb	0x4	0	8	8	0	Vin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.VinLsb	UInt4	0x240c	0xc	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.VinLsb	0x4	0	4	4	0	Vin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.AdinMsb	UInt8	0x2410	0x10	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.AdinMsb	0x4	0	8	8	0	Adin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.AdinLsb	UInt4	0x2414	0x14	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.AdinLsb	0x4	0	4	4	0	Adin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[1].BoardPwr.Control	UInt8	0x2418	0x18	RW	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].BoardPwr.Control	0x4	0	8	8	0	Controls ADC Operation Mode and Test Mode|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawTemperature	UInt12	0x3200	0x200	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawTemperature	0x4	0	12	12	0	\
The result of the on-chip temperature sensor measurement is\
stored in this location. The data is MSB justified in the\
16-bit register (Read Only).  The 12 MSBs correspond to the\
temperature sensor transfer function shown in Figure 2-8,\
page 31 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxTemperature	UInt12	0x3280	0x280	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxTemperature	0x4	0	12	12	0	\
Maximum temperature measurement recorded since\
power-up or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMinTemperature	UInt12	0x3290	0x290	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMinTemperature	0x4	0	12	12	0	\
Minimum temperature measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Over Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.UserTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawVccInt	UInt12	0x3204	0x204	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawVccInt	0x4	0	12	12	0	\
The result of the on-chip VccInt supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxVccInt	UInt12	0x3284	0x284	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxVccInt	0x4	0	12	12	0	\
Maximum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMinVccInt	UInt12	0x3294	0x294	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMinVccInt	0x4	0	12	12	0	\
Minimum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.VccIntAlarm	Bool	0x32fc	0x2fc	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccInt Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawVccAux	UInt12	0x3208	0x208	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawVccAux	0x4	0	12	12	0	\
The result of the on-chip VccAux supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxVccAux	UInt12	0x3288	0x288	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxVccAux	0x4	0	12	12	0	\
Maximum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMinVccAux	UInt12	0x3298	0x298	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMinVccAux	0x4	0	12	12	0	\
Minimum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.VccAuxAlarm	Bool	0x32fc	0x2fc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccAux Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawVccBram	UInt12	0x3218	0x218	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawVccBram	0x4	0	12	12	0	\
The result of the on-chip VccBram supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxVccBram	UInt12	0x328c	0x28c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMaxVccBram	0x4	0	12	12	0	\
Maximum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawMinVccBram	UInt12	0x329c	0x29c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawMinVccBram	0x4	0	12	12	0	\
Minimum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.VccBramAlarm	Bool	0x32fc	0x2fc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccBram Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawVin	UInt12	0x320c	0x20c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawVin	0x4	0	12	12	0	\
The result of a conversion on the dedicated analog input\
channel is stored in this register. The data is MSB justified\
in the 16-bit register (Read Only). The 12 MSBs correspond to the\
transfer function shown in Figure 2-5, page 29 or\
Figure 2-6, page 29 of UG480 (v1.2) depending on analog input mode\
settings.|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawVrefp	UInt12	0x3210	0x210	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawVrefp	0x4	0	12	12	0	\
The result of a conversion on the reference input VrefP is\
stored in this register. The 12 MSBs correspond to the ADC\
transfer function shown in Figure 2-9  of UG480 (v1.2). The data is MSB\
justified in the 16-bit register (Read Only). The supply sensor is used\
when measuring VrefP.|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawVrefn	UInt12	0x3214	0x214	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawVrefn	0x4	0	12	12	0	\
The result of a conversion on the reference input VREFN is\
stored in this register (Read Only). This channel is measured in bipolar\
mode with a 2's complement output coding as shown in\
Figure 2-2, page 25. By measuring in bipolar mode, small\
positive and negative at: offset around 0V (VrefN) can be\
measured. The supply sensor is also used to measure\
VrefN, thus 1 LSB = 3V/4096. The data is MSB justified in\
the 16-bit register.|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.SupplyOffsetA	UInt12	0x3220	0x220	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.SupplyOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the supply sensor offset\
using ADC A is stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.AdcOffsetA	UInt12	0x3224	0x224	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.AdcOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A offset is stored at\
this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.AdcGainA	UInt12	0x3228	0x228	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.AdcGainA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A gain error is\
stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.JTGD	Bool	0x32fc	0x2fc	RO	[11]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface for more information.|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.JTGR	Bool	0x32fc	0x2fc	RO	[10]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface\
for more information.|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.REF	UInt1	0x32fc	0x2fc	RO	[9]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
When this bit is a logic 1, the ADC is using the internal\
voltage reference. When this bit is a logic 0, the external\
reference is being used.|"\
     "ClinkDevRoot.ClinkFeb[1].Xadc.RawOT_Limit	UInt12	0x334c	0x34c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Xadc.RawOT_Limit	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Identifier	UInt8	0x5000	0x0	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'GBIC', 2: 'Motherboard', 3: 'SFP', 4: 'XBI', 5: 'XENPAK', 6: 'XFP', 7: 'XFF', 8: 'XFP-E', 9: 'XPAK', 10: 'X2', 11: 'DWDM-SFP', 12: 'QSFP', 13: 'QSFP+', 14: 'CXP', 15: 'HD-4X', 16: 'HD-8X', 17: 'QSFP28', 18: 'CXP28', 19: 'CDFP-Style1/2', 20: 'HD-4X-Fanout', 21: 'HD-8X-Fanout', 22: 'CDFP-Style3', 23: 'microQSFP', 24: 'QSFP-DD', 25: 'OSFP', 26: 'SFP-DD', 27: 'DSFP', 28: 'MiniLinkx4', 29: 'MiniLinkx8', 30: 'QSFP+'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Identifier	0x4	0	8	8	0	Type of serial transceiver|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Connector	UInt8	0x5008	0x8	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'SC', 2: 'Fibre Channel Style 1 copper connector', 3: 'Fibre Channel Style 2 copper connector', 4: 'BNC/TNC', 5: 'Fibre Channel coaxial headers', 6: 'Fiber Jack', 7: 'LC', 8: 'MT-RJ', 9: 'MU', 10: 'SG', 11: 'Optical pigtail', 12: 'MPO 1x12', 13: 'MPO 2x16', 32: 'HSSDC II', 33: 'Copper Pigtail', 34: 'RJ45', 35: 'No separable connector', 36: 'MXC 2x16', 37: 'CS optical connector', 38: 'SN', 39: 'MPO 2x12', 40: 'MPO 1x16'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Connector	0x4	0	8	8	0	Code for connector type|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[0]	String(1)	0x5050	0x50	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[0]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[1]	String(1)	0x5054	0x54	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[1]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[2]	String(1)	0x5058	0x58	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[2]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[3]	String(1)	0x505c	0x5c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[3]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[4]	String(1)	0x5060	0x60	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[4]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[5]	String(1)	0x5064	0x64	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[5]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[6]	String(1)	0x5068	0x68	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[6]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[7]	String(1)	0x506c	0x6c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[7]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[8]	String(1)	0x5070	0x70	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[8]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[9]	String(1)	0x5074	0x74	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[9]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[10]	String(1)	0x5078	0x78	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[10]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[11]	String(1)	0x507c	0x7c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[11]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[12]	String(1)	0x5080	0x80	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[12]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[13]	String(1)	0x5084	0x84	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[13]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[14]	String(1)	0x5088	0x88	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[14]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[15]	String(1)	0x508c	0x8c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorNameRaw[15]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[0]	String(1)	0x50a0	0xa0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[0]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[1]	String(1)	0x50a4	0xa4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[1]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[2]	String(1)	0x50a8	0xa8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[2]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[3]	String(1)	0x50ac	0xac	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[3]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[4]	String(1)	0x50b0	0xb0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[4]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[5]	String(1)	0x50b4	0xb4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[5]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[6]	String(1)	0x50b8	0xb8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[6]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[7]	String(1)	0x50bc	0xbc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[7]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[8]	String(1)	0x50c0	0xc0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[8]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[9]	String(1)	0x50c4	0xc4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[9]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[10]	String(1)	0x50c8	0xc8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[10]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[11]	String(1)	0x50cc	0xcc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[11]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[12]	String(1)	0x50d0	0xd0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[12]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[13]	String(1)	0x50d4	0xd4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[13]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[14]	String(1)	0x50d8	0xd8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[14]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[15]	String(1)	0x50dc	0xdc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorPnRaw[15]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[0]	String(1)	0x50e0	0xe0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[0]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[1]	String(1)	0x50e4	0xe4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[1]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[2]	String(1)	0x50e8	0xe8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[2]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[3]	String(1)	0x50ec	0xec	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorRevRaw[3]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[0]	String(1)	0x5110	0x110	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[0]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[1]	String(1)	0x5114	0x114	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[1]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[2]	String(1)	0x5118	0x118	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[2]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[3]	String(1)	0x511c	0x11c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[3]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[4]	String(1)	0x5120	0x120	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[4]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[5]	String(1)	0x5124	0x124	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[5]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[6]	String(1)	0x5128	0x128	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[6]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[7]	String(1)	0x512c	0x12c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[7]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[8]	String(1)	0x5130	0x130	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[8]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[9]	String(1)	0x5134	0x134	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[9]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[10]	String(1)	0x5138	0x138	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[10]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[11]	String(1)	0x513c	0x13c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[11]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[12]	String(1)	0x5140	0x140	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[12]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[13]	String(1)	0x5144	0x144	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[13]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[14]	String(1)	0x5148	0x148	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[14]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[15]	String(1)	0x514c	0x14c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].VendorSnRaw[15]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[0]	String(1)	0x5150	0x150	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[0]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[1]	String(1)	0x5154	0x154	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[1]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[2]	String(1)	0x5158	0x158	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[2]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[3]	String(1)	0x515c	0x15c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[3]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[4]	String(1)	0x5160	0x160	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[4]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[5]	String(1)	0x5164	0x164	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].DateCode[5]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[0]	UInt8	0x5580	0x580	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[0]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[1]	UInt8	0x5584	0x584	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[1]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[2]	UInt8	0x5588	0x588	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[2]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[3]	UInt8	0x558c	0x58c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[3]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[4]	UInt8	0x5590	0x590	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[4]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[5]	UInt8	0x5594	0x594	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[5]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[6]	UInt8	0x5598	0x598	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[6]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[7]	UInt8	0x559c	0x59c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[7]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[8]	UInt8	0x55a0	0x5a0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[8]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[9]	UInt8	0x55a4	0x5a4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[9]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[10]	UInt8	0x55a8	0x5a8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[10]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[11]	UInt8	0x55ac	0x5ac	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[11]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[12]	UInt8	0x55b0	0x5b0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[12]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[13]	UInt8	0x55b4	0x5b4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sfp[1].Diagnostics[13]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.SemStatus	UInt7	0x8000	0x0	RO	[0]	[7]	0	127	{0: 'Initialization', 1: 'Undef_0x1', 2: 'Observation', 4: 'Correction', 8: 'Classification', 16: 'Injection', 32: 'Idle', 95: 'Halt'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.SemStatus	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.Essential	Bool	0x8000	0x0	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.Uncorrectable	Bool	0x8000	0x0	RO	[8]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.HeartbeatCount	UInt32	0x8004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.HeartbeatCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InjectBitAddress	UInt5	0x8010	0x10	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InjectBitAddress	0x8	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InjectWordAddress	UInt7	0x8010	0x10	RW	[5]	[7]	0	127	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InjectBitAddress	0x8	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InjectLinearFrame	UInt17	0x8010	0x10	RW	[12]	[17]	0	131071	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InjectBitAddress	0x8	0	17	17	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InjectAddrHigh	UInt11	0x8010	0x10	RW	[29]	[11]	0	2047	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InjectBitAddress	0x8	0	11	11	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InitilizationCount	UInt12	0x8020	0x20	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InitilizationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.ObservationCount	UInt12	0x8024	0x24	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.ObservationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.CorrectionCount	UInt12	0x8028	0x28	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.CorrectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.ClassificationCount	UInt12	0x802c	0x2c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.ClassificationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InjectionCount	UInt12	0x8030	0x30	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InjectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.IdleCount	UInt12	0x8034	0x34	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.IdleCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.EssentialCount	UInt12	0x8038	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.EssentialCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.UncorrectableCount	UInt12	0x803c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.UncorrectableCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[1].Sem.InjectStrobe	UInt1	0x800c	0xc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].Sem.InjectStrobe	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ChanCount	UInt4	0x100000	0x0	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ChanCount	0x4	0	4	4	0	Supported channels|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.RstPll	UInt1	0x100004	0x4	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel PLL reset|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ResetFsm	UInt1	0x100004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel FSM reset|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.CntRst	UInt1	0x100004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.RstPll	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	Bool	0x100010	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedB	Bool	0x100010	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedC	Bool	0x100010	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedCntA	UInt8	0x100010	0x10	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedCntB	UInt8	0x100010	0x10	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedCntC	UInt8	0x100010	0x10	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ShiftCountA	UInt3	0x100014	0x14	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ShiftCountB	UInt3	0x100014	0x14	RO	[8]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ShiftCountC	UInt3	0x100014	0x14	RO	[16]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.DelayA	UInt5	0x100018	0x18	RO	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel A|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.DelayB	UInt5	0x100018	0x18	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel B|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.DelayC	UInt5	0x100018	0x18	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel C|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ClkInFreq[0]	UInt32	0x10001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ClkInFreq[0]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ClkInFreq[1]	UInt32	0x100020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ClkInFreq[1]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ClkInFreq[2]	UInt32	0x100024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ClkInFreq[2]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ClinkClkFreq[0]	UInt32	0x100028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ClinkClkFreq[0]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ClinkClkFreq[1]	UInt32	0x10002c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ClinkClkFreq[1]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.ClinkClkFreq[2]	UInt32	0x100030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.ClinkClkFreq[2]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].LinkMode	UInt3	0x100100	0x0	RW	[0]	[3]	0	7	{0: 'Disable', 1: 'Base', 2: 'Medium', 3: 'Full', 4: 'Deca'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].LinkMode	0x4	0	3	3	0	\
Link mode control for camera link lanes:\
Disable: Nothing connected\
Base: Port Supported [A,B,C], # of chips = 1, # of connectors = 1\
Medium: Port Supported [A,B,C,D,E,F], # of chips = 2, # of connectors = 2\
Full: Port Supported [A,B,C,D,E,F,G,H], # of chips = 3, # of connectors = 3\
Deca: Refer to section /\"2.2.3 Camera Link 80 bit/\" CameraLink spec V2.0, page 16\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataMode	UInt4	0x100104	0x4	RW	[0]	[4]	0	15	{0: 'None', 1: '8Bit', 2: '10Bit', 3: '12Bit', 4: '14Bit', 5: '16Bit', 6: '24Bit', 7: '30Bit', 8: '36Bit'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataMode	0x4	0	4	4	0	Data mode|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].FrameMode	UInt2	0x100108	0x8	RW	[0]	[2]	0	3	{0: 'None', 1: 'Line', 2: 'Frame'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].FrameMode	0x4	0	2	2	0	\
None: Disables output\
Line: 1D camera\
Frame: 2D pixel array\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].TapCount	UInt4	0x10010c	0xc	RW	[0]	[4]	0	10	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].TapCount	0x4	0	4	4	0	# of video output taps on the Camera Link Interface (# of individual data value channels)|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataEn	Bool	0x100110	0x10	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Data enable.  When 0x0 causes reset on ClinkData's FSM module|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].Blowoff	Bool	0x100110	0x10	RW	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Blows off the outbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].CntRst	UInt1	0x100110	0x10	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].SerThrottle	UInt16	0x100110	0x10	RW	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DataEn	0x4	0	16	16	0	Throttles the UART Serial TX byte rate. Used when the camera cannot accept new bytes until the previous command processed|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].BaudRate	UInt24	0x100114	0x14	RW	[0]	[24]	0	16777215	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].BaudRate	0x4	0	24	24	0	Baud rate|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].SwControlValue	UInt4	0x100118	0x18	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].SwControlValue	0x4	0	4	4	0	Software camera control bit values|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].SwControlEn	UInt4	0x10011c	0x1c	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].SwControlEn	0x4	0	4	4	0	Software camera control bit enable mask for lane A|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].Running	Bool	0x100120	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].Running	0x4	0	1	1	0	Camera link lane running status|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].FrameCount	UInt32	0x100124	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].FrameCount	0x4	0	32	32	0	Frame counter|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DropCount	UInt32	0x100128	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].DropCount	0x4	0	32	32	0	Drop counter|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].FrameSize	UInt32	0x10012c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].FrameSize	0x4	0	32	32	0	Camera Image size|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].HSkip	UInt16	0x100130	0x30	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].HSkip	0x4	0	16	16	0	# of cycle to skip from the start of CLINK LineValid (LV)|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].HActive	UInt16	0x100134	0x34	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].HActive	0x4	0	16	16	0	# of active cycle after HSkip while CLINK LineValid (LV) is active|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].VSkip	UInt16	0x100138	0x38	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].VSkip	0x4	0	16	16	0	# of lines to skip from the start of CLINK FrameValid (FV)|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].VActive	UInt16	0x10013c	0x3c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Ch[0].VActive	0x4	0	16	16	0	# of active lines after VSkip while CLINK FrameValid (FV) is active|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[0]	UInt3	0x101020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[0]	UInt6	0x101020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[0]	UInt6	0x101020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[1]	UInt3	0x101028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[1]	UInt6	0x101028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[1]	UInt6	0x101028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[2]	UInt3	0x101030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[2]	UInt6	0x101030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[2]	UInt6	0x101030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[3]	UInt3	0x101038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[3]	UInt6	0x101038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[3]	UInt6	0x101038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[4]	UInt3	0x101040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[4]	UInt6	0x101040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[4]	UInt6	0x101040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[5]	UInt3	0x101018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[5]	UInt6	0x101018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[5]	UInt6	0x101018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[6]	UInt3	0x101048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME[6]	UInt6	0x101048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME[6]	UInt6	0x101048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_FB	UInt3	0x101050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME_FB	UInt6	0x101050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME_FB	UInt6	0x101050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	UInt3	0x101024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_EN[0]	UInt1	0x101024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_WF_R[0]	UInt1	0x101024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[0]	UInt2	0x101024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[0]	UInt1	0x101024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[0]	UInt1	0x101024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[0]	UInt6	0x101024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[1]	UInt2	0x10102c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[1]	UInt1	0x10102c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[1]	UInt1	0x10102c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[1]	UInt6	0x10102c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[2]	UInt2	0x101034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[2]	UInt1	0x101034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[2]	UInt1	0x101034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[2]	UInt6	0x101034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[3]	UInt2	0x10103c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[3]	UInt1	0x10103c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[3]	UInt1	0x10103c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[3]	UInt6	0x10103c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[4]	UInt2	0x101044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[4]	UInt1	0x101044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[4]	UInt1	0x101044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[4]	UInt6	0x101044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10101c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT[0]	UInt1	0x10101c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[5]	UInt2	0x10101c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[5]	UInt1	0x10101c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[5]	UInt1	0x10101c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[5]	UInt6	0x10101c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10104c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT_FB	UInt1	0x10104c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX[6]	UInt2	0x10104c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE[6]	UInt1	0x10104c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT[6]	UInt1	0x10104c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME[6]	UInt6	0x10104c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	UInt3	0x101054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_EN_FB	UInt1	0x101054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_WF_R_FB	UInt1	0x101054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].MX_FB	UInt2	0x101054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE_FB	UInt1	0x101054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT_FB	UInt1	0x101054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].DELAY_TIME_FB	UInt6	0x101054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE_DIV	UInt1	0x101058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].NO_COUNT_DIV	UInt1	0x101058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].HIGH_TIME_DIV	UInt6	0x101058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LOW_TIME_DIV	UInt6	0x101058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LockReg[0]	UInt16	0x101060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LockReg[1]	UInt16	0x101064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LockReg[2]	UInt16	0x101068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FiltReg[0]	UInt16	0x101138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FiltReg[1]	UInt16	0x10113c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].POWER	UInt16	0x1010a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[0].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[0]	UInt3	0x102020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[0]	UInt6	0x102020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[0]	UInt6	0x102020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[1]	UInt3	0x102028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[1]	UInt6	0x102028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[1]	UInt6	0x102028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[2]	UInt3	0x102030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[2]	UInt6	0x102030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[2]	UInt6	0x102030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[3]	UInt3	0x102038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[3]	UInt6	0x102038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[3]	UInt6	0x102038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[4]	UInt3	0x102040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[4]	UInt6	0x102040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[4]	UInt6	0x102040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[5]	UInt3	0x102018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[5]	UInt6	0x102018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[5]	UInt6	0x102018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[6]	UInt3	0x102048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME[6]	UInt6	0x102048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME[6]	UInt6	0x102048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_FB	UInt3	0x102050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME_FB	UInt6	0x102050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME_FB	UInt6	0x102050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	UInt3	0x102024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_EN[0]	UInt1	0x102024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_WF_R[0]	UInt1	0x102024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[0]	UInt2	0x102024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[0]	UInt1	0x102024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[0]	UInt1	0x102024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[0]	UInt6	0x102024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[1]	UInt2	0x10202c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[1]	UInt1	0x10202c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[1]	UInt1	0x10202c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[1]	UInt6	0x10202c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[2]	UInt2	0x102034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[2]	UInt1	0x102034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[2]	UInt1	0x102034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[2]	UInt6	0x102034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[3]	UInt2	0x10203c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[3]	UInt1	0x10203c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[3]	UInt1	0x10203c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[3]	UInt6	0x10203c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[4]	UInt2	0x102044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[4]	UInt1	0x102044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[4]	UInt1	0x102044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[4]	UInt6	0x102044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10201c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT[0]	UInt1	0x10201c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[5]	UInt2	0x10201c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[5]	UInt1	0x10201c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[5]	UInt1	0x10201c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[5]	UInt6	0x10201c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10204c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT_FB	UInt1	0x10204c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX[6]	UInt2	0x10204c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE[6]	UInt1	0x10204c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT[6]	UInt1	0x10204c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME[6]	UInt6	0x10204c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	UInt3	0x102054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_EN_FB	UInt1	0x102054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_WF_R_FB	UInt1	0x102054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].MX_FB	UInt2	0x102054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE_FB	UInt1	0x102054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT_FB	UInt1	0x102054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].DELAY_TIME_FB	UInt6	0x102054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE_DIV	UInt1	0x102058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].NO_COUNT_DIV	UInt1	0x102058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].HIGH_TIME_DIV	UInt6	0x102058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LOW_TIME_DIV	UInt6	0x102058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LockReg[0]	UInt16	0x102060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LockReg[1]	UInt16	0x102064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LockReg[2]	UInt16	0x102068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FiltReg[0]	UInt16	0x102138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FiltReg[1]	UInt16	0x10213c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].POWER	UInt16	0x1020a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[1].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[0]	UInt3	0x103020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[0]	UInt6	0x103020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[0]	UInt6	0x103020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[1]	UInt3	0x103028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[1]	UInt6	0x103028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[1]	UInt6	0x103028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[2]	UInt3	0x103030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[2]	UInt6	0x103030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[2]	UInt6	0x103030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[3]	UInt3	0x103038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[3]	UInt6	0x103038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[3]	UInt6	0x103038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[4]	UInt3	0x103040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[4]	UInt6	0x103040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[4]	UInt6	0x103040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[5]	UInt3	0x103018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[5]	UInt6	0x103018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[5]	UInt6	0x103018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[6]	UInt3	0x103048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME[6]	UInt6	0x103048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME[6]	UInt6	0x103048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_FB	UInt3	0x103050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME_FB	UInt6	0x103050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME_FB	UInt6	0x103050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	UInt3	0x103024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_EN[0]	UInt1	0x103024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_WF_R[0]	UInt1	0x103024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[0]	UInt2	0x103024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[0]	UInt1	0x103024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[0]	UInt1	0x103024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[0]	UInt6	0x103024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[1]	UInt2	0x10302c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[1]	UInt1	0x10302c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[1]	UInt1	0x10302c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[1]	UInt6	0x10302c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[2]	UInt2	0x103034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[2]	UInt1	0x103034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[2]	UInt1	0x103034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[2]	UInt6	0x103034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[3]	UInt2	0x10303c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[3]	UInt1	0x10303c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[3]	UInt1	0x10303c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[3]	UInt6	0x10303c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[4]	UInt2	0x103044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[4]	UInt1	0x103044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[4]	UInt1	0x103044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[4]	UInt6	0x103044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10301c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT[0]	UInt1	0x10301c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[5]	UInt2	0x10301c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[5]	UInt1	0x10301c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[5]	UInt1	0x10301c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[5]	UInt6	0x10301c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10304c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT_FB	UInt1	0x10304c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX[6]	UInt2	0x10304c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE[6]	UInt1	0x10304c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT[6]	UInt1	0x10304c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME[6]	UInt6	0x10304c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	UInt3	0x103054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_EN_FB	UInt1	0x103054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_WF_R_FB	UInt1	0x103054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].MX_FB	UInt2	0x103054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE_FB	UInt1	0x103054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT_FB	UInt1	0x103054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].DELAY_TIME_FB	UInt6	0x103054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE_DIV	UInt1	0x103058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].NO_COUNT_DIV	UInt1	0x103058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].HIGH_TIME_DIV	UInt6	0x103058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LOW_TIME_DIV	UInt6	0x103058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LockReg[0]	UInt16	0x103060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LockReg[1]	UInt16	0x103064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LockReg[2]	UInt16	0x103068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FiltReg[0]	UInt16	0x103138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FiltReg[1]	UInt16	0x10313c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].POWER	UInt16	0x1030a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].ClinkTop.Pll[2].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].EnableTrig	Bool	0x200000	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].EnableTrig	0x4	0	1	1	0	Enable triggering|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].InvCC	Bool	0x200004	0x4	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].InvCC	0x4	0	1	1	0	Inverter the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigMap	UInt1	0x200008	0x8	RW	[0]	[1]	0	1	{0: 'ChA', 1: 'ChB'}	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigMap	0x4	0	1	1	0	0x0: map trigger to channel A, 0x1: map trigger to channel B|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigPulseWidthRaw	UInt32	0x20000c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigPulseWidthRaw	0x4	0	32	32	0	Sets the trigger pulse width on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigMask	UInt4	0x200010	0x10	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigMask	0x4	0	4	4	0	Sets the trigger mask on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigRate	UInt32	0x2000f4	0xf4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigRate	0x4	0	32	32	0	Trigger Rate|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigCnt	UInt32	0x2000f8	0xf8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].TrigCnt	0x4	0	32	32	0	Trigger Counter|"\
     "ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].CntRst	UInt1	0x2000fc	0xfc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].TrigCtrl[0].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	Bool	0x400020	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	1	1	0	RX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxPhyReady	Bool	0x400020	0x20	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	1	1	0	TX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxLocalLinkReady	Bool	0x400020	0x20	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Local Link Ready|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemLinkReady	Bool	0x400020	0x20	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Remote Link Ready|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLinkReady	Bool	0x400020	0x20	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Tx Link Ready|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxLinkPolarity	UInt2	0x400020	0x20	RO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	2	2	0	Rx Link Polarity|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemPause	UInt4	0x400020	0x20	RO	[12]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	4	4	0	RX Remote Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocPause	UInt4	0x400020	0x20	RO	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Tx Local Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow	UInt4	0x400020	0x20	RO	[20]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received remote overflow flag|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow	UInt4	0x400020	0x20	RO	[24]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received local overflow flag|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemLinkData	UInt8	0x400024	0x24	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemLinkData	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxCellErrorCount	UInt8	0x400028	0x28	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxCellErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxLinkDownCount	UInt8	0x40002c	0x2c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxLinkDownCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxLinkErrorCount	UInt8	0x400030	0x30	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxLinkErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow0Count	UInt8	0x400034	0x34	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow1Count	UInt8	0x400038	0x38	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow2Count	UInt8	0x40003c	0x3c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow3Count	UInt8	0x400040	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxFrameErrorCount	UInt8	0x400044	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxFrameCount	UInt8	0x400048	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow0Count	UInt8	0x40004c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow1Count	UInt8	0x400050	0x50	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow2Count	UInt8	0x400054	0x54	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow3Count	UInt8	0x400058	0x58	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxLocOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxFrameErrorCount	UInt8	0x40005c	0x5c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxFrameCount	UInt8	0x400060	0x60	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemLinkReadyCount	UInt8	0x400080	0x80	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxRemLinkReadyCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].LastTxOpCode	UInt8	0x400070	0x70	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].LastTxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].LastRxOpCode	UInt8	0x400074	0x74	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].LastRxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxOpCodeCount	UInt8	0x400078	0x78	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxOpCodeCount	UInt8	0x40007c	0x7c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].CountReset	UInt1	0x400000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].CountReset	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].ResetRx	UInt1	0x400004	0x4	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].ResetTx	UInt1	0x400004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].ResetGt	UInt1	0x400004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxClkFreqRaw	UInt32	0x400064	0x64	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].RxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxClkFreqRaw	UInt32	0x400068	0x68	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[0].TxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.CountReset	UInt1	0x410000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.WRITE_EN_G	Bool	0x410004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.NUM_VC_G	UInt8	0x410004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.SkipInterval	UInt32	0x410008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	UInt3	0x41000c	0xc	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.FlowControlDisable	Bool	0x41000c	0xc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.TxDisable	Bool	0x41000c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.ResetTx	Bool	0x41000c	0xc	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.ResetRx	Bool	0x41000c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.TxDiffCtrl	UInt5	0x41000c	0xc	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.TxPreCursor	UInt5	0x41000c	0xc	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.TxPostCursor	UInt5	0x41000c	0xc	RO	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[0]	UInt16	0x410400	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[1]	UInt16	0x410404	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[2]	UInt16	0x410408	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[3]	UInt16	0x41040c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[0]	UInt8	0x410440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[1]	UInt8	0x410444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[2]	UInt8	0x410448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[3]	UInt8	0x41044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.FrameCnt	UInt16	0x410500	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.OpCodeEnCnt	UInt16	0x410504	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActiveCnt	UInt8	0x410600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxInitCnt	UInt8	0x410604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.GearboxAlignedCnt	UInt8	0x410608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkReadyCnt	UInt8	0x41060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemRxLinkReadyCnt	UInt8	0x410610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.FrameErrorCnt	UInt8	0x410614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkDownCnt	UInt8	0x410618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkErrorCnt	UInt8	0x41061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.EbOverflowCnt	UInt8	0x410620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellErrorCnt	UInt8	0x410624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellSofErrorCnt	UInt8	0x410628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellSeqErrorCnt	UInt8	0x41062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellVersionErrorCnt	UInt8	0x410630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellCrcModeErrorCnt	UInt8	0x410634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellCrcErrorCnt	UInt8	0x410638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellEofeErrorCnt	UInt8	0x41063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActive	Bool	0x410710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.GearboxAligned	Bool	0x410710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.LinkReady	Bool	0x410710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemRxLinkReady	Bool	0x410710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemLinkData	UInt48	0x410720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOpCodeData	UInt48	0x410730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemRxPause	UInt4	0x410740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RxClockFreqRaw	UInt32	0x410750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[0]	UInt16	0x410800	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[1]	UInt16	0x410804	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[2]	UInt16	0x410808	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[3]	UInt16	0x41080c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[0]	UInt8	0x410840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[1]	UInt8	0x410844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[2]	UInt8	0x410848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[3]	UInt8	0x41084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.FrameCnt	UInt16	0x410900	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.OpCodeEnCnt	UInt16	0x410904	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.phyTxActiveCnt	UInt8	0x410a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LinkReadyCnt	UInt8	0x410a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.FrameErrorCnt	UInt8	0x410a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.phyTxActive	Bool	0x410b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LinkReady	Bool	0x410b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocLinkData	UInt48	0x410b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOpCodeData	UInt48	0x410b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocTxPause	UInt4	0x410b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.TxClockFreqRaw	UInt32	0x410b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[1]	ClinkDevRoot.ClinkFeb[1].PgpMon[1].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaVersion	UInt32	0x0	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaVersion	0x4	0	32	32	0	FPGA Firmware Version Number|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.ScratchPad	UInt32	0x4	0x4	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.ScratchPad	0x4	0	32	32	0	Register to test reads and writes|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.UpTimeCnt	UInt32	0x8	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.UpTimeCnt	0x4	0	32	32	0	Number of seconds since last reset|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaReloadHalt	UInt1	0x100	0x100	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaReloadHalt	0x4	0	1	1	0	Used to halt automatic reloads via AxiVersion|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaReload	UInt1	0x104	0x104	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaReload	0x4	0	1	1	0	Optional Reload the FPGA from the attached PROM|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaReloadAddress	UInt32	0x108	0x108	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.FpgaReloadAddress	0x4	0	32	32	0	Reload start address|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.UserReset	UInt1	0x10c	0x10c	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.UserReset	0x4	0	1	1	0	Optional User Reset|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.FdSerial	UInt64	0x300	0x300	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.FdSerial	0x8	0	64	64	0	Board ID value read from DS2411 chip|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.DeviceId	UInt32	0x500	0x500	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.DeviceId	0x4	0	32	32	0	Device Identification  (configued by generic)|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.GitHash	UInt160	0x600	0x600	RO	[0]	[160]	0	1461501637330902918203684832716283019655932542975	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.GitHash	0x14	0	160	160	0	GIT SHA-1 Hash|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.DeviceDna	UInt128	0x700	0x700	RO	[0]	[128]	0	340282366920938463463374607431768211455	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.DeviceDna	0x10	0	128	128	0	Xilinx Device DNA value burned into FPGA|"\
     "ClinkDevRoot.ClinkFeb[2].AxiVersion.BuildStamp	String(256)	0x800	0x800	RO	[0]	[2048]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].AxiVersion.BuildStamp	0x100	0	2048	2048	0	Firmware Build String|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalTemperatureHighByte	UInt8	0x2000	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalTemperatureHighByte	0x4	0	8	8	0	Local temperature high byte (LTHB)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteTemperatureHighByte	UInt8	0x2004	0x4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteTemperatureHighByte	0x4	0	8	8	0	Remote temperature high byte (RTHB)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	Bool	0x2008	0x8	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, A/D is busy converting. POR state = n/a.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Lhigh	Bool	0x2008	0x8	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates local HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Llow	Bool	0x2008	0x8	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Rhigh	Bool	0x2008	0x8	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Rlow	Bool	0x2008	0x8	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Open	Bool	0x2008	0x8	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode disconnect. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Rcrit	Bool	0x2008	0x8	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.Lcrit	Bool	0x2008	0x8	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskRead	Bool	0x200c	0xc	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskWrite	Bool	0x2024	0x24	WO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.StopRead	Bool	0x200c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.StopWrite	Bool	0x2024	0x24	WO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RcritMaskRead	Bool	0x200c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RcritMaskWrite	Bool	0x2024	0x24	WO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LcritMaskRead	Bool	0x200c	0xc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LcritMaskWrite	Bool	0x2024	0x24	WO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.FaultQueueRead	Bool	0x200c	0xc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.FaultQueueWrite	Bool	0x2024	0x24	WO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.ConvertRateRead	UInt4	0x2010	0x10	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.ConvertRateRead	0x4	0	4	4	0	conversion rate read access (CR)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.ConvertRateWrite	UInt4	0x2028	0x28	WO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.ConvertRateWrite	0x4	0	4	4	0	conversion rate write access (CR)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalHighSetpointRead	UInt8	0x2014	0x14	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalHighSetpointRead	0x4	0	8	8	0	local high setpoint read access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalHighSetpointWrite	UInt8	0x202c	0x2c	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalHighSetpointWrite	0x4	0	8	8	0	local high setpoint write access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalLowSetpointRead	UInt8	0x2018	0x18	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalLowSetpointRead	0x4	0	8	8	0	Local Low setpoint read access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalLowSetpointWrite	UInt8	0x2030	0x30	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalLowSetpointWrite	0x4	0	8	8	0	Local Low setpoint write access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteHighSetpointHighByteRead	UInt8	0x201c	0x1c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteHighSetpointHighByteRead	0x4	0	8	8	0	Remote high setpoint high byte read access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteHighSetpointHighByteWrite	UInt8	0x2034	0x34	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteHighSetpointHighByteWrite	0x4	0	8	8	0	Remote high setpoint high byte write access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteLowSetpointHighByteRead	UInt8	0x2020	0x20	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteLowSetpointHighByteRead	0x4	0	8	8	0	Remote Low setpoint high byte read access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteLowSetpointHighByteWrite	UInt8	0x2038	0x38	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteLowSetpointHighByteWrite	0x4	0	8	8	0	Remote Low setpoint high byte write access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteTcritSetpoint	Int8	0x2064	0x64	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.RemoteTcritSetpoint	0x4	0	8	8	0	Remote T_CRIT setpoint (RCS)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalTcritSetpoint	Int8	0x2080	0x80	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.LocalTcritSetpoint	0x4	0	8	8	0	Local T_CRIT setpoint (LCS)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.TcritHysteresis	UInt5	0x2084	0x84	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.TcritHysteresis	0x4	0	5	5	0	T_CRIT hysteresis (TH)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.OneShot	UInt1	0x203c	0x3c	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.OneShot	0x4	0	1	1	0	writing register initiates a one-shot conversion (One Shot)|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMode	Bool	0x22fc	0x2fc	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.AlertMode	0x4	0	1	1	0	Alert mode (AM))|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.ManufacturerId	UInt8	0x23f8	0x3f8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.ManufacturerId	0x4	0	8	8	0	Read manufacturers ID (RMID) should be 0xA1|"\
     "ClinkDevRoot.ClinkFeb[2].BoardTemp.DieRevision	UInt8	0x23fc	0x3fc	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardTemp.DieRevision	0x4	0	8	8	0	Read stepping or die revision (RDR) should be 0x00|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.SenseMsb	UInt8	0x2400	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.SenseMsb	0x4	0	8	8	0	Sense MSB Data|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.SenseLsb	UInt4	0x2404	0x4	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.SenseLsb	0x4	0	4	4	0	Sense LSB Data|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.VinMsb	UInt8	0x2408	0x8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.VinMsb	0x4	0	8	8	0	Vin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.VinLsb	UInt4	0x240c	0xc	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.VinLsb	0x4	0	4	4	0	Vin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.AdinMsb	UInt8	0x2410	0x10	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.AdinMsb	0x4	0	8	8	0	Adin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.AdinLsb	UInt4	0x2414	0x14	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.AdinLsb	0x4	0	4	4	0	Adin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[2].BoardPwr.Control	UInt8	0x2418	0x18	RW	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].BoardPwr.Control	0x4	0	8	8	0	Controls ADC Operation Mode and Test Mode|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawTemperature	UInt12	0x3200	0x200	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawTemperature	0x4	0	12	12	0	\
The result of the on-chip temperature sensor measurement is\
stored in this location. The data is MSB justified in the\
16-bit register (Read Only).  The 12 MSBs correspond to the\
temperature sensor transfer function shown in Figure 2-8,\
page 31 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxTemperature	UInt12	0x3280	0x280	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxTemperature	0x4	0	12	12	0	\
Maximum temperature measurement recorded since\
power-up or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMinTemperature	UInt12	0x3290	0x290	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMinTemperature	0x4	0	12	12	0	\
Minimum temperature measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Over Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.UserTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawVccInt	UInt12	0x3204	0x204	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawVccInt	0x4	0	12	12	0	\
The result of the on-chip VccInt supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxVccInt	UInt12	0x3284	0x284	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxVccInt	0x4	0	12	12	0	\
Maximum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMinVccInt	UInt12	0x3294	0x294	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMinVccInt	0x4	0	12	12	0	\
Minimum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.VccIntAlarm	Bool	0x32fc	0x2fc	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccInt Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawVccAux	UInt12	0x3208	0x208	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawVccAux	0x4	0	12	12	0	\
The result of the on-chip VccAux supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxVccAux	UInt12	0x3288	0x288	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxVccAux	0x4	0	12	12	0	\
Maximum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMinVccAux	UInt12	0x3298	0x298	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMinVccAux	0x4	0	12	12	0	\
Minimum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.VccAuxAlarm	Bool	0x32fc	0x2fc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccAux Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawVccBram	UInt12	0x3218	0x218	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawVccBram	0x4	0	12	12	0	\
The result of the on-chip VccBram supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxVccBram	UInt12	0x328c	0x28c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMaxVccBram	0x4	0	12	12	0	\
Maximum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawMinVccBram	UInt12	0x329c	0x29c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawMinVccBram	0x4	0	12	12	0	\
Minimum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.VccBramAlarm	Bool	0x32fc	0x2fc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccBram Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawVin	UInt12	0x320c	0x20c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawVin	0x4	0	12	12	0	\
The result of a conversion on the dedicated analog input\
channel is stored in this register. The data is MSB justified\
in the 16-bit register (Read Only). The 12 MSBs correspond to the\
transfer function shown in Figure 2-5, page 29 or\
Figure 2-6, page 29 of UG480 (v1.2) depending on analog input mode\
settings.|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawVrefp	UInt12	0x3210	0x210	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawVrefp	0x4	0	12	12	0	\
The result of a conversion on the reference input VrefP is\
stored in this register. The 12 MSBs correspond to the ADC\
transfer function shown in Figure 2-9  of UG480 (v1.2). The data is MSB\
justified in the 16-bit register (Read Only). The supply sensor is used\
when measuring VrefP.|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawVrefn	UInt12	0x3214	0x214	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawVrefn	0x4	0	12	12	0	\
The result of a conversion on the reference input VREFN is\
stored in this register (Read Only). This channel is measured in bipolar\
mode with a 2's complement output coding as shown in\
Figure 2-2, page 25. By measuring in bipolar mode, small\
positive and negative at: offset around 0V (VrefN) can be\
measured. The supply sensor is also used to measure\
VrefN, thus 1 LSB = 3V/4096. The data is MSB justified in\
the 16-bit register.|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.SupplyOffsetA	UInt12	0x3220	0x220	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.SupplyOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the supply sensor offset\
using ADC A is stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.AdcOffsetA	UInt12	0x3224	0x224	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.AdcOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A offset is stored at\
this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.AdcGainA	UInt12	0x3228	0x228	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.AdcGainA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A gain error is\
stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.JTGD	Bool	0x32fc	0x2fc	RO	[11]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface for more information.|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.JTGR	Bool	0x32fc	0x2fc	RO	[10]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface\
for more information.|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.REF	UInt1	0x32fc	0x2fc	RO	[9]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
When this bit is a logic 1, the ADC is using the internal\
voltage reference. When this bit is a logic 0, the external\
reference is being used.|"\
     "ClinkDevRoot.ClinkFeb[2].Xadc.RawOT_Limit	UInt12	0x334c	0x34c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Xadc.RawOT_Limit	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Identifier	UInt8	0x5000	0x0	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'GBIC', 2: 'Motherboard', 3: 'SFP', 4: 'XBI', 5: 'XENPAK', 6: 'XFP', 7: 'XFF', 8: 'XFP-E', 9: 'XPAK', 10: 'X2', 11: 'DWDM-SFP', 12: 'QSFP', 13: 'QSFP+', 14: 'CXP', 15: 'HD-4X', 16: 'HD-8X', 17: 'QSFP28', 18: 'CXP28', 19: 'CDFP-Style1/2', 20: 'HD-4X-Fanout', 21: 'HD-8X-Fanout', 22: 'CDFP-Style3', 23: 'microQSFP', 24: 'QSFP-DD', 25: 'OSFP', 26: 'SFP-DD', 27: 'DSFP', 28: 'MiniLinkx4', 29: 'MiniLinkx8', 30: 'QSFP+'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Identifier	0x4	0	8	8	0	Type of serial transceiver|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Connector	UInt8	0x5008	0x8	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'SC', 2: 'Fibre Channel Style 1 copper connector', 3: 'Fibre Channel Style 2 copper connector', 4: 'BNC/TNC', 5: 'Fibre Channel coaxial headers', 6: 'Fiber Jack', 7: 'LC', 8: 'MT-RJ', 9: 'MU', 10: 'SG', 11: 'Optical pigtail', 12: 'MPO 1x12', 13: 'MPO 2x16', 32: 'HSSDC II', 33: 'Copper Pigtail', 34: 'RJ45', 35: 'No separable connector', 36: 'MXC 2x16', 37: 'CS optical connector', 38: 'SN', 39: 'MPO 2x12', 40: 'MPO 1x16'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Connector	0x4	0	8	8	0	Code for connector type|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[0]	String(1)	0x5050	0x50	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[0]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[1]	String(1)	0x5054	0x54	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[1]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[2]	String(1)	0x5058	0x58	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[2]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[3]	String(1)	0x505c	0x5c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[3]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[4]	String(1)	0x5060	0x60	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[4]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[5]	String(1)	0x5064	0x64	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[5]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[6]	String(1)	0x5068	0x68	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[6]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[7]	String(1)	0x506c	0x6c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[7]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[8]	String(1)	0x5070	0x70	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[8]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[9]	String(1)	0x5074	0x74	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[9]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[10]	String(1)	0x5078	0x78	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[10]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[11]	String(1)	0x507c	0x7c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[11]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[12]	String(1)	0x5080	0x80	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[12]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[13]	String(1)	0x5084	0x84	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[13]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[14]	String(1)	0x5088	0x88	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[14]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[15]	String(1)	0x508c	0x8c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorNameRaw[15]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[0]	String(1)	0x50a0	0xa0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[0]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[1]	String(1)	0x50a4	0xa4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[1]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[2]	String(1)	0x50a8	0xa8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[2]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[3]	String(1)	0x50ac	0xac	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[3]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[4]	String(1)	0x50b0	0xb0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[4]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[5]	String(1)	0x50b4	0xb4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[5]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[6]	String(1)	0x50b8	0xb8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[6]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[7]	String(1)	0x50bc	0xbc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[7]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[8]	String(1)	0x50c0	0xc0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[8]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[9]	String(1)	0x50c4	0xc4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[9]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[10]	String(1)	0x50c8	0xc8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[10]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[11]	String(1)	0x50cc	0xcc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[11]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[12]	String(1)	0x50d0	0xd0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[12]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[13]	String(1)	0x50d4	0xd4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[13]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[14]	String(1)	0x50d8	0xd8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[14]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[15]	String(1)	0x50dc	0xdc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorPnRaw[15]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[0]	String(1)	0x50e0	0xe0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[0]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[1]	String(1)	0x50e4	0xe4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[1]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[2]	String(1)	0x50e8	0xe8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[2]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[3]	String(1)	0x50ec	0xec	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorRevRaw[3]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[0]	String(1)	0x5110	0x110	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[0]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[1]	String(1)	0x5114	0x114	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[1]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[2]	String(1)	0x5118	0x118	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[2]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[3]	String(1)	0x511c	0x11c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[3]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[4]	String(1)	0x5120	0x120	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[4]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[5]	String(1)	0x5124	0x124	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[5]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[6]	String(1)	0x5128	0x128	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[6]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[7]	String(1)	0x512c	0x12c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[7]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[8]	String(1)	0x5130	0x130	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[8]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[9]	String(1)	0x5134	0x134	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[9]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[10]	String(1)	0x5138	0x138	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[10]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[11]	String(1)	0x513c	0x13c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[11]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[12]	String(1)	0x5140	0x140	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[12]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[13]	String(1)	0x5144	0x144	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[13]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[14]	String(1)	0x5148	0x148	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[14]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[15]	String(1)	0x514c	0x14c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].VendorSnRaw[15]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[0]	String(1)	0x5150	0x150	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[0]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[1]	String(1)	0x5154	0x154	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[1]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[2]	String(1)	0x5158	0x158	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[2]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[3]	String(1)	0x515c	0x15c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[3]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[4]	String(1)	0x5160	0x160	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[4]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[5]	String(1)	0x5164	0x164	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].DateCode[5]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[0]	UInt8	0x5580	0x580	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[0]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[1]	UInt8	0x5584	0x584	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[1]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[2]	UInt8	0x5588	0x588	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[2]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[3]	UInt8	0x558c	0x58c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[3]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[4]	UInt8	0x5590	0x590	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[4]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[5]	UInt8	0x5594	0x594	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[5]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[6]	UInt8	0x5598	0x598	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[6]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[7]	UInt8	0x559c	0x59c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[7]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[8]	UInt8	0x55a0	0x5a0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[8]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[9]	UInt8	0x55a4	0x5a4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[9]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[10]	UInt8	0x55a8	0x5a8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[10]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[11]	UInt8	0x55ac	0x5ac	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[11]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[12]	UInt8	0x55b0	0x5b0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[12]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[13]	UInt8	0x55b4	0x5b4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sfp[1].Diagnostics[13]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.SemStatus	UInt7	0x8000	0x0	RO	[0]	[7]	0	127	{0: 'Initialization', 1: 'Undef_0x1', 2: 'Observation', 4: 'Correction', 8: 'Classification', 16: 'Injection', 32: 'Idle', 95: 'Halt'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.SemStatus	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.Essential	Bool	0x8000	0x0	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.Uncorrectable	Bool	0x8000	0x0	RO	[8]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.HeartbeatCount	UInt32	0x8004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.HeartbeatCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InjectBitAddress	UInt5	0x8010	0x10	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InjectBitAddress	0x8	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InjectWordAddress	UInt7	0x8010	0x10	RW	[5]	[7]	0	127	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InjectBitAddress	0x8	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InjectLinearFrame	UInt17	0x8010	0x10	RW	[12]	[17]	0	131071	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InjectBitAddress	0x8	0	17	17	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InjectAddrHigh	UInt11	0x8010	0x10	RW	[29]	[11]	0	2047	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InjectBitAddress	0x8	0	11	11	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InitilizationCount	UInt12	0x8020	0x20	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InitilizationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.ObservationCount	UInt12	0x8024	0x24	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.ObservationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.CorrectionCount	UInt12	0x8028	0x28	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.CorrectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.ClassificationCount	UInt12	0x802c	0x2c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.ClassificationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InjectionCount	UInt12	0x8030	0x30	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InjectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.IdleCount	UInt12	0x8034	0x34	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.IdleCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.EssentialCount	UInt12	0x8038	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.EssentialCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.UncorrectableCount	UInt12	0x803c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.UncorrectableCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[2].Sem.InjectStrobe	UInt1	0x800c	0xc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].Sem.InjectStrobe	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ChanCount	UInt4	0x100000	0x0	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ChanCount	0x4	0	4	4	0	Supported channels|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.RstPll	UInt1	0x100004	0x4	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel PLL reset|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ResetFsm	UInt1	0x100004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel FSM reset|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.CntRst	UInt1	0x100004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.RstPll	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	Bool	0x100010	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedB	Bool	0x100010	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedC	Bool	0x100010	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedCntA	UInt8	0x100010	0x10	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedCntB	UInt8	0x100010	0x10	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedCntC	UInt8	0x100010	0x10	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ShiftCountA	UInt3	0x100014	0x14	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ShiftCountB	UInt3	0x100014	0x14	RO	[8]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ShiftCountC	UInt3	0x100014	0x14	RO	[16]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.DelayA	UInt5	0x100018	0x18	RO	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel A|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.DelayB	UInt5	0x100018	0x18	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel B|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.DelayC	UInt5	0x100018	0x18	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel C|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ClkInFreq[0]	UInt32	0x10001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ClkInFreq[0]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ClkInFreq[1]	UInt32	0x100020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ClkInFreq[1]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ClkInFreq[2]	UInt32	0x100024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ClkInFreq[2]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ClinkClkFreq[0]	UInt32	0x100028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ClinkClkFreq[0]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ClinkClkFreq[1]	UInt32	0x10002c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ClinkClkFreq[1]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.ClinkClkFreq[2]	UInt32	0x100030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.ClinkClkFreq[2]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].LinkMode	UInt3	0x100100	0x0	RW	[0]	[3]	0	7	{0: 'Disable', 1: 'Base', 2: 'Medium', 3: 'Full', 4: 'Deca'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].LinkMode	0x4	0	3	3	0	\
Link mode control for camera link lanes:\
Disable: Nothing connected\
Base: Port Supported [A,B,C], # of chips = 1, # of connectors = 1\
Medium: Port Supported [A,B,C,D,E,F], # of chips = 2, # of connectors = 2\
Full: Port Supported [A,B,C,D,E,F,G,H], # of chips = 3, # of connectors = 3\
Deca: Refer to section /\"2.2.3 Camera Link 80 bit/\" CameraLink spec V2.0, page 16\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataMode	UInt4	0x100104	0x4	RW	[0]	[4]	0	15	{0: 'None', 1: '8Bit', 2: '10Bit', 3: '12Bit', 4: '14Bit', 5: '16Bit', 6: '24Bit', 7: '30Bit', 8: '36Bit'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataMode	0x4	0	4	4	0	Data mode|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].FrameMode	UInt2	0x100108	0x8	RW	[0]	[2]	0	3	{0: 'None', 1: 'Line', 2: 'Frame'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].FrameMode	0x4	0	2	2	0	\
None: Disables output\
Line: 1D camera\
Frame: 2D pixel array\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].TapCount	UInt4	0x10010c	0xc	RW	[0]	[4]	0	10	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].TapCount	0x4	0	4	4	0	# of video output taps on the Camera Link Interface (# of individual data value channels)|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataEn	Bool	0x100110	0x10	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Data enable.  When 0x0 causes reset on ClinkData's FSM module|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].Blowoff	Bool	0x100110	0x10	RW	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Blows off the outbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].CntRst	UInt1	0x100110	0x10	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].SerThrottle	UInt16	0x100110	0x10	RW	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DataEn	0x4	0	16	16	0	Throttles the UART Serial TX byte rate. Used when the camera cannot accept new bytes until the previous command processed|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].BaudRate	UInt24	0x100114	0x14	RW	[0]	[24]	0	16777215	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].BaudRate	0x4	0	24	24	0	Baud rate|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].SwControlValue	UInt4	0x100118	0x18	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].SwControlValue	0x4	0	4	4	0	Software camera control bit values|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].SwControlEn	UInt4	0x10011c	0x1c	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].SwControlEn	0x4	0	4	4	0	Software camera control bit enable mask for lane A|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].Running	Bool	0x100120	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].Running	0x4	0	1	1	0	Camera link lane running status|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].FrameCount	UInt32	0x100124	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].FrameCount	0x4	0	32	32	0	Frame counter|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DropCount	UInt32	0x100128	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].DropCount	0x4	0	32	32	0	Drop counter|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].FrameSize	UInt32	0x10012c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].FrameSize	0x4	0	32	32	0	Camera Image size|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].HSkip	UInt16	0x100130	0x30	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].HSkip	0x4	0	16	16	0	# of cycle to skip from the start of CLINK LineValid (LV)|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].HActive	UInt16	0x100134	0x34	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].HActive	0x4	0	16	16	0	# of active cycle after HSkip while CLINK LineValid (LV) is active|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].VSkip	UInt16	0x100138	0x38	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].VSkip	0x4	0	16	16	0	# of lines to skip from the start of CLINK FrameValid (FV)|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].VActive	UInt16	0x10013c	0x3c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Ch[0].VActive	0x4	0	16	16	0	# of active lines after VSkip while CLINK FrameValid (FV) is active|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[0]	UInt3	0x101020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[0]	UInt6	0x101020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[0]	UInt6	0x101020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[1]	UInt3	0x101028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[1]	UInt6	0x101028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[1]	UInt6	0x101028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[2]	UInt3	0x101030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[2]	UInt6	0x101030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[2]	UInt6	0x101030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[3]	UInt3	0x101038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[3]	UInt6	0x101038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[3]	UInt6	0x101038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[4]	UInt3	0x101040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[4]	UInt6	0x101040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[4]	UInt6	0x101040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[5]	UInt3	0x101018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[5]	UInt6	0x101018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[5]	UInt6	0x101018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[6]	UInt3	0x101048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME[6]	UInt6	0x101048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME[6]	UInt6	0x101048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_FB	UInt3	0x101050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME_FB	UInt6	0x101050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME_FB	UInt6	0x101050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	UInt3	0x101024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_EN[0]	UInt1	0x101024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_WF_R[0]	UInt1	0x101024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[0]	UInt2	0x101024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[0]	UInt1	0x101024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[0]	UInt1	0x101024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[0]	UInt6	0x101024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[1]	UInt2	0x10102c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[1]	UInt1	0x10102c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[1]	UInt1	0x10102c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[1]	UInt6	0x10102c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[2]	UInt2	0x101034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[2]	UInt1	0x101034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[2]	UInt1	0x101034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[2]	UInt6	0x101034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[3]	UInt2	0x10103c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[3]	UInt1	0x10103c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[3]	UInt1	0x10103c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[3]	UInt6	0x10103c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[4]	UInt2	0x101044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[4]	UInt1	0x101044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[4]	UInt1	0x101044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[4]	UInt6	0x101044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10101c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT[0]	UInt1	0x10101c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[5]	UInt2	0x10101c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[5]	UInt1	0x10101c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[5]	UInt1	0x10101c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[5]	UInt6	0x10101c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10104c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT_FB	UInt1	0x10104c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX[6]	UInt2	0x10104c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE[6]	UInt1	0x10104c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT[6]	UInt1	0x10104c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME[6]	UInt6	0x10104c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	UInt3	0x101054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_EN_FB	UInt1	0x101054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_WF_R_FB	UInt1	0x101054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].MX_FB	UInt2	0x101054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE_FB	UInt1	0x101054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT_FB	UInt1	0x101054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].DELAY_TIME_FB	UInt6	0x101054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE_DIV	UInt1	0x101058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].NO_COUNT_DIV	UInt1	0x101058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].HIGH_TIME_DIV	UInt6	0x101058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LOW_TIME_DIV	UInt6	0x101058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LockReg[0]	UInt16	0x101060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LockReg[1]	UInt16	0x101064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LockReg[2]	UInt16	0x101068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FiltReg[0]	UInt16	0x101138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FiltReg[1]	UInt16	0x10113c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].POWER	UInt16	0x1010a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[0].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[0]	UInt3	0x102020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[0]	UInt6	0x102020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[0]	UInt6	0x102020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[1]	UInt3	0x102028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[1]	UInt6	0x102028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[1]	UInt6	0x102028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[2]	UInt3	0x102030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[2]	UInt6	0x102030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[2]	UInt6	0x102030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[3]	UInt3	0x102038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[3]	UInt6	0x102038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[3]	UInt6	0x102038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[4]	UInt3	0x102040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[4]	UInt6	0x102040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[4]	UInt6	0x102040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[5]	UInt3	0x102018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[5]	UInt6	0x102018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[5]	UInt6	0x102018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[6]	UInt3	0x102048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME[6]	UInt6	0x102048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME[6]	UInt6	0x102048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_FB	UInt3	0x102050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME_FB	UInt6	0x102050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME_FB	UInt6	0x102050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	UInt3	0x102024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_EN[0]	UInt1	0x102024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_WF_R[0]	UInt1	0x102024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[0]	UInt2	0x102024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[0]	UInt1	0x102024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[0]	UInt1	0x102024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[0]	UInt6	0x102024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[1]	UInt2	0x10202c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[1]	UInt1	0x10202c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[1]	UInt1	0x10202c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[1]	UInt6	0x10202c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[2]	UInt2	0x102034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[2]	UInt1	0x102034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[2]	UInt1	0x102034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[2]	UInt6	0x102034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[3]	UInt2	0x10203c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[3]	UInt1	0x10203c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[3]	UInt1	0x10203c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[3]	UInt6	0x10203c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[4]	UInt2	0x102044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[4]	UInt1	0x102044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[4]	UInt1	0x102044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[4]	UInt6	0x102044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10201c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT[0]	UInt1	0x10201c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[5]	UInt2	0x10201c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[5]	UInt1	0x10201c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[5]	UInt1	0x10201c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[5]	UInt6	0x10201c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10204c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT_FB	UInt1	0x10204c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX[6]	UInt2	0x10204c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE[6]	UInt1	0x10204c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT[6]	UInt1	0x10204c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME[6]	UInt6	0x10204c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	UInt3	0x102054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_EN_FB	UInt1	0x102054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_WF_R_FB	UInt1	0x102054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].MX_FB	UInt2	0x102054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE_FB	UInt1	0x102054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT_FB	UInt1	0x102054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].DELAY_TIME_FB	UInt6	0x102054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE_DIV	UInt1	0x102058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].NO_COUNT_DIV	UInt1	0x102058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].HIGH_TIME_DIV	UInt6	0x102058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LOW_TIME_DIV	UInt6	0x102058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LockReg[0]	UInt16	0x102060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LockReg[1]	UInt16	0x102064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LockReg[2]	UInt16	0x102068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FiltReg[0]	UInt16	0x102138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FiltReg[1]	UInt16	0x10213c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].POWER	UInt16	0x1020a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[1].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[0]	UInt3	0x103020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[0]	UInt6	0x103020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[0]	UInt6	0x103020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[1]	UInt3	0x103028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[1]	UInt6	0x103028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[1]	UInt6	0x103028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[2]	UInt3	0x103030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[2]	UInt6	0x103030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[2]	UInt6	0x103030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[3]	UInt3	0x103038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[3]	UInt6	0x103038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[3]	UInt6	0x103038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[4]	UInt3	0x103040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[4]	UInt6	0x103040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[4]	UInt6	0x103040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[5]	UInt3	0x103018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[5]	UInt6	0x103018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[5]	UInt6	0x103018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[6]	UInt3	0x103048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME[6]	UInt6	0x103048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME[6]	UInt6	0x103048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_FB	UInt3	0x103050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME_FB	UInt6	0x103050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME_FB	UInt6	0x103050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	UInt3	0x103024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_EN[0]	UInt1	0x103024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_WF_R[0]	UInt1	0x103024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[0]	UInt2	0x103024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[0]	UInt1	0x103024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[0]	UInt1	0x103024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[0]	UInt6	0x103024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[1]	UInt2	0x10302c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[1]	UInt1	0x10302c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[1]	UInt1	0x10302c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[1]	UInt6	0x10302c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[2]	UInt2	0x103034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[2]	UInt1	0x103034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[2]	UInt1	0x103034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[2]	UInt6	0x103034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[3]	UInt2	0x10303c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[3]	UInt1	0x10303c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[3]	UInt1	0x10303c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[3]	UInt6	0x10303c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[4]	UInt2	0x103044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[4]	UInt1	0x103044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[4]	UInt1	0x103044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[4]	UInt6	0x103044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10301c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT[0]	UInt1	0x10301c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[5]	UInt2	0x10301c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[5]	UInt1	0x10301c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[5]	UInt1	0x10301c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[5]	UInt6	0x10301c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10304c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT_FB	UInt1	0x10304c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX[6]	UInt2	0x10304c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE[6]	UInt1	0x10304c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT[6]	UInt1	0x10304c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME[6]	UInt6	0x10304c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	UInt3	0x103054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_EN_FB	UInt1	0x103054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_WF_R_FB	UInt1	0x103054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].MX_FB	UInt2	0x103054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE_FB	UInt1	0x103054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT_FB	UInt1	0x103054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].DELAY_TIME_FB	UInt6	0x103054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE_DIV	UInt1	0x103058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].NO_COUNT_DIV	UInt1	0x103058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].HIGH_TIME_DIV	UInt6	0x103058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LOW_TIME_DIV	UInt6	0x103058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LockReg[0]	UInt16	0x103060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LockReg[1]	UInt16	0x103064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LockReg[2]	UInt16	0x103068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FiltReg[0]	UInt16	0x103138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FiltReg[1]	UInt16	0x10313c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].POWER	UInt16	0x1030a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].ClinkTop.Pll[2].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].EnableTrig	Bool	0x200000	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].EnableTrig	0x4	0	1	1	0	Enable triggering|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].InvCC	Bool	0x200004	0x4	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].InvCC	0x4	0	1	1	0	Inverter the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigMap	UInt1	0x200008	0x8	RW	[0]	[1]	0	1	{0: 'ChA', 1: 'ChB'}	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigMap	0x4	0	1	1	0	0x0: map trigger to channel A, 0x1: map trigger to channel B|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigPulseWidthRaw	UInt32	0x20000c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigPulseWidthRaw	0x4	0	32	32	0	Sets the trigger pulse width on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigMask	UInt4	0x200010	0x10	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigMask	0x4	0	4	4	0	Sets the trigger mask on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigRate	UInt32	0x2000f4	0xf4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigRate	0x4	0	32	32	0	Trigger Rate|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigCnt	UInt32	0x2000f8	0xf8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].TrigCnt	0x4	0	32	32	0	Trigger Counter|"\
     "ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].CntRst	UInt1	0x2000fc	0xfc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].TrigCtrl[0].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	Bool	0x400020	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	1	1	0	RX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxPhyReady	Bool	0x400020	0x20	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	1	1	0	TX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxLocalLinkReady	Bool	0x400020	0x20	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Local Link Ready|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemLinkReady	Bool	0x400020	0x20	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Remote Link Ready|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLinkReady	Bool	0x400020	0x20	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Tx Link Ready|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxLinkPolarity	UInt2	0x400020	0x20	RO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	2	2	0	Rx Link Polarity|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemPause	UInt4	0x400020	0x20	RO	[12]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	4	4	0	RX Remote Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocPause	UInt4	0x400020	0x20	RO	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Tx Local Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow	UInt4	0x400020	0x20	RO	[20]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received remote overflow flag|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow	UInt4	0x400020	0x20	RO	[24]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received local overflow flag|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemLinkData	UInt8	0x400024	0x24	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemLinkData	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxCellErrorCount	UInt8	0x400028	0x28	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxCellErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxLinkDownCount	UInt8	0x40002c	0x2c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxLinkDownCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxLinkErrorCount	UInt8	0x400030	0x30	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxLinkErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow0Count	UInt8	0x400034	0x34	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow1Count	UInt8	0x400038	0x38	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow2Count	UInt8	0x40003c	0x3c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow3Count	UInt8	0x400040	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxFrameErrorCount	UInt8	0x400044	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxFrameCount	UInt8	0x400048	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow0Count	UInt8	0x40004c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow1Count	UInt8	0x400050	0x50	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow2Count	UInt8	0x400054	0x54	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow3Count	UInt8	0x400058	0x58	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxLocOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxFrameErrorCount	UInt8	0x40005c	0x5c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxFrameCount	UInt8	0x400060	0x60	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemLinkReadyCount	UInt8	0x400080	0x80	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxRemLinkReadyCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].LastTxOpCode	UInt8	0x400070	0x70	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].LastTxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].LastRxOpCode	UInt8	0x400074	0x74	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].LastRxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxOpCodeCount	UInt8	0x400078	0x78	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxOpCodeCount	UInt8	0x40007c	0x7c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].CountReset	UInt1	0x400000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].CountReset	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].ResetRx	UInt1	0x400004	0x4	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].ResetTx	UInt1	0x400004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].ResetGt	UInt1	0x400004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxClkFreqRaw	UInt32	0x400064	0x64	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].RxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxClkFreqRaw	UInt32	0x400068	0x68	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[0].TxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.CountReset	UInt1	0x410000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.WRITE_EN_G	Bool	0x410004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.NUM_VC_G	UInt8	0x410004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.SkipInterval	UInt32	0x410008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	UInt3	0x41000c	0xc	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.FlowControlDisable	Bool	0x41000c	0xc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.TxDisable	Bool	0x41000c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.ResetTx	Bool	0x41000c	0xc	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.ResetRx	Bool	0x41000c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.TxDiffCtrl	UInt5	0x41000c	0xc	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.TxPreCursor	UInt5	0x41000c	0xc	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.TxPostCursor	UInt5	0x41000c	0xc	RO	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[0]	UInt16	0x410400	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[1]	UInt16	0x410404	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[2]	UInt16	0x410408	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[3]	UInt16	0x41040c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[0]	UInt8	0x410440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[1]	UInt8	0x410444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[2]	UInt8	0x410448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[3]	UInt8	0x41044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.FrameCnt	UInt16	0x410500	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.OpCodeEnCnt	UInt16	0x410504	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActiveCnt	UInt8	0x410600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxInitCnt	UInt8	0x410604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.GearboxAlignedCnt	UInt8	0x410608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkReadyCnt	UInt8	0x41060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemRxLinkReadyCnt	UInt8	0x410610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.FrameErrorCnt	UInt8	0x410614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkDownCnt	UInt8	0x410618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkErrorCnt	UInt8	0x41061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.EbOverflowCnt	UInt8	0x410620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellErrorCnt	UInt8	0x410624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellSofErrorCnt	UInt8	0x410628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellSeqErrorCnt	UInt8	0x41062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellVersionErrorCnt	UInt8	0x410630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellCrcModeErrorCnt	UInt8	0x410634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellCrcErrorCnt	UInt8	0x410638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellEofeErrorCnt	UInt8	0x41063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActive	Bool	0x410710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.GearboxAligned	Bool	0x410710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.LinkReady	Bool	0x410710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemRxLinkReady	Bool	0x410710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemLinkData	UInt48	0x410720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOpCodeData	UInt48	0x410730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemRxPause	UInt4	0x410740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RxClockFreqRaw	UInt32	0x410750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[0]	UInt16	0x410800	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[1]	UInt16	0x410804	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[2]	UInt16	0x410808	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[3]	UInt16	0x41080c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[0]	UInt8	0x410840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[1]	UInt8	0x410844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[2]	UInt8	0x410848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[3]	UInt8	0x41084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.FrameCnt	UInt16	0x410900	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.OpCodeEnCnt	UInt16	0x410904	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.phyTxActiveCnt	UInt8	0x410a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LinkReadyCnt	UInt8	0x410a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.FrameErrorCnt	UInt8	0x410a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.phyTxActive	Bool	0x410b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LinkReady	Bool	0x410b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocLinkData	UInt48	0x410b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOpCodeData	UInt48	0x410b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocTxPause	UInt4	0x410b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.TxClockFreqRaw	UInt32	0x410b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[2]	ClinkDevRoot.ClinkFeb[2].PgpMon[1].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaVersion	UInt32	0x0	0x0	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaVersion	0x4	0	32	32	0	FPGA Firmware Version Number|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.ScratchPad	UInt32	0x4	0x4	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.ScratchPad	0x4	0	32	32	0	Register to test reads and writes|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.UpTimeCnt	UInt32	0x8	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.UpTimeCnt	0x4	0	32	32	0	Number of seconds since last reset|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaReloadHalt	UInt1	0x100	0x100	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaReloadHalt	0x4	0	1	1	0	Used to halt automatic reloads via AxiVersion|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaReload	UInt1	0x104	0x104	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaReload	0x4	0	1	1	0	Optional Reload the FPGA from the attached PROM|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaReloadAddress	UInt32	0x108	0x108	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.FpgaReloadAddress	0x4	0	32	32	0	Reload start address|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.UserReset	UInt1	0x10c	0x10c	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.UserReset	0x4	0	1	1	0	Optional User Reset|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.FdSerial	UInt64	0x300	0x300	RO	[0]	[64]	0	18446744073709551615	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.FdSerial	0x8	0	64	64	0	Board ID value read from DS2411 chip|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.DeviceId	UInt32	0x500	0x500	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.DeviceId	0x4	0	32	32	0	Device Identification  (configued by generic)|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.GitHash	UInt160	0x600	0x600	RO	[0]	[160]	0	1461501637330902918203684832716283019655932542975	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.GitHash	0x14	0	160	160	0	GIT SHA-1 Hash|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.DeviceDna	UInt128	0x700	0x700	RO	[0]	[128]	0	340282366920938463463374607431768211455	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.DeviceDna	0x10	0	128	128	0	Xilinx Device DNA value burned into FPGA|"\
     "ClinkDevRoot.ClinkFeb[3].AxiVersion.BuildStamp	String(256)	0x800	0x800	RO	[0]	[2048]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].AxiVersion.BuildStamp	0x100	0	2048	2048	0	Firmware Build String|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalTemperatureHighByte	UInt8	0x2000	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalTemperatureHighByte	0x4	0	8	8	0	Local temperature high byte (LTHB)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteTemperatureHighByte	UInt8	0x2004	0x4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteTemperatureHighByte	0x4	0	8	8	0	Remote temperature high byte (RTHB)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	Bool	0x2008	0x8	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, A/D is busy converting. POR state = n/a.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Lhigh	Bool	0x2008	0x8	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates local HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Llow	Bool	0x2008	0x8	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Rhigh	Bool	0x2008	0x8	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode HIGH temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Rlow	Bool	0x2008	0x8	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode LOW temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Open	Bool	0x2008	0x8	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode disconnect. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Rcrit	Bool	0x2008	0x8	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a remote diode critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.Lcrit	Bool	0x2008	0x8	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.Busy	0x4	0	1	1	0	When logic 1, indicates a local critical temperature alarm. POR state = 0.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskRead	Bool	0x200c	0xc	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskWrite	Bool	0x2024	0x24	WO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The ALERT interrupt is enabled when this bit is LOW. The\
ALERT interrupt is disabled (masked) when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.StopRead	Bool	0x200c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.StopWrite	Bool	0x2024	0x24	WO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
Standby or run mode control. Running mode is enabled when\
this bit is LOW. The SA56004X is in standby mode when this\
bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RcritMaskRead	Bool	0x200c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RcritMaskWrite	Bool	0x2024	0x24	WO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a remote temperature\
that exceeds the remote T_CRIT setpoint when this bit is LOW.\
The T_CRIT output will not be activated under this condition\
when this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LcritMaskRead	Bool	0x200c	0xc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LcritMaskWrite	Bool	0x2024	0x24	WO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
The T_CRIT output will be activated by a local temperature that\
exceeds the local T_CRIT setpoint when this bit is LOW. The\
T_CRIT output will not be activated under this condition when\
this bit is HIGH.\
|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.FaultQueueRead	Bool	0x200c	0xc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskRead	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.FaultQueueWrite	Bool	0x2024	0x24	WO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMaskWrite	0x4	0	1	1	0	\
A single remote temperature measurement outside the HIGH,\
LOW or T_CRIT setpoints will trigger an outside limit condition\
resulting in setting the status bits and associated output pins\
when this bit is LOW. Three consecutive measurements outside of\
one of these setpoints are required to trigger an outside of\
limit condition when this bit is HIGH.|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.ConvertRateRead	UInt4	0x2010	0x10	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.ConvertRateRead	0x4	0	4	4	0	conversion rate read access (CR)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.ConvertRateWrite	UInt4	0x2028	0x28	WO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.ConvertRateWrite	0x4	0	4	4	0	conversion rate write access (CR)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalHighSetpointRead	UInt8	0x2014	0x14	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalHighSetpointRead	0x4	0	8	8	0	local high setpoint read access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalHighSetpointWrite	UInt8	0x202c	0x2c	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalHighSetpointWrite	0x4	0	8	8	0	local high setpoint write access (LHS)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalLowSetpointRead	UInt8	0x2018	0x18	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalLowSetpointRead	0x4	0	8	8	0	Local Low setpoint read access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalLowSetpointWrite	UInt8	0x2030	0x30	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalLowSetpointWrite	0x4	0	8	8	0	Local Low setpoint write access (LLS)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteHighSetpointHighByteRead	UInt8	0x201c	0x1c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteHighSetpointHighByteRead	0x4	0	8	8	0	Remote high setpoint high byte read access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteHighSetpointHighByteWrite	UInt8	0x2034	0x34	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteHighSetpointHighByteWrite	0x4	0	8	8	0	Remote high setpoint high byte write access (RHSHB)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteLowSetpointHighByteRead	UInt8	0x2020	0x20	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteLowSetpointHighByteRead	0x4	0	8	8	0	Remote Low setpoint high byte read access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteLowSetpointHighByteWrite	UInt8	0x2038	0x38	WO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteLowSetpointHighByteWrite	0x4	0	8	8	0	Remote Low setpoint high byte write access (RLSHB)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteTcritSetpoint	Int8	0x2064	0x64	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.RemoteTcritSetpoint	0x4	0	8	8	0	Remote T_CRIT setpoint (RCS)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalTcritSetpoint	Int8	0x2080	0x80	RW	[0]	[8]	-127	127	None	False	True	3	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.LocalTcritSetpoint	0x4	0	8	8	0	Local T_CRIT setpoint (LCS)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.TcritHysteresis	UInt5	0x2084	0x84	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.TcritHysteresis	0x4	0	5	5	0	T_CRIT hysteresis (TH)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.OneShot	UInt1	0x203c	0x3c	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.OneShot	0x4	0	1	1	0	writing register initiates a one-shot conversion (One Shot)|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMode	Bool	0x22fc	0x2fc	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.AlertMode	0x4	0	1	1	0	Alert mode (AM))|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.ManufacturerId	UInt8	0x23f8	0x3f8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.ManufacturerId	0x4	0	8	8	0	Read manufacturers ID (RMID) should be 0xA1|"\
     "ClinkDevRoot.ClinkFeb[3].BoardTemp.DieRevision	UInt8	0x23fc	0x3fc	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardTemp.DieRevision	0x4	0	8	8	0	Read stepping or die revision (RDR) should be 0x00|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.SenseMsb	UInt8	0x2400	0x0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.SenseMsb	0x4	0	8	8	0	Sense MSB Data|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.SenseLsb	UInt4	0x2404	0x4	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.SenseLsb	0x4	0	4	4	0	Sense LSB Data|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.VinMsb	UInt8	0x2408	0x8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.VinMsb	0x4	0	8	8	0	Vin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.VinLsb	UInt4	0x240c	0xc	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.VinLsb	0x4	0	4	4	0	Vin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.AdinMsb	UInt8	0x2410	0x10	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.AdinMsb	0x4	0	8	8	0	Adin MSB Data|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.AdinLsb	UInt4	0x2414	0x14	RO	[4]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.AdinLsb	0x4	0	4	4	0	Adin LSB Data|"\
     "ClinkDevRoot.ClinkFeb[3].BoardPwr.Control	UInt8	0x2418	0x18	RW	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].BoardPwr.Control	0x4	0	8	8	0	Controls ADC Operation Mode and Test Mode|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawTemperature	UInt12	0x3200	0x200	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawTemperature	0x4	0	12	12	0	\
The result of the on-chip temperature sensor measurement is\
stored in this location. The data is MSB justified in the\
16-bit register (Read Only).  The 12 MSBs correspond to the\
temperature sensor transfer function shown in Figure 2-8,\
page 31 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxTemperature	UInt12	0x3280	0x280	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxTemperature	0x4	0	12	12	0	\
Maximum temperature measurement recorded since\
power-up or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMinTemperature	UInt12	0x3290	0x290	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMinTemperature	0x4	0	12	12	0	\
Minimum temperature measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Over Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.UserTemperatureAlarm	Bool	0x32fc	0x2fc	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	Temperature Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawVccInt	UInt12	0x3204	0x204	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawVccInt	0x4	0	12	12	0	\
The result of the on-chip VccInt supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxVccInt	UInt12	0x3284	0x284	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxVccInt	0x4	0	12	12	0	\
Maximum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMinVccInt	UInt12	0x3294	0x294	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMinVccInt	0x4	0	12	12	0	\
Minimum VccInt measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.VccIntAlarm	Bool	0x32fc	0x2fc	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccInt Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawVccAux	UInt12	0x3208	0x208	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawVccAux	0x4	0	12	12	0	\
The result of the on-chip VccAux supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxVccAux	UInt12	0x3288	0x288	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxVccAux	0x4	0	12	12	0	\
Maximum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMinVccAux	UInt12	0x3298	0x298	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMinVccAux	0x4	0	12	12	0	\
Minimum VccAux measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.VccAuxAlarm	Bool	0x32fc	0x2fc	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccAux Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawVccBram	UInt12	0x3218	0x218	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawVccBram	0x4	0	12	12	0	\
The result of the on-chip VccBram supply monitor measurement\
is stored at this location. The data is MSB justified in the\
16-bit register (Read Only). The 12 MSBs correspond to the\
supply sensor transfer function shown in Figure 2-9,\
page 32 of UG480 (v1.2)|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxVccBram	UInt12	0x328c	0x28c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMaxVccBram	0x4	0	12	12	0	\
Maximum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawMinVccBram	UInt12	0x329c	0x29c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawMinVccBram	0x4	0	12	12	0	\
Minimum VccBram measurement recorded since power-up\
or the last AxiXadc reset (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.VccBramAlarm	Bool	0x32fc	0x2fc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	VccBram Alarm Tripped|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawVin	UInt12	0x320c	0x20c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawVin	0x4	0	12	12	0	\
The result of a conversion on the dedicated analog input\
channel is stored in this register. The data is MSB justified\
in the 16-bit register (Read Only). The 12 MSBs correspond to the\
transfer function shown in Figure 2-5, page 29 or\
Figure 2-6, page 29 of UG480 (v1.2) depending on analog input mode\
settings.|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawVrefp	UInt12	0x3210	0x210	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawVrefp	0x4	0	12	12	0	\
The result of a conversion on the reference input VrefP is\
stored in this register. The 12 MSBs correspond to the ADC\
transfer function shown in Figure 2-9  of UG480 (v1.2). The data is MSB\
justified in the 16-bit register (Read Only). The supply sensor is used\
when measuring VrefP.|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawVrefn	UInt12	0x3214	0x214	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawVrefn	0x4	0	12	12	0	\
The result of a conversion on the reference input VREFN is\
stored in this register (Read Only). This channel is measured in bipolar\
mode with a 2's complement output coding as shown in\
Figure 2-2, page 25. By measuring in bipolar mode, small\
positive and negative at: offset around 0V (VrefN) can be\
measured. The supply sensor is also used to measure\
VrefN, thus 1 LSB = 3V/4096. The data is MSB justified in\
the 16-bit register.|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.SupplyOffsetA	UInt12	0x3220	0x220	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.SupplyOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the supply sensor offset\
using ADC A is stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.AdcOffsetA	UInt12	0x3224	0x224	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.AdcOffsetA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A offset is stored at\
this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.AdcGainA	UInt12	0x3228	0x228	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.AdcGainA	0x4	0	12	12	0	\
The calibration coefficient for the ADC A gain error is\
stored at this location (Read Only).|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.JTGD	Bool	0x32fc	0x2fc	RO	[11]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface for more information.|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.JTGR	Bool	0x32fc	0x2fc	RO	[10]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
A logic 1 indicates that the JTAG_AxiXadc BitGen option has\
been used to disable all JTAG access. See DRP JTAG Interface\
for more information.|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.REF	UInt1	0x32fc	0x2fc	RO	[9]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.OverTemperatureAlarm	0x4	0	1	1	0	\
When this bit is a logic 1, the ADC is using the internal\
voltage reference. When this bit is a logic 0, the external\
reference is being used.|"\
     "ClinkDevRoot.ClinkFeb[3].Xadc.RawOT_Limit	UInt12	0x334c	0x34c	RO	[4]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Xadc.RawOT_Limit	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Identifier	UInt8	0x5000	0x0	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'GBIC', 2: 'Motherboard', 3: 'SFP', 4: 'XBI', 5: 'XENPAK', 6: 'XFP', 7: 'XFF', 8: 'XFP-E', 9: 'XPAK', 10: 'X2', 11: 'DWDM-SFP', 12: 'QSFP', 13: 'QSFP+', 14: 'CXP', 15: 'HD-4X', 16: 'HD-8X', 17: 'QSFP28', 18: 'CXP28', 19: 'CDFP-Style1/2', 20: 'HD-4X-Fanout', 21: 'HD-8X-Fanout', 22: 'CDFP-Style3', 23: 'microQSFP', 24: 'QSFP-DD', 25: 'OSFP', 26: 'SFP-DD', 27: 'DSFP', 28: 'MiniLinkx4', 29: 'MiniLinkx8', 30: 'QSFP+'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Identifier	0x4	0	8	8	0	Type of serial transceiver|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Connector	UInt8	0x5008	0x8	RO	[0]	[8]	0	255	{0: 'Unspecified', 1: 'SC', 2: 'Fibre Channel Style 1 copper connector', 3: 'Fibre Channel Style 2 copper connector', 4: 'BNC/TNC', 5: 'Fibre Channel coaxial headers', 6: 'Fiber Jack', 7: 'LC', 8: 'MT-RJ', 9: 'MU', 10: 'SG', 11: 'Optical pigtail', 12: 'MPO 1x12', 13: 'MPO 2x16', 32: 'HSSDC II', 33: 'Copper Pigtail', 34: 'RJ45', 35: 'No separable connector', 36: 'MXC 2x16', 37: 'CS optical connector', 38: 'SN', 39: 'MPO 2x12', 40: 'MPO 1x16'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Connector	0x4	0	8	8	0	Code for connector type|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[0]	String(1)	0x5050	0x50	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[0]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[1]	String(1)	0x5054	0x54	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[1]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[2]	String(1)	0x5058	0x58	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[2]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[3]	String(1)	0x505c	0x5c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[3]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[4]	String(1)	0x5060	0x60	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[4]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[5]	String(1)	0x5064	0x64	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[5]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[6]	String(1)	0x5068	0x68	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[6]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[7]	String(1)	0x506c	0x6c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[7]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[8]	String(1)	0x5070	0x70	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[8]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[9]	String(1)	0x5074	0x74	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[9]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[10]	String(1)	0x5078	0x78	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[10]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[11]	String(1)	0x507c	0x7c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[11]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[12]	String(1)	0x5080	0x80	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[12]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[13]	String(1)	0x5084	0x84	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[13]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[14]	String(1)	0x5088	0x88	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[14]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[15]	String(1)	0x508c	0x8c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorNameRaw[15]	0x4	0	8	8	0	SFP vendor name (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[0]	String(1)	0x50a0	0xa0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[0]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[1]	String(1)	0x50a4	0xa4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[1]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[2]	String(1)	0x50a8	0xa8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[2]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[3]	String(1)	0x50ac	0xac	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[3]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[4]	String(1)	0x50b0	0xb0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[4]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[5]	String(1)	0x50b4	0xb4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[5]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[6]	String(1)	0x50b8	0xb8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[6]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[7]	String(1)	0x50bc	0xbc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[7]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[8]	String(1)	0x50c0	0xc0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[8]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[9]	String(1)	0x50c4	0xc4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[9]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[10]	String(1)	0x50c8	0xc8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[10]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[11]	String(1)	0x50cc	0xcc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[11]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[12]	String(1)	0x50d0	0xd0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[12]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[13]	String(1)	0x50d4	0xd4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[13]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[14]	String(1)	0x50d8	0xd8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[14]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[15]	String(1)	0x50dc	0xdc	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorPnRaw[15]	0x4	0	8	8	0	Part number provided by SFP vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[0]	String(1)	0x50e0	0xe0	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[0]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[1]	String(1)	0x50e4	0xe4	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[1]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[2]	String(1)	0x50e8	0xe8	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[2]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[3]	String(1)	0x50ec	0xec	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorRevRaw[3]	0x4	0	8	8	0	Revision level for part number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[0]	String(1)	0x5110	0x110	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[0]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[1]	String(1)	0x5114	0x114	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[1]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[2]	String(1)	0x5118	0x118	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[2]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[3]	String(1)	0x511c	0x11c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[3]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[4]	String(1)	0x5120	0x120	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[4]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[5]	String(1)	0x5124	0x124	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[5]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[6]	String(1)	0x5128	0x128	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[6]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[7]	String(1)	0x512c	0x12c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[7]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[8]	String(1)	0x5130	0x130	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[8]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[9]	String(1)	0x5134	0x134	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[9]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[10]	String(1)	0x5138	0x138	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[10]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[11]	String(1)	0x513c	0x13c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[11]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[12]	String(1)	0x5140	0x140	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[12]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[13]	String(1)	0x5144	0x144	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[13]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[14]	String(1)	0x5148	0x148	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[14]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[15]	String(1)	0x514c	0x14c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].VendorSnRaw[15]	0x4	0	8	8	0	Serial number provided by vendor (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[0]	String(1)	0x5150	0x150	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[0]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[1]	String(1)	0x5154	0x154	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[1]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[2]	String(1)	0x5158	0x158	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[2]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[3]	String(1)	0x515c	0x15c	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[3]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[4]	String(1)	0x5160	0x160	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[4]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[5]	String(1)	0x5164	0x164	RO	[0]	[8]	None	None	None	False	True	5	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].DateCode[5]	0x4	0	8	8	0	Vendor's manufacturing date code (ASCII)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[0]	UInt8	0x5580	0x580	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[0]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[1]	UInt8	0x5584	0x584	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[1]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[2]	UInt8	0x5588	0x588	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[2]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[3]	UInt8	0x558c	0x58c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[3]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[4]	UInt8	0x5590	0x590	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[4]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[5]	UInt8	0x5594	0x594	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[5]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[6]	UInt8	0x5598	0x598	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[6]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[7]	UInt8	0x559c	0x59c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[7]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[8]	UInt8	0x55a0	0x5a0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[8]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[9]	UInt8	0x55a4	0x5a4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[9]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[10]	UInt8	0x55a8	0x5a8	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[10]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[11]	UInt8	0x55ac	0x5ac	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[11]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[12]	UInt8	0x55b0	0x5b0	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[12]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[13]	UInt8	0x55b4	0x5b4	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sfp[1].Diagnostics[13]	0x4	0	8	8	0	Diagnostic Monitor Data (internal or external)|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.SemStatus	UInt7	0x8000	0x0	RO	[0]	[7]	0	127	{0: 'Initialization', 1: 'Undef_0x1', 2: 'Observation', 4: 'Correction', 8: 'Classification', 16: 'Injection', 32: 'Idle', 95: 'Halt'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.SemStatus	0x4	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.Essential	Bool	0x8000	0x0	RO	[7]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.Uncorrectable	Bool	0x8000	0x0	RO	[8]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.SemStatus	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.HeartbeatCount	UInt32	0x8004	0x4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.HeartbeatCount	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InjectBitAddress	UInt5	0x8010	0x10	RW	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InjectBitAddress	0x8	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InjectWordAddress	UInt7	0x8010	0x10	RW	[5]	[7]	0	127	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InjectBitAddress	0x8	0	7	7	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InjectLinearFrame	UInt17	0x8010	0x10	RW	[12]	[17]	0	131071	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InjectBitAddress	0x8	0	17	17	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InjectAddrHigh	UInt11	0x8010	0x10	RW	[29]	[11]	0	2047	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InjectBitAddress	0x8	0	11	11	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InitilizationCount	UInt12	0x8020	0x20	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InitilizationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.ObservationCount	UInt12	0x8024	0x24	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.ObservationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.CorrectionCount	UInt12	0x8028	0x28	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.CorrectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.ClassificationCount	UInt12	0x802c	0x2c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.ClassificationCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InjectionCount	UInt12	0x8030	0x30	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InjectionCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.IdleCount	UInt12	0x8034	0x34	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.IdleCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.EssentialCount	UInt12	0x8038	0x38	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.EssentialCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.UncorrectableCount	UInt12	0x803c	0x3c	RO	[0]	[12]	0	4095	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.UncorrectableCount	0x4	0	12	12	0	|"\
     "ClinkDevRoot.ClinkFeb[3].Sem.InjectStrobe	UInt1	0x800c	0xc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].Sem.InjectStrobe	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ChanCount	UInt4	0x100000	0x0	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ChanCount	0x4	0	4	4	0	Supported channels|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.RstPll	UInt1	0x100004	0x4	RW	[0]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel PLL reset|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ResetFsm	UInt1	0x100004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.RstPll	0x4	0	1	1	0	Camera link channel FSM reset|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.CntRst	UInt1	0x100004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.RstPll	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	Bool	0x100010	0x10	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedB	Bool	0x100010	0x10	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedC	Bool	0x100010	0x10	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	0x4	0	1	1	0	Camera link channel locked status|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedCntA	UInt8	0x100010	0x10	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedCntB	UInt8	0x100010	0x10	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedCntC	UInt8	0x100010	0x10	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.LinkLockedA	0x4	0	8	8	0	Camera link channel locked status counter|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ShiftCountA	UInt3	0x100014	0x14	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ShiftCountB	UInt3	0x100014	0x14	RO	[8]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ShiftCountC	UInt3	0x100014	0x14	RO	[16]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ShiftCountA	0x4	0	3	3	0	Shift count for channel|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.DelayA	UInt5	0x100018	0x18	RO	[0]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel A|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.DelayB	UInt5	0x100018	0x18	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel B|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.DelayC	UInt5	0x100018	0x18	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.DelayA	0x4	0	5	5	0	Precision delay for channel C|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ClkInFreq[0]	UInt32	0x10001c	0x1c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ClkInFreq[0]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ClkInFreq[1]	UInt32	0x100020	0x20	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ClkInFreq[1]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ClkInFreq[2]	UInt32	0x100024	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ClkInFreq[2]	0x4	0	32	32	0	Clock Input Freq|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ClinkClkFreq[0]	UInt32	0x100028	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ClinkClkFreq[0]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ClinkClkFreq[1]	UInt32	0x10002c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ClinkClkFreq[1]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.ClinkClkFreq[2]	UInt32	0x100030	0x30	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.ClinkClkFreq[2]	0x4	0	32	32	0	CameraLink Clock Freq|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].LinkMode	UInt3	0x100100	0x0	RW	[0]	[3]	0	7	{0: 'Disable', 1: 'Base', 2: 'Medium', 3: 'Full', 4: 'Deca'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].LinkMode	0x4	0	3	3	0	\
Link mode control for camera link lanes:\
Disable: Nothing connected\
Base: Port Supported [A,B,C], # of chips = 1, # of connectors = 1\
Medium: Port Supported [A,B,C,D,E,F], # of chips = 2, # of connectors = 2\
Full: Port Supported [A,B,C,D,E,F,G,H], # of chips = 3, # of connectors = 3\
Deca: Refer to section /\"2.2.3 Camera Link 80 bit/\" CameraLink spec V2.0, page 16\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataMode	UInt4	0x100104	0x4	RW	[0]	[4]	0	15	{0: 'None', 1: '8Bit', 2: '10Bit', 3: '12Bit', 4: '14Bit', 5: '16Bit', 6: '24Bit', 7: '30Bit', 8: '36Bit'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataMode	0x4	0	4	4	0	Data mode|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].FrameMode	UInt2	0x100108	0x8	RW	[0]	[2]	0	3	{0: 'None', 1: 'Line', 2: 'Frame'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].FrameMode	0x4	0	2	2	0	\
None: Disables output\
Line: 1D camera\
Frame: 2D pixel array\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].TapCount	UInt4	0x10010c	0xc	RW	[0]	[4]	0	10	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].TapCount	0x4	0	4	4	0	# of video output taps on the Camera Link Interface (# of individual data value channels)|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataEn	Bool	0x100110	0x10	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Data enable.  When 0x0 causes reset on ClinkData's FSM module|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].Blowoff	Bool	0x100110	0x10	RW	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	Blows off the outbound AXIS stream (for debugging)|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].CntRst	UInt1	0x100110	0x10	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataEn	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].SerThrottle	UInt16	0x100110	0x10	RW	[16]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DataEn	0x4	0	16	16	0	Throttles the UART Serial TX byte rate. Used when the camera cannot accept new bytes until the previous command processed|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].BaudRate	UInt24	0x100114	0x14	RW	[0]	[24]	0	16777215	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].BaudRate	0x4	0	24	24	0	Baud rate|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].SwControlValue	UInt4	0x100118	0x18	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].SwControlValue	0x4	0	4	4	0	Software camera control bit values|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].SwControlEn	UInt4	0x10011c	0x1c	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].SwControlEn	0x4	0	4	4	0	Software camera control bit enable mask for lane A|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].Running	Bool	0x100120	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].Running	0x4	0	1	1	0	Camera link lane running status|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].FrameCount	UInt32	0x100124	0x24	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].FrameCount	0x4	0	32	32	0	Frame counter|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DropCount	UInt32	0x100128	0x28	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].DropCount	0x4	0	32	32	0	Drop counter|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].FrameSize	UInt32	0x10012c	0x2c	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].FrameSize	0x4	0	32	32	0	Camera Image size|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].HSkip	UInt16	0x100130	0x30	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].HSkip	0x4	0	16	16	0	# of cycle to skip from the start of CLINK LineValid (LV)|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].HActive	UInt16	0x100134	0x34	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].HActive	0x4	0	16	16	0	# of active cycle after HSkip while CLINK LineValid (LV) is active|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].VSkip	UInt16	0x100138	0x38	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].VSkip	0x4	0	16	16	0	# of lines to skip from the start of CLINK FrameValid (FV)|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].VActive	UInt16	0x10013c	0x3c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Ch[0].VActive	0x4	0	16	16	0	# of active lines after VSkip while CLINK FrameValid (FV) is active|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[0]	UInt3	0x101020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[0]	UInt6	0x101020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[0]	UInt6	0x101020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[1]	UInt3	0x101028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[1]	UInt6	0x101028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[1]	UInt6	0x101028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[2]	UInt3	0x101030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[2]	UInt6	0x101030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[2]	UInt6	0x101030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[3]	UInt3	0x101038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[3]	UInt6	0x101038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[3]	UInt6	0x101038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[4]	UInt3	0x101040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[4]	UInt6	0x101040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[4]	UInt6	0x101040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[5]	UInt3	0x101018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[5]	UInt6	0x101018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[5]	UInt6	0x101018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[6]	UInt3	0x101048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME[6]	UInt6	0x101048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME[6]	UInt6	0x101048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_FB	UInt3	0x101050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME_FB	UInt6	0x101050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME_FB	UInt6	0x101050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	UInt3	0x101024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_EN[0]	UInt1	0x101024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_WF_R[0]	UInt1	0x101024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[0]	UInt2	0x101024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[0]	UInt1	0x101024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[0]	UInt1	0x101024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[0]	UInt6	0x101024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[1]	UInt2	0x10102c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[1]	UInt1	0x10102c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[1]	UInt1	0x10102c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[1]	UInt6	0x10102c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[2]	UInt2	0x101034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[2]	UInt1	0x101034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[2]	UInt1	0x101034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[2]	UInt6	0x101034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[3]	UInt2	0x10103c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[3]	UInt1	0x10103c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[3]	UInt1	0x10103c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[3]	UInt6	0x10103c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[4]	UInt2	0x101044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[4]	UInt1	0x101044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[4]	UInt1	0x101044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[4]	UInt6	0x101044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10101c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT[0]	UInt1	0x10101c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[5]	UInt2	0x10101c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[5]	UInt1	0x10101c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[5]	UInt1	0x10101c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[5]	UInt6	0x10101c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10104c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_WF_F_CLKOUT_FB	UInt1	0x10104c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX[6]	UInt2	0x10104c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE[6]	UInt1	0x10104c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT[6]	UInt1	0x10104c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME[6]	UInt6	0x10104c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	UInt3	0x101054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_EN_FB	UInt1	0x101054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_WF_R_FB	UInt1	0x101054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].MX_FB	UInt2	0x101054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE_FB	UInt1	0x101054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT_FB	UInt1	0x101054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].DELAY_TIME_FB	UInt6	0x101054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE_DIV	UInt1	0x101058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].NO_COUNT_DIV	UInt1	0x101058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].HIGH_TIME_DIV	UInt6	0x101058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LOW_TIME_DIV	UInt6	0x101058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LockReg[0]	UInt16	0x101060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LockReg[1]	UInt16	0x101064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LockReg[2]	UInt16	0x101068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FiltReg[0]	UInt16	0x101138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FiltReg[1]	UInt16	0x10113c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].POWER	UInt16	0x1010a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[0].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[0]	UInt3	0x102020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[0]	UInt6	0x102020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[0]	UInt6	0x102020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[1]	UInt3	0x102028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[1]	UInt6	0x102028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[1]	UInt6	0x102028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[2]	UInt3	0x102030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[2]	UInt6	0x102030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[2]	UInt6	0x102030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[3]	UInt3	0x102038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[3]	UInt6	0x102038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[3]	UInt6	0x102038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[4]	UInt3	0x102040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[4]	UInt6	0x102040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[4]	UInt6	0x102040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[5]	UInt3	0x102018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[5]	UInt6	0x102018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[5]	UInt6	0x102018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[6]	UInt3	0x102048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME[6]	UInt6	0x102048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME[6]	UInt6	0x102048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_FB	UInt3	0x102050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME_FB	UInt6	0x102050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME_FB	UInt6	0x102050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	UInt3	0x102024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_EN[0]	UInt1	0x102024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_WF_R[0]	UInt1	0x102024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[0]	UInt2	0x102024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[0]	UInt1	0x102024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[0]	UInt1	0x102024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[0]	UInt6	0x102024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[1]	UInt2	0x10202c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[1]	UInt1	0x10202c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[1]	UInt1	0x10202c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[1]	UInt6	0x10202c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[2]	UInt2	0x102034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[2]	UInt1	0x102034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[2]	UInt1	0x102034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[2]	UInt6	0x102034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[3]	UInt2	0x10203c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[3]	UInt1	0x10203c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[3]	UInt1	0x10203c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[3]	UInt6	0x10203c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[4]	UInt2	0x102044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[4]	UInt1	0x102044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[4]	UInt1	0x102044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[4]	UInt6	0x102044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10201c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT[0]	UInt1	0x10201c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[5]	UInt2	0x10201c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[5]	UInt1	0x10201c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[5]	UInt1	0x10201c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[5]	UInt6	0x10201c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10204c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_WF_F_CLKOUT_FB	UInt1	0x10204c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX[6]	UInt2	0x10204c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE[6]	UInt1	0x10204c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT[6]	UInt1	0x10204c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME[6]	UInt6	0x10204c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	UInt3	0x102054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_EN_FB	UInt1	0x102054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_WF_R_FB	UInt1	0x102054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].MX_FB	UInt2	0x102054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE_FB	UInt1	0x102054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT_FB	UInt1	0x102054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].DELAY_TIME_FB	UInt6	0x102054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE_DIV	UInt1	0x102058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].NO_COUNT_DIV	UInt1	0x102058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].HIGH_TIME_DIV	UInt6	0x102058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LOW_TIME_DIV	UInt6	0x102058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LockReg[0]	UInt16	0x102060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LockReg[1]	UInt16	0x102064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LockReg[2]	UInt16	0x102068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FiltReg[0]	UInt16	0x102138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FiltReg[1]	UInt16	0x10213c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].POWER	UInt16	0x1020a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[1].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[0]	UInt3	0x103020	0x20	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[0]	UInt6	0x103020	0x20	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[0]	UInt6	0x103020	0x20	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[0]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[1]	UInt3	0x103028	0x28	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[1]	UInt6	0x103028	0x28	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[1]	UInt6	0x103028	0x28	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[1]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[2]	UInt3	0x103030	0x30	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[2]	UInt6	0x103030	0x30	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[2]	UInt6	0x103030	0x30	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[2]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[3]	UInt3	0x103038	0x38	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[3]	UInt6	0x103038	0x38	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[3]	UInt6	0x103038	0x38	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[3]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[4]	UInt3	0x103040	0x40	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[4]	UInt6	0x103040	0x40	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[4]	UInt6	0x103040	0x40	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[4]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[5]	UInt3	0x103018	0x18	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[5]	UInt6	0x103018	0x18	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[5]	UInt6	0x103018	0x18	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[5]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[6]	UInt3	0x103048	0x48	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME[6]	UInt6	0x103048	0x48	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME[6]	UInt6	0x103048	0x48	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX[6]	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_FB	UInt3	0x103050	0x50	RW	[13]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	3	3	0	\
Chooses an initial phase offset for the clock output, the\
resolution is equal to 1/8 VCO period. Not available in\
UltraScale PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME_FB	UInt6	0x103050	0x50	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME_FB	UInt6	0x103050	0x50	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_FB	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	UInt3	0x103024	0x24	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	3	3	0	\
Fractional divide counter setting for CLKOUT0. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_EN[0]	UInt1	0x103024	0x24	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKOUT0.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_WF_R[0]	UInt1	0x103024	0x24	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[0]	UInt2	0x103024	0x24	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[0]	UInt1	0x103024	0x24	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[0]	UInt1	0x103024	0x24	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[0]	UInt6	0x103024	0x24	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[1]	UInt2	0x10302c	0x2c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[1]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[1]	UInt1	0x10302c	0x2c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[1]	UInt1	0x10302c	0x2c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[1]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[1]	UInt6	0x10302c	0x2c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[1]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[2]	UInt2	0x103034	0x34	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[2]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[2]	UInt1	0x103034	0x34	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[2]	UInt1	0x103034	0x34	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[2]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[2]	UInt6	0x103034	0x34	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[2]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[3]	UInt2	0x10303c	0x3c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[3]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[3]	UInt1	0x10303c	0x3c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[3]	UInt1	0x10303c	0x3c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[3]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[3]	UInt6	0x10303c	0x3c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[3]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[4]	UInt2	0x103044	0x44	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[4]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[4]	UInt1	0x103044	0x44	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[4]	UInt1	0x103044	0x44	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[4]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[4]	UInt6	0x103044	0x44	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[4]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	UInt3	0x10301c	0x1c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	3	3	0	\
CLKOUT0 data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT[0]	UInt1	0x10301c	0x1c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Adjusts CLKOUT0 falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[5]	UInt2	0x10301c	0x1c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[5]	UInt1	0x10301c	0x1c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[5]	UInt1	0x10301c	0x1c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[5]	UInt6	0x10301c	0x1c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT[0]	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	UInt3	0x10304c	0x4c	RW	[11]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	3	3	0	\
CLKFBOUT data required when using fractional\
counter. Chooses an initial phase offset for the\
falling edge of the clock output. The resolution is\
equal to 1/8 VCO period. Not available in UltraScale\
PLLE3 and UltraScale+ PLLE4.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_WF_F_CLKOUT_FB	UInt1	0x10304c	0x4c	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT falling edge for improved duty\
cycle accuracy when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX[6]	UInt2	0x10304c	0x4c	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE[6]	UInt1	0x10304c	0x4c	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT[6]	UInt1	0x10304c	0x4c	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME[6]	UInt6	0x10304c	0x4c	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].PHASE_MUX_F_CLKOUT_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	UInt3	0x103054	0x54	RW	[12]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	3	3	0	\
Fractional divide counter setting for CLKFBOUT. Equivalent to\
additional divide of 1/8.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_EN_FB	UInt1	0x103054	0x54	RW	[11]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Enable fractional divider circuitry for CLKFBOUT.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_WF_R_FB	UInt1	0x103054	0x54	RW	[10]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Adjusts CLKFBOUT rising edge for improved duty cycle accuracy\
when using fractional counter.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].MX_FB	UInt2	0x103054	0x54	WO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	2	2	0	\
Must be set to 2'b00.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE_FB	UInt1	0x103054	0x54	RW	[7]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT_FB	UInt1	0x103054	0x54	RW	[6]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].DELAY_TIME_FB	UInt6	0x103054	0x54	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FRAC_FB	0x4	0	6	6	0	\
Phase offset with a resolution equal to the VCO period.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE_DIV	UInt1	0x103058	0x58	RW	[13]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Chooses the edge that the High Time counter transitions on.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].NO_COUNT_DIV	UInt1	0x103058	0x58	RW	[12]	[1]	0	1	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE_DIV	0x4	0	1	1	0	\
Bypasses the High and Low Time counters.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].HIGH_TIME_DIV	UInt6	0x103058	0x58	RW	[6]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains High.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LOW_TIME_DIV	UInt6	0x103058	0x58	RW	[0]	[6]	0	63	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].EDGE_DIV	0x4	0	6	6	0	\
Sets the amount of time in VCO cycles that the clock output\
remains Low.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LockReg[0]	UInt16	0x103060	0x60	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LockReg[0]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LockReg[1]	UInt16	0x103064	0x64	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LockReg[1]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LockReg[2]	UInt16	0x103068	0x68	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].LockReg[2]	0x4	0	16	16	0	\
Three additional LOCK configuration registers must also be updated based on how the MMCM\
is programmed. These values are automatically setup by the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FiltReg[0]	UInt16	0x103138	0x138	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FiltReg[0]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FiltReg[1]	UInt16	0x10313c	0x13c	RW	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].FiltReg[1]	0x4	0	16	16	0	\
This bit is pulled from the lookup table provided in the reference design.\
|"\
     "ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].POWER	UInt16	0x1030a0	0xa0	WO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].ClinkTop.Pll[2].POWER	0x4	0	16	16	0	\
These bits must all be set High when performing DRP.\
|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].EnableTrig	Bool	0x200000	0x0	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].EnableTrig	0x4	0	1	1	0	Enable triggering|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].InvCC	Bool	0x200004	0x4	RW	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].InvCC	0x4	0	1	1	0	Inverter the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigMap	UInt1	0x200008	0x8	RW	[0]	[1]	0	1	{0: 'ChA', 1: 'ChB'}	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigMap	0x4	0	1	1	0	0x0: map trigger to channel A, 0x1: map trigger to channel B|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigPulseWidthRaw	UInt32	0x20000c	0xc	RW	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigPulseWidthRaw	0x4	0	32	32	0	Sets the trigger pulse width on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigMask	UInt4	0x200010	0x10	RW	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigMask	0x4	0	4	4	0	Sets the trigger mask on the 4-bit camCtrl bus|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigRate	UInt32	0x2000f4	0xf4	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigRate	0x4	0	32	32	0	Trigger Rate|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigCnt	UInt32	0x2000f8	0xf8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].TrigCnt	0x4	0	32	32	0	Trigger Counter|"\
     "ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].CntRst	UInt1	0x2000fc	0xfc	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].TrigCtrl[0].CntRst	0x4	0	1	1	0	Counter Reset|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	Bool	0x400020	0x20	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	1	1	0	RX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxPhyReady	Bool	0x400020	0x20	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	1	1	0	TX Phy is Ready|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxLocalLinkReady	Bool	0x400020	0x20	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Local Link Ready|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemLinkReady	Bool	0x400020	0x20	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Rx Remote Link Ready|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLinkReady	Bool	0x400020	0x20	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	1	1	0	Tx Link Ready|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxLinkPolarity	UInt2	0x400020	0x20	RO	[8]	[2]	0	3	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	2	2	0	Rx Link Polarity|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemPause	UInt4	0x400020	0x20	RO	[12]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	4	4	0	RX Remote Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocPause	UInt4	0x400020	0x20	RO	[16]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Tx Local Pause Asserted|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow	UInt4	0x400020	0x20	RO	[20]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received remote overflow flag|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow	UInt4	0x400020	0x20	RO	[24]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxPhyReady	0x4	0	4	4	0	Received local overflow flag|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemLinkData	UInt8	0x400024	0x24	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemLinkData	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxCellErrorCount	UInt8	0x400028	0x28	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxCellErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxLinkDownCount	UInt8	0x40002c	0x2c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxLinkDownCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxLinkErrorCount	UInt8	0x400030	0x30	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxLinkErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow0Count	UInt8	0x400034	0x34	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow1Count	UInt8	0x400038	0x38	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow2Count	UInt8	0x40003c	0x3c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow3Count	UInt8	0x400040	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxFrameErrorCount	UInt8	0x400044	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxFrameCount	UInt8	0x400048	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow0Count	UInt8	0x40004c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow0Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow1Count	UInt8	0x400050	0x50	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow1Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow2Count	UInt8	0x400054	0x54	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow2Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow3Count	UInt8	0x400058	0x58	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxLocOverflow3Count	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxFrameErrorCount	UInt8	0x40005c	0x5c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxFrameErrorCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxFrameCount	UInt8	0x400060	0x60	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxFrameCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemLinkReadyCount	UInt8	0x400080	0x80	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxRemLinkReadyCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].LastTxOpCode	UInt8	0x400070	0x70	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].LastTxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].LastRxOpCode	UInt8	0x400074	0x74	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].LastRxOpCode	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxOpCodeCount	UInt8	0x400078	0x78	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxOpCodeCount	UInt8	0x40007c	0x7c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxOpCodeCount	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].CountReset	UInt1	0x400000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].CountReset	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].ResetRx	UInt1	0x400004	0x4	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].ResetTx	UInt1	0x400004	0x4	WO	[1]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].ResetGt	UInt1	0x400004	0x4	WO	[2]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].ResetRx	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxClkFreqRaw	UInt32	0x400064	0x64	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].RxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxClkFreqRaw	UInt32	0x400068	0x68	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[0].TxClkFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.CountReset	UInt1	0x410000	0x0	WO	[0]	[1]	0	1	None	False	False	2	False	False	0	False	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.CountReset	0x4	0	1	1	0	Status Counter Reset Command|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.WRITE_EN_G	Bool	0x410004	0x4	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.NUM_VC_G	UInt8	0x410004	0x4	RO	[8]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.STATUS_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[16]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.ERROR_CNT_WIDTH_G	UInt8	0x410004	0x4	RO	[24]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.WRITE_EN_G	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.SkipInterval	UInt32	0x410008	0x8	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.SkipInterval	0x4	0	32	32	0	TX skip k-code interval|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	UInt3	0x41000c	0xc	RO	[0]	[3]	0	7	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	3	3	0	GT Loopback Mode|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.FlowControlDisable	Bool	0x41000c	0xc	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.TxDisable	Bool	0x41000c	0xc	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.ResetTx	Bool	0x41000c	0xc	RO	[5]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.ResetRx	Bool	0x41000c	0xc	RO	[6]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.TxDiffCtrl	UInt5	0x41000c	0xc	RO	[8]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.TxPreCursor	UInt5	0x41000c	0xc	RO	[16]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.TxPostCursor	UInt5	0x41000c	0xc	RO	[24]	[5]	0	31	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].Ctrl.Loopback	0x4	0	5	5	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[0]	UInt16	0x410400	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[1]	UInt16	0x410404	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[2]	UInt16	0x410408	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[3]	UInt16	0x41040c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[0]	UInt8	0x410440	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[1]	UInt8	0x410444	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[2]	UInt8	0x410448	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[3]	UInt8	0x41044c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.FrameCnt	UInt16	0x410500	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.OpCodeEnCnt	UInt16	0x410504	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActiveCnt	UInt8	0x410600	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxInitCnt	UInt8	0x410604	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxInitCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.GearboxAlignedCnt	UInt8	0x410608	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.GearboxAlignedCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkReadyCnt	UInt8	0x41060c	0x20c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemRxLinkReadyCnt	UInt8	0x410610	0x210	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemRxLinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.FrameErrorCnt	UInt8	0x410614	0x214	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkDownCnt	UInt8	0x410618	0x218	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkDownCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkErrorCnt	UInt8	0x41061c	0x21c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.EbOverflowCnt	UInt8	0x410620	0x220	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.EbOverflowCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellErrorCnt	UInt8	0x410624	0x224	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellSofErrorCnt	UInt8	0x410628	0x228	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellSofErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellSeqErrorCnt	UInt8	0x41062c	0x22c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellSeqErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellVersionErrorCnt	UInt8	0x410630	0x230	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellVersionErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellCrcModeErrorCnt	UInt8	0x410634	0x234	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellCrcModeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellCrcErrorCnt	UInt8	0x410638	0x238	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellCrcErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellEofeErrorCnt	UInt8	0x41063c	0x23c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.CellEofeErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActive	Bool	0x410710	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.GearboxAligned	Bool	0x410710	0x310	RO	[2]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.LinkReady	Bool	0x410710	0x310	RO	[3]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemRxLinkReady	Bool	0x410710	0x310	RO	[4]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.PhyRxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemLinkData	UInt48	0x410720	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOpCodeData	UInt48	0x410730	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemRxPause	UInt4	0x410740	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RemRxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RxClockFreqRaw	UInt32	0x410750	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].RxStatus.RxClockFreqRaw	0x4	0	32	32	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[0]	UInt16	0x410800	0x0	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[0]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[1]	UInt16	0x410804	0x4	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[1]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[2]	UInt16	0x410808	0x8	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[2]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[3]	UInt16	0x41080c	0xc	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocPauseCnt[3]	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[0]	UInt8	0x410840	0x40	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[0]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[1]	UInt8	0x410844	0x44	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[1]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[2]	UInt8	0x410848	0x48	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[2]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[3]	UInt8	0x41084c	0x4c	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOverflowCnt[3]	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.FrameCnt	UInt16	0x410900	0x100	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.FrameCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.OpCodeEnCnt	UInt16	0x410904	0x104	RO	[0]	[16]	0	65535	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.OpCodeEnCnt	0x4	0	16	16	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.phyTxActiveCnt	UInt8	0x410a00	0x200	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.phyTxActiveCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LinkReadyCnt	UInt8	0x410a04	0x204	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LinkReadyCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.FrameErrorCnt	UInt8	0x410a08	0x208	RO	[0]	[8]	0	255	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.FrameErrorCnt	0x4	0	8	8	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.phyTxActive	Bool	0x410b10	0x310	RO	[0]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LinkReady	Bool	0x410b10	0x310	RO	[1]	[1]	0	1	{False: 'False', True: 'True'}	False	True	4	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.phyTxActive	0x4	0	1	1	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocLinkData	UInt48	0x410b20	0x320	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocLinkData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOpCodeData	UInt48	0x410b30	0x330	RO	[0]	[48]	0	281474976710655	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocOpCodeData	0x8	0	48	48	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocTxPause	UInt4	0x410b40	0x340	RO	[0]	[4]	0	15	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.LocTxPause	0x4	0	4	4	0	|"\
     "ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.TxClockFreqRaw	UInt32	0x410b50	0x350	RO	[0]	[32]	0	4294967295	None	False	True	2	False	False	0	True	True	SRPv3[3]	ClinkDevRoot.ClinkFeb[3].PgpMon[1].TxStatus.TxClockFreqRaw	0x4	0	32	32	0	|"\

#endif
