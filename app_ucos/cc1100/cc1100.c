#include "cc1100_regs.h"

const struct TI_CCxxx0_CONFIG g_ti_ccxxx0_315[] = {
// Product = CC1100
// Crystal accuracy = 40 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 540.000000 kHz
// Deviation = 0.000000
// Return state:  Return to RX state upon leaving either TX or RX
// Datarate = 250.000000 kbps
// Modulation = (7) MSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 315.000000 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = Sensitivity
// Sync mode = (3) 30/32 sync word bits detected
// Format of RX/TX data = (0) Normal mode, use FIFOs for RX and TX
// CRC operation = (1) CRC calculation in TX and CRC check in RX enabled
// Forward Error Correction = (0) FEC disabled
// Length configuration = (1) Variable length packets, packet length configured by the first received byte after sync word.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (1)  address check
// FIFO autoflush = 0
// Device address = 1
// GDO0 signal selection = ( 6) Asserts when sync word has been sent / received, and de-asserts at the end of the packet
// GDO2 signal selection = (11) Serial Clock
    
    {TI_CCxxx0_IOCFG2,   0x0B}, // GDO2 output pin config.
    {TI_CCxxx0_IOCFG0,   0x06}, // GDO0 output pin config.
    {TI_CCxxx0_PKTLEN,   0xFF}, // Packet length.
    {TI_CCxxx0_PKTCTRL1, 0x05}, // Packet automation control.
    {TI_CCxxx0_PKTCTRL0, 0x05}, // Packet automation control.
    {TI_CCxxx0_ADDR,     0x04}, // Device address.
    {TI_CCxxx0_CHANNR,   0x00}, // Channel number.
    {TI_CCxxx0_FSCTRL1,  0x0B}, // Freq synthesizer control.
    {TI_CCxxx0_FSCTRL0,  0x00}, // Freq synthesizer control.
    {TI_CCxxx0_FREQ2,    0x0C}, // Freq control word, high byte
    {TI_CCxxx0_FREQ1,    0x1D}, // Freq control word, mid byte.
    {TI_CCxxx0_FREQ0,    0x89}, // Freq control word, low byte.
    {TI_CCxxx0_MDMCFG4,  0x2D}, // Modem configuration.
    {TI_CCxxx0_MDMCFG3,  0x3B}, // Modem configuration.
    {TI_CCxxx0_MDMCFG2,  0x73}, // Modem configuration.
    {TI_CCxxx0_MDMCFG1,  0x22}, // Modem configuration.
    {TI_CCxxx0_MDMCFG0,  0xF8}, // Modem configuration.
    {TI_CCxxx0_DEVIATN,  0x00}, // Modem dev (when FSK mod en)
    {TI_CCxxx0_MCSM1 ,   0x3F}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_MCSM0 ,   0x18}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_FOCCFG,   0x1D}, // Freq Offset Compense. Config
    {TI_CCxxx0_BSCFG,    0x1C}, //  Bit synchronization config.
    {TI_CCxxx0_AGCCTRL2, 0xC7}, // AGC control.
    {TI_CCxxx0_AGCCTRL1, 0x00}, // AGC control.
    {TI_CCxxx0_AGCCTRL0, 0xB2}, // AGC control.
    {TI_CCxxx0_FREND1,   0xB6}, // Front end RX configuration.
    {TI_CCxxx0_FREND0,   0x10}, // Front end RX configuration.
    {TI_CCxxx0_FSCAL3,   0xEA}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL2,   0x0A}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL1,   0x00}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL0,   0x11}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSTEST,   0x59}, // Frequency synthesizer cal.
    {TI_CCxxx0_TEST2,    0x88}, // Various test settings.
    {TI_CCxxx0_TEST1,    0x31}, // Various test settings.
    {TI_CCxxx0_TEST0,    0x0B}, // Various test settings.
    {0xFF, 0xFF}
};

const struct TI_CCxxx0_CONFIG g_ti_ccxxx0_433[] = {
// Product = CC1100
// Crystal accuracy = 40 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 540.000000 kHz
// Deviation = 0.000000
// Return state:  Return to RX state upon leaving either TX or RX
// Datarate = 250.000000 kbps
// Modulation = (7) MSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 433.000000 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = Sensitivity
// Sync mode = (3) 30/32 sync word bits detected
// Format of RX/TX data = (0) Normal mode, use FIFOs for RX and TX
// CRC operation = (1) CRC calculation in TX and CRC check in RX enabled
// Forward Error Correction = (0) FEC disabled
// Length configuration = (1) Variable length packets, packet length configured by the first received byte after sync word.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = ( 6) Asserts when sync word has been sent / received, and de-asserts at the end of the packet
// GDO2 signal selection = (11) Serial Clock
    
    {TI_CCxxx0_IOCFG2,   0x0B}, // GDO2 output pin config.
    {TI_CCxxx0_IOCFG0,   0x06}, // GDO0 output pin config.
    {TI_CCxxx0_PKTLEN,   0xFF}, // Packet length.
    {TI_CCxxx0_PKTCTRL1, 0x05}, // Packet automation control.
    {TI_CCxxx0_PKTCTRL0, 0x05}, // Packet automation control.
    {TI_CCxxx0_ADDR,     0x01}, // Device address.
    {TI_CCxxx0_CHANNR,   0x00}, // Channel number.
    {TI_CCxxx0_FSCTRL1,  0x0B}, // Freq synthesizer control.
    {TI_CCxxx0_FSCTRL0,  0x00}, // Freq synthesizer control.
    {TI_CCxxx0_FREQ2,    0x10}, // Freq control word, high byte
    {TI_CCxxx0_FREQ1,    0xA7}, // Freq control word, mid byte.
    {TI_CCxxx0_FREQ0,    0x62}, // Freq control word, low byte.
    {TI_CCxxx0_MDMCFG4,  0x2D}, // Modem configuration.
    {TI_CCxxx0_MDMCFG3,  0x3B}, // Modem configuration.
    {TI_CCxxx0_MDMCFG2,  0x73}, // Modem configuration.
    {TI_CCxxx0_MDMCFG1,  0x22}, // Modem configuration.
    {TI_CCxxx0_MDMCFG0,  0xF8}, // Modem configuration.
    {TI_CCxxx0_DEVIATN,  0x00}, // Modem dev (when FSK mod en)
    {TI_CCxxx0_MCSM1 ,   0x3F}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_MCSM0 ,   0x18}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_FOCCFG,   0x1D}, // Freq Offset Compens. Config
    {TI_CCxxx0_BSCFG,    0x1C}, //  Bit synchronization config.
    {TI_CCxxx0_AGCCTRL2, 0xC7}, // AGC control.
    {TI_CCxxx0_AGCCTRL1, 0x00}, // AGC control.
    {TI_CCxxx0_AGCCTRL0, 0xB2}, // AGC control.
    {TI_CCxxx0_FREND1,   0xB6}, // Front end RX configuration.
    {TI_CCxxx0_FREND0,   0x10}, // Front end RX configuration.
    {TI_CCxxx0_FSCAL3,   0xEA}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL2,   0x0A}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL1,   0x00}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL0,   0x11}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSTEST,   0x59}, // Frequency synthesizer cal.
    {TI_CCxxx0_TEST2,    0x88}, // Various test settings.
    {TI_CCxxx0_TEST1,    0x31}, // Various test settings.
    {TI_CCxxx0_TEST0,    0x0B}, // Various test settings.
    {0xFF, 0xFF}
};

const struct TI_CCxxx0_CONFIG g_ti_ccxxx0_868[] = {
// Product = CC1100
// Crystal accuracy = 40 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 540.000000 kHz
// Deviation = 0.000000
// Return state:  Return to RX state upon leaving either TX or RX
// Datarate = 250.000000 kbps
// Modulation = (7) MSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 868.000000 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = Sensitivity
// Sync mode = (3) 30/32 sync word bits detected
// Format of RX/TX data = (0) Normal mode, use FIFOs for RX and TX
// CRC operation = (1) CRC calculation in TX and CRC check in RX enabled
// Forward Error Correction = (0) FEC disabled
// Length configuration = (1) Variable length packets, packet length configured by the first received byte after sync word.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = ( 6) Asserts when sync word has been sent / received, and de-asserts at the end of the packet
// GDO2 signal selection = (11) Serial Clock

    {TI_CCxxx0_IOCFG2,   0x0B}, // GDO2 output pin config.
    {TI_CCxxx0_IOCFG0,   0x06}, // GDO0 output pin config.
    {TI_CCxxx0_PKTLEN,   0xFF}, // Packet length.
    {TI_CCxxx0_PKTCTRL1, 0x05}, // Packet automation control.
    {TI_CCxxx0_PKTCTRL0, 0x05}, // Packet automation control.
    {TI_CCxxx0_ADDR,     0x02}, // Device address.
    {TI_CCxxx0_CHANNR,   0x00}, // Channel number.
    {TI_CCxxx0_FSCTRL1,  0x0A}, // Freq synthesizer control.
    {TI_CCxxx0_FSCTRL0,  0x00}, // Freq synthesizer control.
    {TI_CCxxx0_FREQ2,    0x21}, // Freq control word, high byte
    {TI_CCxxx0_FREQ1,    0x62}, // Freq control word, mid byte.
    {TI_CCxxx0_FREQ0,    0x76}, // Freq control word, low byte.
    {TI_CCxxx0_MDMCFG4,  0x2D}, // Modem configuration.
    {TI_CCxxx0_MDMCFG3,  0x3B}, // Modem configuration.
    {TI_CCxxx0_MDMCFG2,  0x73}, // Modem configuration.
    {TI_CCxxx0_MDMCFG1,  0x22}, // Modem configuration.
    {TI_CCxxx0_MDMCFG0,  0xF8}, // Modem configuration.
    {TI_CCxxx0_DEVIATN,  0x00}, // Modem dev (when FSK mod en)
    {TI_CCxxx0_MCSM1 ,   0x3F}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_MCSM0 ,   0x18}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_FOCCFG,   0x1D}, // Freq Offset Compens. Config
    {TI_CCxxx0_BSCFG,    0x1C}, //  Bit synchronization config.
    {TI_CCxxx0_AGCCTRL2, 0xC7}, // AGC control.
    {TI_CCxxx0_AGCCTRL1, 0x00}, // AGC control.
    {TI_CCxxx0_AGCCTRL0, 0xB2}, // AGC control.
    {TI_CCxxx0_FREND1,   0xB6}, // Front end RX configuration.
    {TI_CCxxx0_FREND0,   0x10}, // Front end RX configuration.
    {TI_CCxxx0_FSCAL3,   0xEA}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL2,   0x0A}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL1,   0x00}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL0,   0x11}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSTEST,   0x59}, // Frequency synthesizer cal.
    {TI_CCxxx0_TEST2,    0x88}, // Various test settings.
    {TI_CCxxx0_TEST1,    0x31}, // Various test settings.
    {TI_CCxxx0_TEST0,    0x0B}, // Various test settings.
    {0xFF, 0xFF}
};

const struct TI_CCxxx0_CONFIG g_ti_ccxxx0_915[] = {
// Product = CC1100
// Crystal accuracy = 40 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 540.000000 kHz
// Deviation = 0.000000
// Return state:  Return to RX state upon leaving either TX or RX
// Datarate = 250.000000 kbps
// Modulation = (7) MSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 915.000000 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = Sensitivity
// Sync mode = (3) 30/32 sync word bits detected
// Format of RX/TX data = (0) Normal mode, use FIFOs for RX and TX
// CRC operation = (1) CRC calculation in TX and CRC check in RX enabled
// Forward Error Correction = (0) FEC disabled
// Length configuration = (1) Variable length packets, packet length configured by the first received byte after sync word.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = ( 6) Asserts when sync word has been sent / received, and de-asserts at the end of the packet
// GDO2 signal selection = (11) Serial Clock

    {TI_CCxxx0_IOCFG2,   0x0B}, // GDO2 output pin config.
    {TI_CCxxx0_IOCFG0,   0x06}, // GDO0 output pin config.
    {TI_CCxxx0_PKTLEN,   0xFF}, // Packet length.
    {TI_CCxxx0_PKTCTRL1, 0x05}, // Packet automation control.
    {TI_CCxxx0_PKTCTRL0, 0x05}, // Packet automation control.
    {TI_CCxxx0_ADDR,     0x23}, // Device address.
    {TI_CCxxx0_CHANNR,   0x00}, // Channel number.
    {TI_CCxxx0_FSCTRL1,  0x0B}, // Freq synthesizer control.
    {TI_CCxxx0_FSCTRL0,  0x00}, // Freq synthesizer control.
    {TI_CCxxx0_FREQ2,    0x23}, // Freq control word, high byte
    {TI_CCxxx0_FREQ1,    0x31}, // Freq control word, mid byte.
    {TI_CCxxx0_FREQ0,    0x3B}, // Freq control word, low byte.
    {TI_CCxxx0_MDMCFG4,  0x2D}, // Modem configuration.
    {TI_CCxxx0_MDMCFG3,  0x3B}, // Modem configuration.
    {TI_CCxxx0_MDMCFG2,  0x73}, // Modem configuration.
    {TI_CCxxx0_MDMCFG1,  0x22}, // Modem configuration.
    {TI_CCxxx0_MDMCFG0,  0xF8}, // Modem configuration.
    {TI_CCxxx0_DEVIATN,  0x00}, // Modem dev (when FSK mod en)
    {TI_CCxxx0_MCSM1 ,   0x3F}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_MCSM0 ,   0x18}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_FOCCFG,   0x1D}, // Freq Offset Compens. Config
    {TI_CCxxx0_BSCFG,    0x1C}, //  Bit synchronization config.
    {TI_CCxxx0_AGCCTRL2, 0xC7}, // AGC control.
    {TI_CCxxx0_AGCCTRL1, 0x00}, // AGC control.
    {TI_CCxxx0_AGCCTRL0, 0xB2}, // AGC control.
    {TI_CCxxx0_FREND1,   0xB6}, // Front end RX configuration.
    {TI_CCxxx0_FREND0,   0x10}, // Front end RX configuration.
    {TI_CCxxx0_FSCAL3,   0xEA}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL2,   0x0A}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL1,   0x00}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL0,   0x11}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSTEST,   0x59}, // Frequency synthesizer cal.
    {TI_CCxxx0_TEST2,    0x88}, // Various test settings.
    {TI_CCxxx0_TEST1,    0x31}, // Various test settings.
    {TI_CCxxx0_TEST0,    0x0B}, // Various test settings.
    {0xFF, 0xFF}
};

const struct TI_CCxxx0_CONFIG g_ti_ccxxx0_2400[] = {
// Product = CC2500
// Crystal accuracy = 40 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 540.000000 kHz
// Deviation = 0.000000
// Return state:  Return to RX state upon leaving either TX or RX
// Datarate = 250.000000 kbps
// Modulation = (7) MSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 2433.000000 MHz
// Channel spacing = 199.950000 kHz
// Channel number = 0
// Optimization = Sensitivity
// Sync mode = (3) 30/32 sync word bits detected
// Format of RX/TX data = (0) Normal mode, use FIFOs for RX and TX
// CRC operation = (1) CRC calculation in TX and CRC check in RX enabled
// Forward Error Correction = (0) FEC disabled
// Length configuration = (1) Variable length packets, packet length configured by the first received byte after sync word.
// Packetlength = 255
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = ( 6) Asserts when sync word has been sent / received, and de-asserts at the end of the packet
// GDO2 signal selection = (11) Serial Clock

    {TI_CCxxx0_IOCFG2,   0x0B},  // GDO2 output pin config.
    {TI_CCxxx0_IOCFG0,   0x06},  // GDO0 output pin config.
    {TI_CCxxx0_PKTLEN,   0xFF},  // Packet length.
    {TI_CCxxx0_PKTCTRL1, 0x05},  // Packet automation control.
    {TI_CCxxx0_PKTCTRL0, 0x05},  // Packet automation control.
    {TI_CCxxx0_ADDR,     0x04},  // Device address.
    {TI_CCxxx0_CHANNR,   0x00}, // Channel number.
    {TI_CCxxx0_FSCTRL1,  0x07}, // Freq synthesizer control.
    {TI_CCxxx0_FSCTRL0,  0x00}, // Freq synthesizer control.
    {TI_CCxxx0_FREQ2,    0x5D}, // Freq control word, high byte
    {TI_CCxxx0_FREQ1,    0x93}, // Freq control word, mid byte.
    {TI_CCxxx0_FREQ0,    0xB1}, // Freq control word, low byte.
    {TI_CCxxx0_MDMCFG4,  0x2D}, // Modem configuration.
    {TI_CCxxx0_MDMCFG3,  0x3B}, // Modem configuration.
    {TI_CCxxx0_MDMCFG2,  0x73}, // Modem configuration.
    {TI_CCxxx0_MDMCFG1,  0x22}, // Modem configuration.
    {TI_CCxxx0_MDMCFG0,  0xF8}, // Modem configuration.
    {TI_CCxxx0_DEVIATN,  0x00}, // Modem dev (when FSK mod en)
    {TI_CCxxx0_MCSM1 ,   0x3F}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_MCSM0 ,   0x18}, //MainRadio Cntrl State Machine
    {TI_CCxxx0_FOCCFG,   0x1D}, // Freq Offset Compens. Config
    {TI_CCxxx0_BSCFG,    0x1C}, //  Bit synchronization config.
    {TI_CCxxx0_AGCCTRL2, 0xC7}, // AGC control.
    {TI_CCxxx0_AGCCTRL1, 0x00}, // AGC control.
    {TI_CCxxx0_AGCCTRL0, 0xB2}, // AGC control.
    {TI_CCxxx0_FREND1,   0xB6}, // Front end RX configuration.
    {TI_CCxxx0_FREND0,   0x10}, // Front end RX configuration.
    {TI_CCxxx0_FSCAL3,   0xEA}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL2,   0x0A}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL1,   0x00}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSCAL0,   0x11}, // Frequency synthesizer cal.
    {TI_CCxxx0_FSTEST,   0x59}, // Frequency synthesizer cal.
    {TI_CCxxx0_TEST2,    0x88}, // Various test settings.
    {TI_CCxxx0_TEST1,    0x31}, // Various test settings.
    {TI_CCxxx0_TEST0,    0x0B},  // Various test settings.
    {0xFF, 0xFF}
};

#include "cc1100.h"
#include <spidev.h>
int  cc1101_init(struct CC1101* ctx){
    int err = 0;
    uint8_t val; 
    int i = 0;
    // CS = 1
    val = 1;
    write(ctx->cs_fd, &val, 1);
    usleep_s(100*1000);
    // CS = 0
    val = 0;
    write(ctx->cs_fd, &val, 1);
    usleep_s(100*1000);
    // CS = 1
    val = 1;
    write(ctx->cs_fd, &val, 1);
    usleep_s(100*1000);
    // CS = 0
    val = 0;
    write(ctx->cs_fd, &val, 1);
    usleep_s(100*1000);
    
    // wait ready
    //
    
    // CS = 1
    val = 1;
    write(ctx->cs_fd, &val, 1);
    usleep_s(100*1000);
    
    while(g_ti_ccxxx0_915[i].reg != 0xFF){
        cc1101_write_reg(ctx, g_ti_ccxxx0_915[i].reg, g_ti_ccxxx0_915[i].value);
        i++;
    }
    i = 0;
    while(g_ti_ccxxx0_915[i].reg != 0xFF){
        if(cc1101_read_reg(ctx, g_ti_ccxxx0_915[i].reg) != g_ti_ccxxx0_915[i].value){
            err ++;
        }
        i++;
    }
    return err;
}
void cc1101_write_reg(struct CC1101* ctx, char reg, char val){
    uint8_t u8tx[2];
	struct spi_ioc_transfer xfer;

	u8tx[0] = 0;
	write(ctx->cs_fd, u8tx, 1);	// active cs
	xfer.tx_buf			= (unsigned int)u8tx;
	xfer.rx_buf 		= 0;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= 2;
	u8tx[0] = reg;
	u8tx[1] = val;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
	u8tx[0] = 1;
	write(ctx->cs_fd, u8tx, 1);	// deactive cs
}
void cc1101_write_data(struct CC1101* ctx, char* data, char count){
    uint8_t u8tx[1];
	struct spi_ioc_transfer xfer;

	u8tx[0] = 0;
	write(ctx->cs_fd, u8tx, 1);	// active cs
    
    u8tx[0] = TI_CCxxx0_TXFIFO | TI_CCxxx0_WRITE_BURST;
    xfer.tx_buf			= (unsigned int)u8tx;
	xfer.rx_buf 		= 0;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= 1;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
    
	xfer.tx_buf			= (unsigned int)data;
	xfer.rx_buf 		= 0;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= count;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
    
	u8tx[0] = 1;
	write(ctx->cs_fd, u8tx, 1);	// deactive cs
}
void cc1101_read_data(struct CC1101* ctx, char* data, char count){
    uint8_t u8tx[1];
	struct spi_ioc_transfer xfer;

	u8tx[0] = 0;
	write(ctx->cs_fd, u8tx, 1);	// active cs
    
    u8tx[0] = TI_CCxxx0_TXFIFO | TI_CCxxx0_READ_BURST;
    xfer.tx_buf			= (unsigned int)u8tx;
	xfer.rx_buf 		= 0;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= 1;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
    
	xfer.tx_buf			= 0;
	xfer.rx_buf 		= (unsigned int)data;;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= count;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
    
	u8tx[0] = 1;
	write(ctx->cs_fd, u8tx, 1);	// deactive cs
}
char cc1101_read_reg(struct CC1101* ctx, char reg){
    uint8_t ret = 0;
	uint8_t u8tx[2], u8rx[2];
	struct spi_ioc_transfer xfer;

	u8tx[0] = 0;
	write(ctx->cs_fd, u8tx, 1);	// active cs
	xfer.tx_buf			= (unsigned int)u8tx;
	xfer.rx_buf 		= (unsigned int)u8rx;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= 2;
	u8tx[0] 			= reg | TI_CCxxx0_READ_SINGLE;
	u8tx[1]				= 0;
	u8rx[1] 			= 0;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
	u8tx[0] = 1;
	write(ctx->cs_fd, u8tx, 1);	// deactive cs
	return u8rx[1];
}
char cc1101_read_status(struct CC1101* ctx, char reg){
    return cc1101_read_reg(ctx, reg | TI_CCxxx0_READ_BURST);
}
void cc1101_strobe(struct CC1101* ctx, char strobe){
    uint8_t u8tx[1];
	struct spi_ioc_transfer xfer;

	u8tx[0] = 0;
	write(ctx->cs_fd, u8tx, 1);	// active cs
	xfer.tx_buf			= (unsigned int)u8tx;
	xfer.rx_buf 		= 0;
	xfer.bits_per_word 	= 0;
	xfer.speed_hz 		= 0;
	xfer.len			= 1;
	u8tx[0] = strobe;
	ioctl(ctx->spi_fd, SPI_IOC_MESSAGE(1), (unsigned int)&xfer);
	u8tx[0] = 1;
	write(ctx->cs_fd, u8tx, 1);	// deactive cs
}
void cc1101_wait(struct CC1101* ctx, unsigned int timeout){
    
}

// end of file
