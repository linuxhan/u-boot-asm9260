#ifndef __REGISTER_H__
#define __REGISTER_H__

#define INT_ARM_COMMRX	0	
#define INT_ARM_COMMTX	1	
#define INT_RTC	2	
#define INT_GPIO0	3	
#define INT_GPIO1	4	
#define INT_GPIO2	5	
#define INT_GPIO3	6	
#define INT_GPIO4	7	
#define INT_USB0	8	
#define INT_USB1	9	
#define INT_USB0_DMA	10	
#define INT_USB1_DMA	11	
#define INT_MAC	12	
#define INT_MAC_PMT	13	
#define INT_NAND	14	
#define INT_UART0	15	
#define INT_UART1	16	
#define INT_UART2	17	
#define INT_UART3	18	
#define INT_UART4	19	
#define INT_UART5	20	
#define INT_UART6	21	
#define INT_UART7	22	
#define INT_UART8	23	
#define INT_UART9	24	
#define INT_I2S0	25	
#define INT_I2C0	26	
#define INT_I2C1	27	
#define INT_CAMIF	28	
#define INT_TIMER0	29	
#define INT_TIMER1	30	
#define INT_TIMER2	31	
#define INT_TIMER3	32	
#define INT_ADC0	33	
#define INT_DAC0	34	
#define INT_USB0_RESUME_HOSTDISCONNECT	35		
#define INT_USB0_VBUSVALID	36		
#define INT_USB1_RESUME_HOSTDISCONNECT	37		
#define INT_USB1_VBUSVALID	38		
#define INT_DMA0_CH0	39	
#define INT_DMA0_CH1	40	
#define INT_DMA0_CH2	41	
#define INT_DMA0_CH3	42	
#define INT_DMA0_CH4	43	
#define INT_DMA0_CH5	44	
#define INT_DMA0_CH6	45	
#define INT_DMA0_CH7	46	
#define INT_DMA1_CH0	47	
#define INT_DMA1_CH1	48	
#define INT_DMA1_CH2	49	
#define INT_DMA1_CH3	50	
#define INT_DMA1_CH4	51	
#define INT_DMA1_CH5	52	
#define INT_DMA1_CH6	53	
#define INT_DMA1_CH7	54	
#define INT_WATCHDOG	55	
#define INT_CAN0	56	
#define INT_CAN1	57	
#define INT_QEI	  	58	
#define INT_MCPWM	59	
#define INT_SPI0	60	
#define INT_SPI1	61	
#define INT_QUADSPI0	62	
#define INT_SSP0	63

/////////////////////////////////////////////////////////
// CAMERA
#define HW_DCMI_CR_ADDR         0x80080000
#define HW_DCMI_SR_ADDR         0x80080010
#define HW_DCMI_RIS_ADDR        0x80080020
#define HW_DCMI_IER_ADDR        0x80080030
#define HW_DCMI_MIS_ADDR        0x80080040
#define HW_DCMI_ICR_ADDR        0x80080050
#define HW_DCMI_ESCR_ADDR       0x80080060
#define HW_DCMI_ESUR_ADDR       0x80080070
#define HW_DCMI_CWSTRT_ADDR     0x80080080
#define HW_DCMI_CWSIZE_ADDR     0x80080090
#define HW_DCMI_DR_ADDR         0x800800A0

/////////////////////////////////////////////////////////
// NAND
#define  NAND_BASE_ADDR         0x80600000

#define  NAND_COMMAND           (NAND_BASE_ADDR+0x00)
#define  NAND_CONTROL           (NAND_BASE_ADDR+0x04)
#define  NAND_STATUS            (NAND_BASE_ADDR+0x08)
#define  NAND_INT_MASK          (NAND_BASE_ADDR+0x0c)
#define  NAND_INT_STATUS        (NAND_BASE_ADDR+0x10)
#define  NAND_ECC_CTRL          (NAND_BASE_ADDR+0x14)
#define  NAND_ECC_OFFSET        (NAND_BASE_ADDR+0x18)
#define  NAND_ADDR0_H           (NAND_BASE_ADDR+0x24)
#define  NAND_ADDR0_L           (NAND_BASE_ADDR+0x1C)
#define  NAND_ADDR1_H           (NAND_BASE_ADDR+0x28)
#define  NAND_ADDR1_L           (NAND_BASE_ADDR+0x20)
#define  NAND_SPARE_SIZE        (NAND_BASE_ADDR+0x30)
#define  NAND_PROTECT           (NAND_BASE_ADDR+0x38)
#define  NAND_LOOKUP_EN         (NAND_BASE_ADDR+0x40)
#define  NAND_LOOKUP0           (NAND_BASE_ADDR+0x44)
#define  NAND_LOOKUP1           (NAND_BASE_ADDR+0x48)
#define  NAND_LOOKUP2           (NAND_BASE_ADDR+0x4C)
#define  NAND_LOOKUP3           (NAND_BASE_ADDR+0x50)
#define  NAND_LOOKUP4           (NAND_BASE_ADDR+0x54)
#define  NAND_LOOKUP5           (NAND_BASE_ADDR+0x58)
#define  NAND_LOOKUP6           (NAND_BASE_ADDR+0x5C)
#define  NAND_LOOKUP7           (NAND_BASE_ADDR+0x60)
#define  NAND_DMA_ADDR          (NAND_BASE_ADDR+0x64)
#define  NAND_DMA_CNT           (NAND_BASE_ADDR+0x68)
#define  NAND_DMA_CTRL          (NAND_BASE_ADDR+0x6C)
#define  NAND_MEM_CTRL          (NAND_BASE_ADDR+0x80)
#define  NAND_DATA_SIZE         (NAND_BASE_ADDR+0x84)
#define  NAND_READ_STATUS       (NAND_BASE_ADDR+0x88)
#define  NAND_TIME_SEQ_0        (NAND_BASE_ADDR+0x8C)
#define  NAND_TIMINGS_ASYN      (NAND_BASE_ADDR+0x90)
#define  NAND_TIMINGS_SYN       (NAND_BASE_ADDR+0x94)
#define  NAND_FIFO_DATA         (NAND_BASE_ADDR+0x98)
#define  NAND_TIME_MODE         (NAND_BASE_ADDR+0x9C)
#define  NAND_DMA_ADDR_OFFSET   (NAND_BASE_ADDR+0xA0)
#define  NAND_FIFO_INIT         (NAND_BASE_ADDR+0xB0)
#define  NAND_GENERIC_SEQ_CTRL  (NAND_BASE_ADDR+0xB4)
#define  NAND_ERR_CNT00         (NAND_BASE_ADDR+0xB8)
#define  NAND_ERR_CNT01         (NAND_BASE_ADDR+0xBC)
#define  NAND_ERR_CNT10         (NAND_BASE_ADDR+0xC0)
#define  NAND_ERR_CNT11         (NAND_BASE_ADDR+0xC4)
#define  NAND_TIME_SEQ_1        (NAND_BASE_ADDR+0xC8)

/////////////////////////////////////////////////////////
// MAC
#define HW_ETH_BASE_ADDR        0x80500000
#define HW_ETH_MACCR            HW_ETH_BASE_ADDR + 0x0000
#define HW_ETH_MACFFR           HW_ETH_BASE_ADDR + 0x0004
#define HW_ETH_MACHTHR          HW_ETH_BASE_ADDR + 0x0008
#define HW_ETH_MACHTLR          HW_ETH_BASE_ADDR + 0x000C
#define HW_ETH_MACMIIAR         HW_ETH_BASE_ADDR + 0x0010
#define HW_ETH_MACMIIDR         HW_ETH_BASE_ADDR + 0x0014
#define HW_ETH_MACFCR           HW_ETH_BASE_ADDR + 0x0018
#define HW_ETH_MACVLANTR        HW_ETH_BASE_ADDR + 0x001C
#define HW_ETH_MACVR            HW_ETH_BASE_ADDR + 0x0020    //read only
#define HW_ETH_MACRWUFFR        HW_ETH_BASE_ADDR + 0x0028
#define HW_ETH_MACPMTCSR        HW_ETH_BASE_ADDR + 0x002C
#define HW_ETH_MACDBGR          HW_ETH_BASE_ADDR + 0x0034
#define HW_ETH_MACISR           HW_ETH_BASE_ADDR + 0x0038
#define HW_ETH_MACIMR           HW_ETH_BASE_ADDR + 0x003C
#define HW_ETH_MACA0HR          HW_ETH_BASE_ADDR + 0x0040
#define HW_ETH_MACA0LR          HW_ETH_BASE_ADDR + 0x0044
#define HW_ETH_MACA1HR          HW_ETH_BASE_ADDR + 0x0048
#define HW_ETH_MACA1LR          HW_ETH_BASE_ADDR + 0x004C
#define HW_ETH_MACA2HR          HW_ETH_BASE_ADDR + 0x0050
#define HW_ETH_MACA2LR          HW_ETH_BASE_ADDR + 0x0054
#define HW_ETH_MACA3HR          HW_ETH_BASE_ADDR + 0x0058
#define HW_ETH_MACA3LR          HW_ETH_BASE_ADDR + 0x005C
#define HW_ETH_MACA4HR          HW_ETH_BASE_ADDR + 0x0060
#define HW_ETH_MACA4LR          HW_ETH_BASE_ADDR + 0x0064
#define HW_ETH_MMCCR            HW_ETH_BASE_ADDR + 0x0100
#define HW_ETH_MMCRIR           HW_ETH_BASE_ADDR + 0x0104
#define HW_ETH_MMCTIR           HW_ETH_BASE_ADDR + 0x0108
#define HW_ETH_MMCRIMR          HW_ETH_BASE_ADDR + 0x010C
#define HW_ETH_MMCTIMR          HW_ETH_BASE_ADDR + 0x0110
#define HW_ETH_MMCTGFSCCR       HW_ETH_BASE_ADDR + 0x014C
#define HW_ETH_MMCTGFMSCCR      HW_ETH_BASE_ADDR + 0x0150
#define HW_ETH_MMCTGFCR         HW_ETH_BASE_ADDR + 0x0168
#define HW_ETH_MMCRFCECR        HW_ETH_BASE_ADDR + 0x0194
#define HW_ETH_MMCRFAECR        HW_ETH_BASE_ADDR + 0x0198
#define HW_ETH_MMCRGUFCR        HW_ETH_BASE_ADDR + 0x01C4
#define HW_ETH_PTPTSCR          HW_ETH_BASE_ADDR + 0x0700
#define HW_ETH_PTPSSIR          HW_ETH_BASE_ADDR + 0x0704
#define HW_ETH_PTPTSHR          HW_ETH_BASE_ADDR + 0x0708
#define HW_ETH_PTPTSLR          HW_ETH_BASE_ADDR + 0x070C
#define HW_ETH_PTPTSHUR         HW_ETH_BASE_ADDR + 0x0710
#define HW_ETH_PTPTSLUR         HW_ETH_BASE_ADDR + 0x0714
#define HW_ETH_PTPTSAR          HW_ETH_BASE_ADDR + 0x0718
#define HW_ETH_PTPTTHR          HW_ETH_BASE_ADDR + 0x071C
#define HW_ETH_PTPTTLR          HW_ETH_BASE_ADDR + 0x0720
//#define HW_ETH_PTPTSSR          HW_ETH_BASE_ADDR + 0x0728
//#define HW_ETH_PTPPPSCR         HW_ETH_BASE_ADDR + 0x072C
#define HW_ETH_DMABMR           HW_ETH_BASE_ADDR + 0x1000
#define HW_ETH_DMATPDR          HW_ETH_BASE_ADDR + 0x1004
#define HW_ETH_DMARPDR          HW_ETH_BASE_ADDR + 0x1008
#define HW_ETH_DMARDLAR         HW_ETH_BASE_ADDR + 0x100C
#define HW_ETH_DMATDLAR         HW_ETH_BASE_ADDR + 0x1010
#define HW_ETH_DMASR            HW_ETH_BASE_ADDR + 0x1014
#define HW_ETH_DMAOMR           HW_ETH_BASE_ADDR + 0x1018
#define HW_ETH_DMAIER           HW_ETH_BASE_ADDR + 0x101C
#define HW_ETH_DMAMFBOCR        HW_ETH_BASE_ADDR + 0x1020
//#define HW_ETH_DMARSWTR         HW_ETH_BASE_ADDR + 0x1024
#define HW_ETH_DMACHTDR         HW_ETH_BASE_ADDR + 0x1048
#define HW_ETH_DMACHRDR         HW_ETH_BASE_ADDR + 0x104C
#define HW_ETH_DMACHTBAR        HW_ETH_BASE_ADDR + 0x1050
#define HW_ETH_DMACHRBAR        HW_ETH_BASE_ADDR + 0x1054


/////////////////////////////////////////////////////////
//CAN0
// 
#define MCAN0_BASE_ADDRESS      0x8004C000
#define HW_MCAN0_MOD            0x8004C000
#define HW_MCAN0_CMR            0x8004C001
#define HW_MCAN0_SR             0x8004C002
#define HW_MCAN0_IR             0x8004C003
#define HW_MCAN0_IER            0x8004C004
#define HW_MCAN0_BTR0           0x8004C006
#define HW_MCAN0_BTR1           0x8004C007
#define HW_MCAN0_OCR            0x8004C008
#define HW_MCAN0_ALC            0x8004C00B
#define HW_MCAN0_ECC            0x8004C00C
#define HW_MCAN0_EWLC           0x8004C00D
#define HW_MCAN0_RXERR          0x8004C00E
#define HW_MCAN0_TXERR          0x8004C00F
#define HW_MCAN0_ACR0           0x8004C010
#define HW_MCAN0_ACR1           0x8004C011
#define HW_MCAN0_ACR2           0x8004C012
#define HW_MCAN0_ACR3           0x8004C013
#define HW_MCAN0_AMR0           0x8004C014
#define HW_MCAN0_AMR1           0x8004C015
#define HW_MCAN0_AMR2           0x8004C016
#define HW_MCAN0_AMR3           0x8004C017
#define HW_MCAN0_RMC            0x8004C01D
#define HW_MCAN0_RBSA           0x8004C01E
#define HW_MCAN0_CDR            0x8004C01F

#define HW_MCAN0_TXBUF1           0x8004C010
#define HW_MCAN0_TXBUF2           0x8004C011
#define HW_MCAN0_TXBUF3           0x8004C012
#define HW_MCAN0_TXBUF4           0x8004C013
#define HW_MCAN0_TXBUF5           0x8004C014
#define HW_MCAN0_TXBUF6           0x8004C015
#define HW_MCAN0_TXBUF7           0x8004C016
#define HW_MCAN0_TXBUF8           0x8004C017
#define HW_MCAN0_TXBUF9           0x8004C018
#define HW_MCAN0_TXBUF10          0x8004C019
#define HW_MCAN0_TXBUF11          0x8004C01A
#define HW_MCAN0_TXBUF12          0x8004C01B
#define HW_MCAN0_TXBUF13          0x8004C01C

#define HW_MCAN0_TXBUF1_RD        0x8004C060
#define HW_MCAN0_TXBUF2_RD        0x8004C061
#define HW_MCAN0_TXBUF3_RD        0x8004C062
#define HW_MCAN0_TXBUF4_RD        0x8004C063
#define HW_MCAN0_TXBUF5_RD        0x8004C064
#define HW_MCAN0_TXBUF6_RD        0x8004C065
#define HW_MCAN0_TXBUF7_RD        0x8004C066
#define HW_MCAN0_TXBUF8_RD        0x8004C067
#define HW_MCAN0_TXBUF9_RD        0x8004C068
#define HW_MCAN0_TXBUF10_RD       0x8004C069
#define HW_MCAN0_TXBUF11_RD       0x8004C06A
#define HW_MCAN0_TXBUF12_RD       0x8004C06B
#define HW_MCAN0_TXBUF13_RD       0x8004C06C

/////////////////////////////////////////////////////////
//CAN1
// 
#define MCAN1_BASE_ADDRESS      0x80050000
#define HW_MCAN1_MOD            0x80050000
#define HW_MCAN1_CMR            0x80050001
#define HW_MCAN1_SR             0x80050002
#define HW_MCAN1_IR             0x80050003
#define HW_MCAN1_IER            0x80050004
#define HW_MCAN1_BTR0           0x80050006
#define HW_MCAN1_BTR1           0x80050007
#define HW_MCAN1_OCR            0x80050008
#define HW_MCAN1_ALC            0x8005000B
#define HW_MCAN1_ECC            0x8005000C
#define HW_MCAN1_EWLC           0x8005000D
#define HW_MCAN1_RXERR          0x8005000E
#define HW_MCAN1_TXERR          0x8005000F
#define HW_MCAN1_ACR0           0x80050010
#define HW_MCAN1_ACR1           0x80050011
#define HW_MCAN1_ACR2           0x80050012
#define HW_MCAN1_ACR3           0x80050013
#define HW_MCAN1_AMR0           0x80050014
#define HW_MCAN1_AMR1           0x80050015
#define HW_MCAN1_AMR2           0x80050016
#define HW_MCAN1_AMR3           0x80050017
#define HW_MCAN1_RMC            0x8005001D
#define HW_MCAN1_RBSA           0x8005001E
#define HW_MCAN1_CDR            0x8005001F

#define HW_MCAN1_TXBUF1           0x80050010
#define HW_MCAN1_TXBUF2           0x80050011
#define HW_MCAN1_TXBUF3           0x80050012
#define HW_MCAN1_TXBUF4           0x80050013
#define HW_MCAN1_TXBUF5           0x80050014
#define HW_MCAN1_TXBUF6           0x80050015
#define HW_MCAN1_TXBUF7           0x80050016
#define HW_MCAN1_TXBUF8           0x80050017
#define HW_MCAN1_TXBUF9           0x80050018
#define HW_MCAN1_TXBUF10          0x80050019
#define HW_MCAN1_TXBUF11          0x8005001A
#define HW_MCAN1_TXBUF12          0x8005001B
#define HW_MCAN1_TXBUF13          0x8005001C

#define HW_MCAN1_TXBUF1_RD        0x80050060
#define HW_MCAN1_TXBUF2_RD        0x80050061
#define HW_MCAN1_TXBUF3_RD        0x80050062
#define HW_MCAN1_TXBUF4_RD        0x80050063
#define HW_MCAN1_TXBUF5_RD        0x80050064
#define HW_MCAN1_TXBUF6_RD        0x80050065
#define HW_MCAN1_TXBUF7_RD        0x80050066
#define HW_MCAN1_TXBUF8_RD        0x80050067
#define HW_MCAN1_TXBUF9_RD        0x80050068
#define HW_MCAN1_TXBUF10_RD       0x80050069
#define HW_MCAN1_TXBUF11_RD       0x8005006A
#define HW_MCAN1_TXBUF12_RD       0x8005006B
#define HW_MCAN1_TXBUF13_RD       0x8005006C


/////////////////////////////////////////////////////////
//I2C0

#define I2C0_BASE_ADDRESS         0x8002c000

#define HW_I2C0_CON                0x8002c000
#define HW_I2C0_TAR                0x8002c004
#define HW_I2C0_SAR                0x8002c008
#define HW_I2C0_HS_MADDR           0x8002c00C
#define HW_I2C0_DATA_CMD           0x8002c010
#define HW_I2C0_SS_SCL_HCNT        0x8002c014
#define HW_I2C0_SS_SCL_LCNT        0x8002c018
#define HW_I2C0_FS_SCL_HCNT        0x8002c01C
#define HW_I2C0_FS_SCL_LCNT        0x8002c020
#define HW_I2C0_HS_SCL_HCNT        0x8002c024
#define HW_I2C0_HS_SCL_LCNT        0x8002c028
#define HW_I2C0_INTR_STAT          0x8002c02C
#define HW_I2C0_INTR_MASK          0x8002c030
#define HW_I2C0_RAW_INTR_STAT      0x8002c034
#define HW_I2C0_RX_TL              0x8002c038
#define HW_I2C0_TX_TL              0x8002c03C
#define HW_I2C0_CLR_INTR           0x8002c040    
#define HW_I2C0_CLR_RX_UNDER       0x8002c044
#define HW_I2C0_CLR_RX_OVER        0x8002c048
#define HW_I2C0_CLR_TX_OVER        0x8002c04C
#define HW_I2C0_CLR_RD_REQ         0x8002c050
#define HW_I2C0_CLR_TX_ABRT        0x8002c054
#define HW_I2C0_CLR_RX_DONE        0x8002c058
#define HW_I2C0_CLR_ACTIVITY       0x8002c05C
#define HW_I2C0_CLR_STOP_DET       0x8002c060
#define HW_I2C0_CLR_START_DET      0x8002c064
#define HW_I2C0_CLR_GEN_CALL       0x8002c068
#define HW_I2C0_ENABLE             0x8002c06C
#define HW_I2C0_STAT               0x8002c070
#define HW_I2C0_TXFLR              0x8002c074
#define HW_I2C0_RXFLR              0x8002c078

#define HW_I2C0_TX_ABRT_SOURCE     0x8002c080
#define HW_I2C0_SLV_DATA_NACK_ONLY 0x8002c084
#define HW_I2C0_DMA_CR             0x8002c088
#define HW_I2C0_DMA_TDLR           0x8002c08C
#define HW_I2C0_DMA_RDLR           0x8002c090
#define HW_I2C0_SDA_SETUP          0x8002c094
#define HW_I2C0_ACK_GENERAL_CALL   0x8002c098
#define HW_I2C0_ENABLE_STATUS      0x8002c09C
#define HW_I2C0_COMP_PARAM_1       0x8002c0f4
#define HW_I2C0_COMP_VERSION       0x8002c0f8
#define HW_I2C0_COMP_TYPE          0x8002c0fc


/////////////////////////////////////////////////////////
//I2C1

#define I2C1_BASE_ADDRESS         0x80030000

#define HW_I2C1_CON                0x80030000
#define HW_I2C1_TAR                0x80030004
#define HW_I2C1_SAR                0x80030008
#define HW_I2C1_HS_MADDR           0x8003000C
#define HW_I2C1_DATA_CMD           0x80030010
#define HW_I2C1_SS_SCL_HCNT        0x80030014
#define HW_I2C1_SS_SCL_LCNT        0x80030018
#define HW_I2C1_FS_SCL_HCNT        0x8003001C
#define HW_I2C1_FS_SCL_LCNT        0x80030020
#define HW_I2C1_HS_SCL_HCNT        0x80030024
#define HW_I2C1_HS_SCL_LCNT        0x80030028
#define HW_I2C1_INTR_STAT          0x8003002C
#define HW_I2C1_INTR_MASK          0x80030030
#define HW_I2C1_RAW_INTR_STAT      0x80030034
#define HW_I2C1_RX_TL              0x80030038
#define HW_I2C1_TX_TL              0x8003003C
#define HW_I2C1_CLR_INTR           0x80030040    
#define HW_I2C1_CLR_RX_UNDER       0x80030044
#define HW_I2C1_CLR_RX_OVER        0x80030048
#define HW_I2C1_CLR_TX_OVER        0x8003004C
#define HW_I2C1_CLR_RD_REQ         0x80030050
#define HW_I2C1_CLR_TX_ABRT        0x80030054
#define HW_I2C1_CLR_RX_DONE        0x80030058
#define HW_I2C1_CLR_ACTIVITY       0x8003005C
#define HW_I2C1_CLR_STOP_DET       0x80030060
#define HW_I2C1_CLR_START_DET      0x80030064
#define HW_I2C1_CLR_GEN_CALL       0x80030068
#define HW_I2C1_ENABLE             0x8003006C
#define HW_I2C1_STAT               0x80030070
#define HW_I2C1_TXFLR              0x80030074
#define HW_I2C1_RXFLR              0x80030078

#define HW_I2C1_TX_ABRT_SOURCE     0x80030080
#define HW_I2C1_SLV_DATA_NACK_ONLY 0x80030084
#define HW_I2C1_DMA_CR             0x80030088
#define HW_I2C1_DMA_TDLR           0x8003008C
#define HW_I2C1_DMA_RDLR           0x80030090
#define HW_I2C1_SDA_SETUP          0x80030094
#define HW_I2C1_ACK_GENERAL_CALL   0x80030098
#define HW_I2C1_ENABLE_STATUS      0x8003009C
#define HW_I2C1_COMP_PARAM_1       0x800300f4
#define HW_I2C1_COMP_VERSION       0x800300f8
#define HW_I2C1_COMP_TYPE          0x800300fc

/////////////////////////////////////////////////////////
//SYSTEM CONFIG
#define HW_PRESETCTRL0        0x80040000
#define HW_PRESETCTRL1        0x80040010
#define HW_AHBCLKCTRL0        0x80040020
#define HW_AHBCLKCTRL1        0x80040030
#define HW_SYSTCKCAL          0x80040040
#define HW_SYSPLLCTRL         0x80040100
#define HW_SYSPLLSTAT         0x80040104
#define HW_SYSRSTSTAT         0x80040110
#define HW_MAINCLKSEL         0x80040120
#define HW_MAINCLKUEN         0x80040124
#define HW_UARTCLKSEL         0x80040128
#define HW_UARTCLKUEN		    0x8004012C
#define HW_I2S0CLKSEL         0x80040130
#define HW_I2S0CLKUEN         0x80040134

#define HW_I2S1CLKSEL			0x80040138
#define HW_I2S1CLKUEN         0x8004013C


#define HW_USBCLKSEL          0x80040140
#define HW_USBCLKUEN          0x80040144
#define HW_WDTCLKSEL          0x80040160
#define HW_WDTCLKUEN          0x80040164
#define HW_OUTCLKSEL          0x80040170
#define HW_OUTCLKUEN          0x80040174
#define HW_CPUCLKDIV          0x8004017C
#define HW_SYSAHBCLKDIV       0x80040180
#define HW_I2S0_MCLKDIV       0x80040190
#define HW_I2S0_SCLKDIV       0x80040194

#define HW_I2S1_MCLKDIV       0x80040188
#define HW_I2S1_SCLKDIV       0x8004018c

#define HW_UART0CLKDIV        0x80040198
#define HW_UART1CLKDIV        0x8004019C
#define HW_UART2CLKDIV        0x800401A0
#define HW_UART3CLKDIV        0x800401A4
#define HW_UART4CLKDIV        0x800401A8
#define HW_UART5CLKDIV        0x800401AC
#define HW_UART6CLKDIV        0x800401B0
#define HW_UART7CLKDIV        0x800401B4
#define HW_UART8CLKDIV        0x800401B8
#define HW_UART9CLKDIV        0x800401BC
#define HW_SPI0CLKDIV         0x800401C0
#define HW_SPI1CLKDIV         0x800401C4
#define HW_QUADSPI0CLKDIV     0x800401C8
#define HW_SSP0CLKDIV         0x800401D0
#define HW_NANDCLKDIV         0x800401D4
#define HW_TRACECLKDIV        0x800401E0
#define HW_CAMMCLKDIV         0x800401E8
#define HW_WDTCLKDIV          0x800401EC
#define HW_USBCLKDIV          0x800401F0
#define HW_OUTCLKDIV          0x800401F4

#define HW_MACCLKDIV          0x800401f8
#define HW_LCDCLKDIV          0x800401fc
#define HW_ADCANACLKDIV       0x80040200

#define HW_PDRUNCFG           0x80040238
#define HW_MATRIXPRI0         0x80040300
#define HW_MATRIXPRI1         0x80040304
#define HW_MATRIXPRI2         0x80040308
#define HW_MATRIXPRI3         0x8004030C
#define HW_MATRIXPRI4         0x80040310
#define HW_MATRIXPRI5         0x80040314
#define HW_MATRIXPRI6         0x80040318
#define HW_MATRIXPRI7         0x8004031C
#define HW_MATRIXPRI8         0x80040320
#define HW_MATRIXPRI9         0x80040324
#define HW_MATRIXPRI10        0x80040328
#define HW_MATRIXPRI11        0x8004032C
#define HW_MATRIXPRI12        0x80040330
#define HW_MATRIXPRI13        0x80040334
#define HW_MATRIXPRI14        0x80040338
#define HW_MATRIXPRI15        0x8004033C
#define HW_EMI_CTRL           0x8004034C
#define HW_RISC_CTRL          0x80040350
#define HW_MACPHY_SEL         0x80040360
#define HW_USB_CTRL           0x80040368
#define HW_DEVICEID           0x80040400
#define HW_PCON_ADDR          0x80040500
#define HW_DMA_CTRL			0x80040354

/////////////////////////////////////////////////////////
//DMA0
#define HW_DMA0_SAR0           0x80100000
#define HW_DMA0_DAR0           0x80100008
#define HW_DMA0_LLP0           0x80100010
#define HW_DMA0_CTL0           0x80100018
#define HW_DMA0_SSTAT0         0x80100020
#define HW_DMA0_DSTAT0         0x80100028
#define HW_DMA0_SSTATAR0       0x80100030      
#define HW_DMA0_DSTATAR0       0x80100038 
#define HW_DMA0_CFG0           0x80100040
#define HW_DMA0_SGR0           0x80100048
#define HW_DMA0_DSR0           0x80100050

#define HW_DMA0_SAR1           0x80100058
#define HW_DMA0_DAR1           0x80100060
#define HW_DMA0_LLP1           0x80100068
#define HW_DMA0_CTL1           0x80100070
#define HW_DMA0_SSTAT1         0x80100078
#define HW_DMA0_DSTAT1         0x80100080
#define HW_DMA0_SSTATAR1       0x80100088      
#define HW_DMA0_DSTATAR1       0x80100090 
#define HW_DMA0_CFG1           0x80100098
#define HW_DMA0_SGR1           0x801000a0
#define HW_DMA0_DSR1           0x801000a8

#define HW_DMA0_SAR2           0x801000b0
#define HW_DMA0_DAR2           0x801000b8
#define HW_DMA0_LLP2           0x801000c0
#define HW_DMA0_CTL2           0x801000c8
#define HW_DMA0_SSTAT2         0x801000d0
#define HW_DMA0_DSTAT2         0x801000d8
#define HW_DMA0_SSTATAR2       0x801000e0      
#define HW_DMA0_DSTATAR2       0x801000e8 
#define HW_DMA0_CFG2           0x801000f0
#define HW_DMA0_SGR2           0x801000f8
#define HW_DMA0_DSR2           0x80100100

#define HW_DMA0_SAR3           0x80100108
#define HW_DMA0_DAR3           0x80100110
#define HW_DMA0_LLP3           0x80100118
#define HW_DMA0_CTL3           0x80100120
#define HW_DMA0_SSTAT3         0x80100128
#define HW_DMA0_DSTAT3         0x80100130
#define HW_DMA0_SSTATAR3       0x80100138      
#define HW_DMA0_DSTATAR3       0x80100140 
#define HW_DMA0_CFG3           0x80100148
#define HW_DMA0_SGR3           0x80100150
#define HW_DMA0_DSR3           0x80100158

#define HW_DMA0_SAR4           0x80100160
#define HW_DMA0_DAR4           0x80100168
#define HW_DMA0_LLP4           0x80100170
#define HW_DMA0_CTL4           0x80100178
#define HW_DMA0_SSTAT4         0x80100180
#define HW_DMA0_DSTAT4         0x80100188
#define HW_DMA0_SSTATAR4       0x80100190      
#define HW_DMA0_DSTATAR4       0x80100198 
#define HW_DMA0_CFG4           0x801001a0
#define HW_DMA0_SGR4           0x801001a8
#define HW_DMA0_DSR4           0x801001b0

#define HW_DMA0_SAR5           0x801001b8
#define HW_DMA0_DAR5           0x801001c0
#define HW_DMA0_LLP5           0x801001c8
#define HW_DMA0_CTL5           0x801001d0
#define HW_DMA0_SSTAT5         0x801001d8
#define HW_DMA0_DSTAT5         0x801001e0
#define HW_DMA0_SSTATAR5       0x801001e8      
#define HW_DMA0_DSTATAR5       0x801001f0 
#define HW_DMA0_CFG5           0x801001f8
#define HW_DMA0_SGR5           0x80100200
#define HW_DMA0_DSR5           0x80100208

#define HW_DMA0_SAR6           0x80100210
#define HW_DMA0_DAR6           0x80100218
#define HW_DMA0_LLP6           0x80100220
#define HW_DMA0_CTL6           0x80100228
#define HW_DMA0_SSTAT6         0x80100230
#define HW_DMA0_DSTAT6         0x80100238
#define HW_DMA0_SSTATAR6       0x80100240      
#define HW_DMA0_DSTATAR6       0x80100248 
#define HW_DMA0_CFG6           0x80100250
#define HW_DMA0_SGR6           0x80100258
#define HW_DMA0_DSR6           0x80100260

#define HW_DMA0_SAR7           0x80100268
#define HW_DMA0_DAR7           0x80100270
#define HW_DMA0_LLP7           0x80100278
#define HW_DMA0_CTL7           0x80100280
#define HW_DMA0_SSTAT7         0x80100288
#define HW_DMA0_DSTAT7         0x80100290
#define HW_DMA0_SSTATAR7       0x80100298      
#define HW_DMA0_DSTATAR7       0x801002a0 
#define HW_DMA0_CFG7           0x801002a8
#define HW_DMA0_SGR7           0x801002b0
#define HW_DMA0_DSR7           0x801002b8

#define HW_DMA0_RawTFR         0x801002c0
#define HW_DMA0_RawBLOCK       0x801002c8
#define HW_DMA0_RawSRCTRAN     0x801002d0
#define HW_DMA0_RawDSTTRAN     0x801002d8
#define HW_DMA0_RawERR         0x801002e0

#define HW_DMA0_StatusTFR      0x801002e8
#define HW_DMA0_StatusBLOCK    0x801002f0
#define HW_DMA0_StatusSRCTRAN  0x801002f8
#define HW_DMA0_StatusDSTTRAN  0x80100300
#define HW_DMA0_StatusERR      0x80100308

#define HW_DMA0_MaskTFR        0x80100310
#define HW_DMA0_MaskBLOCK      0x80100318
#define HW_DMA0_MaskSRCTRAN    0x80100320
#define HW_DMA0_MaskDSTTRAN    0x80100328
#define HW_DMA0_MaskERR        0x80100330

#define HW_DMA0_ClearTFR       0x80100338
#define HW_DMA0_ClearBLOCK     0x80100340
#define HW_DMA0_ClearSRCTRAN   0x80100348
#define HW_DMA0_ClearDSTTRAN   0x80100350
#define HW_DMA0_ClearERR       0x80100358

#define HW_DMA0_STATUSINT      0x80100360

#define HW_DMA0_ReqSrcReg      0x80100368
#define HW_DMA0_ReqDstReg      0x80100370
#define HW_DMA0_SglReqSrcReg   0x80100378
#define HW_DMA0_SglReqDstReg   0x80100380
#define HW_DMA0_LstSrcReg      0x80100388
#define HW_DMA0_LstDstReg      0x80100390

#define HW_DMA0_DMACFGREG      0x80100398
#define HW_DMA0_CHENREG        0x801003a0


/////////////////////////////////////////////////////////
//DMA1
#define HW_DMA1_SAR0           0x80200000
#define HW_DMA1_DAR0           0x80200008
#define HW_DMA1_LLP0           0x80200010
#define HW_DMA1_CTL0           0x80200018
#define HW_DMA1_SSTAT0         0x80200020
#define HW_DMA1_DSTAT0         0x80200028
#define HW_DMA1_SSTATAR0       0x80200030      
#define HW_DMA1_DSTATAR0       0x80200038 
#define HW_DMA1_CFG0           0x80200040
#define HW_DMA1_SGR0           0x80200048
#define HW_DMA1_DSR0           0x80200050

#define HW_DMA1_SAR1           0x80200058
#define HW_DMA1_DAR1           0x80200060
#define HW_DMA1_LLP1           0x80200068
#define HW_DMA1_CTL1           0x80200070
#define HW_DMA1_SSTAT1         0x80200078
#define HW_DMA1_DSTAT1         0x80200080
#define HW_DMA1_SSTATAR1       0x80200088      
#define HW_DMA1_DSTATAR1       0x80200090 
#define HW_DMA1_CFG1           0x80200098
#define HW_DMA1_SGR1           0x802000a0
#define HW_DMA1_DSR1           0x802000a8

#define HW_DMA1_SAR2           0x802000b0
#define HW_DMA1_DAR2           0x802000b8
#define HW_DMA1_LLP2           0x802000c0
#define HW_DMA1_CTL2           0x802000c8
#define HW_DMA1_SSTAT2         0x802000d0
#define HW_DMA1_DSTAT2         0x802000d8
#define HW_DMA1_SSTATAR2       0x802000e0      
#define HW_DMA1_DSTATAR2       0x802000e8 
#define HW_DMA1_CFG2           0x802000f0
#define HW_DMA1_SGR2           0x802000f8
#define HW_DMA1_DSR2           0x80200100

#define HW_DMA1_SAR3           0x80200108
#define HW_DMA1_DAR3           0x80200110
#define HW_DMA1_LLP3           0x80200118
#define HW_DMA1_CTL3           0x80200120
#define HW_DMA1_SSTAT3         0x80200128
#define HW_DMA1_DSTAT3         0x80200130
#define HW_DMA1_SSTATAR3       0x80200138      
#define HW_DMA1_DSTATAR3       0x80200140 
#define HW_DMA1_CFG3           0x80200148
#define HW_DMA1_SGR3           0x80200150
#define HW_DMA1_DSR3           0x80200158

#define HW_DMA1_SAR4           0x80200160
#define HW_DMA1_DAR4           0x80200168
#define HW_DMA1_LLP4           0x80200170
#define HW_DMA1_CTL4           0x80200178
#define HW_DMA1_SSTAT4         0x80200180
#define HW_DMA1_DSTAT4         0x80200188
#define HW_DMA1_SSTATAR4       0x80200190      
#define HW_DMA1_DSTATAR4       0x80200198 
#define HW_DMA1_CFG4           0x802001a0
#define HW_DMA1_SGR4           0x802001a8
#define HW_DMA1_DSR4           0x802001b0

#define HW_DMA1_SAR5           0x802001b8
#define HW_DMA1_DAR5           0x802001c0
#define HW_DMA1_LLP5           0x802001c8
#define HW_DMA1_CTL5           0x802001d0
#define HW_DMA1_SSTAT5         0x802001d8
#define HW_DMA1_DSTAT5         0x802001e0
#define HW_DMA1_SSTATAR5       0x802001e8      
#define HW_DMA1_DSTATAR5       0x802001f0 
#define HW_DMA1_CFG5           0x802001f8
#define HW_DMA1_SGR5           0x80200200
#define HW_DMA1_DSR5           0x80200208

#define HW_DMA1_SAR6           0x80200210
#define HW_DMA1_DAR6           0x80200218
#define HW_DMA1_LLP6           0x80200220
#define HW_DMA1_CTL6           0x80200228
#define HW_DMA1_SSTAT6         0x80200230
#define HW_DMA1_DSTAT6         0x80200238
#define HW_DMA1_SSTATAR6       0x80200240      
#define HW_DMA1_DSTATAR6       0x80200248 
#define HW_DMA1_CFG6           0x80200250
#define HW_DMA1_SGR6           0x80200258
#define HW_DMA1_DSR6           0x80200260

#define HW_DMA1_SAR7           0x80200268
#define HW_DMA1_DAR7           0x80200270
#define HW_DMA1_LLP7           0x80200278
#define HW_DMA1_CTL7           0x80200280
#define HW_DMA1_SSTAT7         0x80200288
#define HW_DMA1_DSTAT7         0x80200290
#define HW_DMA1_SSTATAR7       0x80200298      
#define HW_DMA1_DSTATAR7       0x802002a0 
#define HW_DMA1_CFG7           0x802002a8
#define HW_DMA1_SGR7           0x802002b0
#define HW_DMA1_DSR7           0x802002b8

#define HW_DMA1_RawTFR         0x802002c0
#define HW_DMA1_RawBLOCK       0x802002c8
#define HW_DMA1_RawSRCTRAN     0x802002d0
#define HW_DMA1_RawDSTTRAN     0x802002d8
#define HW_DMA1_RawERR         0x802002e0

#define HW_DMA1_StatusTFR      0x802002e8
#define HW_DMA1_StatusBLOCK    0x802002f0
#define HW_DMA1_StatusSRCTRAN  0x802002f8
#define HW_DMA1_StatusDSTTRAN  0x80200300
#define HW_DMA1_StatusERR      0x80200308

#define HW_DMA1_MaskTFR        0x80200310
#define HW_DMA1_MaskBLOCK      0x80200318
#define HW_DMA1_MaskSRCTRAN    0x80200320
#define HW_DMA1_MaskDSTTRAN    0x80200328
#define HW_DMA1_MaskERR        0x80200330

#define HW_DMA1_ClearTFR       0x80200338
#define HW_DMA1_ClearBLOCK     0x80200340
#define HW_DMA1_ClearSRCTRAN   0x80200348
#define HW_DMA1_ClearDSTTRAN   0x80200350
#define HW_DMA1_ClearERR       0x80200358

#define HW_DMA1_STATUSINT      0x80200360

#define HW_DMA1_ReqSrcReg      0x80200368
#define HW_DMA1_ReqDstReg      0x80200370
#define HW_DMA1_SglReqSrcReg   0x80200378
#define HW_DMA1_SglReqDstReg   0x80200380
#define HW_DMA1_LstSrcReg      0x80200388
#define HW_DMA1_LstDstReg      0x80200390

#define HW_DMA1_DMACFGREG      0x80200398
#define HW_DMA1_CHENREG        0x802003a0


////////////////////////////////////////////////////
/*irq*/
#define IRQ_BASE_ADDRESS        0x80054000

#define	HW_ICOLL_VECTOR         0x80054000                
#define	HW_ICOLL_VECTOR_SET     0x80054004 
#define	HW_ICOLL_VECTOR_CLR     0x80054008
#define	HW_ICOLL_VECTOR_TOG     0x8005400C

#define HW_ICOLL_LEVELACK       0x80054010
#define HW_ICOLL_LEVELACK_SET   0x80054014
#define HW_ICOLL_LEVELACK_CLR   0x80054018
#define HW_ICOLL_LEVELACK_TOG   0x8005401C

#define	HW_ICOLL_CTRL           0x80054020
#define	HW_ICOLL_CTRL_SET       0x80054024
#define	HW_ICOLL_CTRL_CLR       0x80054028
#define	HW_ICOLL_CTRL_TOG       0x8005402C

#define HW_ICOLL_STAT           0x80054030
#define HW_ICOLL_STAT_SET       0x80054034
#define HW_ICOLL_STAT_CLR       0x80054038
#define HW_ICOLL_STAT_TOG       0x8005403C

#define HW_ICOLL_RAW0           0x80054040
#define HW_ICOLL_RAW0_SET       0x80054044
#define HW_ICOLL_RAW0_CLR       0x80054048
#define HW_ICOLL_RAW0_TOG       0x8005404c

#define HW_ICOLL_RAW1           0x80054050
#define HW_ICOLL_RAW1_SET       0x80054054
#define HW_ICOLL_RAW1_CLR       0x80054058
#define HW_ICOLL_RAW1_TOG       0x8005405c

#define	HW_ICOLL_PRIORITY0      0x80054060
#define	HW_ICOLL_PRIORITY0_SET  0x80054064
#define	HW_ICOLL_PRIORITY0_CLR  0x80054068
#define	HW_ICOLL_PRIORITY0_TOG  0x8005406C

#define	HW_ICOLL_PRIORITY1      0x80054070
#define	HW_ICOLL_PRIORITY1_SET  0x80054074
#define	HW_ICOLL_PRIORITY1_CLR  0x80054078
#define	HW_ICOLL_PRIORITY1_TOG  0x8005407C

#define	HW_ICOLL_PRIORITY2      0x80054080
#define	HW_ICOLL_PRIORITY2_SET  0x80054084
#define	HW_ICOLL_PRIORITY2_CLR  0x80054088
#define	HW_ICOLL_PRIORITY2_TOG  0x8005408C

#define	HW_ICOLL_PRIORITY3      0x80054090
#define	HW_ICOLL_PRIORITY3_SET  0x80054094
#define	HW_ICOLL_PRIORITY3_CLR  0x80054098
#define	HW_ICOLL_PRIORITY3_TOG  0x8005409C

#define	HW_ICOLL_PRIORITY4      0x800540A0
#define	HW_ICOLL_PRIORITY4_SET  0x800540A4
#define	HW_ICOLL_PRIORITY4_CLR  0x800540A8
#define	HW_ICOLL_PRIORITY4_TOG  0x800540AC

#define	HW_ICOLL_PRIORITY5      0x800540B0
#define	HW_ICOLL_PRIORITY5_SET  0x800540B4
#define	HW_ICOLL_PRIORITY5_CLR  0x800540B8
#define	HW_ICOLL_PRIORITY5_TOG  0x800540BC

#define	HW_ICOLL_PRIORITY6      0x800540C0
#define	HW_ICOLL_PRIORITY6_SET  0x800540C4
#define	HW_ICOLL_PRIORITY6_CLR  0x800540C8
#define	HW_ICOLL_PRIORITY6_TOG  0x800540CC

#define	HW_ICOLL_PRIORITY7      0x800540D0
#define	HW_ICOLL_PRIORITY7_SET  0x800540D4
#define	HW_ICOLL_PRIORITY7_CLR  0x800540D8
#define	HW_ICOLL_PRIORITY7_TOG  0x800540DC

#define	HW_ICOLL_PRIORITY8      0x800540E0
#define	HW_ICOLL_PRIORITY8_SET  0x800540E4
#define	HW_ICOLL_PRIORITY8_CLR  0x800540E8
#define	HW_ICOLL_PRIORITY8_TOG  0x800540EC

#define	HW_ICOLL_PRIORITY9      0x800540F0
#define	HW_ICOLL_PRIORITY9_SET  0x800540F4
#define	HW_ICOLL_PRIORITY9_CLR  0x800540F8
#define	HW_ICOLL_PRIORITY9_TOG  0x800540FC

#define	HW_ICOLL_PRIORITY10     0x80054100
#define	HW_ICOLL_PRIORITY10_SET 0x80054104
#define	HW_ICOLL_PRIORITY10_CLR 0x80054108
#define	HW_ICOLL_PRIORITY10_TOG 0x8005410C

#define	HW_ICOLL_PRIORITY11     0x80054110
#define	HW_ICOLL_PRIORITY11_SET 0x80054114
#define	HW_ICOLL_PRIORITY11_CLR 0x80054118
#define	HW_ICOLL_PRIORITY11_TOG 0x8005411C

#define	HW_ICOLL_PRIORITY12     0x80054120
#define	HW_ICOLL_PRIORITY12_SET 0x80054124
#define	HW_ICOLL_PRIORITY12_CLR 0x80054128
#define	HW_ICOLL_PRIORITY12_TOG 0x8005412C

#define	HW_ICOLL_PRIORITY13     0x80054130
#define	HW_ICOLL_PRIORITY13_SET 0x80054134
#define	HW_ICOLL_PRIORITY13_CLR 0x80054138
#define	HW_ICOLL_PRIORITY13_TOG 0x8005413C

#define	HW_ICOLL_PRIORITY14     0x80054140
#define	HW_ICOLL_PRIORITY14_SET 0x80054144
#define	HW_ICOLL_PRIORITY14_CLR 0x80054148
#define	HW_ICOLL_PRIORITY14_TOG 0x8005414C

#define	HW_ICOLL_PRIORITY15     0x80054150
#define	HW_ICOLL_PRIORITY15_SET 0x80054154
#define	HW_ICOLL_PRIORITY15_CLR 0x80054158
#define	HW_ICOLL_PRIORITY15_TOG 0x8005415C

#define	HW_ICOLL_VBASE          0x80054160
#define	HW_ICOLL_VBASE_SET      0x80054164
#define	HW_ICOLL_VBASE_CLR      0x80054168
#define	HW_ICOLL_VBASE_TOG      0x8005416C

#define HW_ICOLL_DEBUG          0x80054170
#define HW_ICOLL_DEBUG_SET      0x80054174
#define HW_ICOLL_DEBUG_CLR      0x80054178
#define HW_ICOLL_DEBUG_TOG      0x8005417C

#define HW_ICOLL_DBGREAD0       0x80054180
#define HW_ICOLL_DBGREAD0_SET   0x80054184
#define HW_ICOLL_DBGREAD0_CLR   0x80054188
#define HW_ICOLL_DBGREAD0_TOG   0x8005418C

#define HW_ICOLL_DBGREAD1       0x80054190
#define HW_ICOLL_DBGREAD1_SET   0x80054194
#define HW_ICOLL_DBGREAD1_CLR   0x80054198
#define HW_ICOLL_DBGREAD1_TOG   0x8005419C

#define HW_ICOLL_DBGFLAG        0x800541A0
#define HW_ICOLL_DBGFLAG_SET    0x800541A4
#define HW_ICOLL_DBGFLAG_CLR    0x800541A8
#define HW_ICOLL_DBGFLAG_TOG    0x800541AC

#define HW_ICOLL_DBGREQUEST0     0x800541B0
#define HW_ICOLL_DBGREQUEST0_SET 0x800541B4
#define HW_ICOLL_DBGREQUEST0_CLR 0x800541B8
#define HW_ICOLL_DBGREQUEST0_TOG 0x800541BC

#define HW_ICOLL_DBGREQUEST1     0x800541C0
#define HW_ICOLL_DBGREQUEST1_SET 0x800541C4
#define HW_ICOLL_DBGREQUEST1_CLR 0x800541C8
#define HW_ICOLL_DBGREQUEST1_TOG 0x800541CC

#define	HW_ICOLL_CLEAR0         0x800541D0
#define	HW_ICOLL_CLEAR0_SET     0x800541D4
#define	HW_ICOLL_CLEAR0_CLR     0x800541D8
#define	HW_ICOLL_CLEAR0_TOG     0x800541DC

#define	HW_ICOLL_CLEAR1         0x800541E0
#define	HW_ICOLL_CLEAR1_SET     0x800541E4
#define	HW_ICOLL_CLEAR1_CLR     0x800541E8
#define	HW_ICOLL_CLEAR1_TOG     0x800541EC

#define HW_ICOLL_UNDEF_VECTOR     0x800541F0
#define HW_ICOLL_UNDEF_VECTOR_SET 0x800541F4
#define HW_ICOLL_UNDEF_VECTOR_CLR 0x800541F8
#define HW_ICOLL_UNDEF_VECTOR_TOG 0x800541FC  


/////////////////////////////////////////////////////////
//UART0
#define UART0_BASEESS  0x80000000

/////////////////////////////////////////////////////////
//UART0
#define UART0_BASEESS  0x80000000

#define HW_UART0_CTRL0          (UART0_BASEESS + 0x00)
#define HW_UART0_CTRL1          (UART0_BASEESS + 0x10)
#define HW_UART0_CTRL2          (UART0_BASEESS + 0x20)
#define HW_UART0_LINECTRL       (UART0_BASEESS + 0x30)
#define HW_UART0_INTR           (UART0_BASEESS + 0x40)
#define HW_UART0_DATA           (UART0_BASEESS + 0x50)
#define HW_UART0_STAT           (UART0_BASEESS + 0x60)
#define HW_UART0_DEBUG          (UART0_BASEESS + 0x70)
#define HW_UART0_ILPR           (UART0_BASEESS + 0x80)
#define HW_UART0_RS485CTRL      (UART0_BASEESS + 0x90)
#define HW_UART0_RS485ADRMATCH  (UART0_BASEESS + 0xa0)
#define HW_UART0_RS485DLY       (UART0_BASEESS + 0xb0)
#define HW_UART0_AUTOBAUD       (UART0_BASEESS + 0xc0)
#define HW_UART0_CTRL3          (UART0_BASEESS + 0xd0)


/////////////////////////////////////////////////////////
//UART1
#define UART1_BASEESS  0x80004000

#define HW_UART1_CTRL0          (UART1_BASEESS + 0x00)
#define HW_UART1_CTRL1          (UART1_BASEESS + 0x10)
#define HW_UART1_CTRL2          (UART1_BASEESS + 0x20)
#define HW_UART1_LINECTRL       (UART1_BASEESS + 0x30)
#define HW_UART1_INTR           (UART1_BASEESS + 0x40)
#define HW_UART1_DATA           (UART1_BASEESS + 0x50)
#define HW_UART1_STAT           (UART1_BASEESS + 0x60)
#define HW_UART1_DEBUG          (UART1_BASEESS + 0x70)
#define HW_UART1_ILPR           (UART1_BASEESS + 0x80)
#define HW_UART1_RS485CTRL      (UART1_BASEESS + 0x90)
#define HW_UART1_RS485ADRMATCH  (UART1_BASEESS + 0xa0)
#define HW_UART1_RS485DLY       (UART1_BASEESS + 0xb0)
#define HW_UART1_AUTOBAUD       (UART1_BASEESS + 0xc0)
#define HW_UART1_CTRL3          (UART1_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART2
#define UART2_BASEESS  0x80008000

#define HW_UART2_CTRL0          (UART2_BASEESS + 0x00)
#define HW_UART2_CTRL1          (UART2_BASEESS + 0x10)
#define HW_UART2_CTRL2          (UART2_BASEESS + 0x20)
#define HW_UART2_LINECTRL       (UART2_BASEESS + 0x30)
#define HW_UART2_INTR           (UART2_BASEESS + 0x40)
#define HW_UART2_DATA           (UART2_BASEESS + 0x50)
#define HW_UART2_STAT           (UART2_BASEESS + 0x60)
#define HW_UART2_DEBUG          (UART2_BASEESS + 0x70)
#define HW_UART2_ILPR           (UART2_BASEESS + 0x80)
#define HW_UART2_RS485CTRL      (UART2_BASEESS + 0x90)
#define HW_UART2_RS485ADRMATCH  (UART2_BASEESS + 0xa0)
#define HW_UART2_RS485DLY       (UART2_BASEESS + 0xb0)
#define HW_UART2_AUTOBAUD       (UART2_BASEESS + 0xc0)
#define HW_UART2_CTRL3          (UART2_BASEESS + 0xd0)


/////////////////////////////////////////////////////////
//UART3
#define UART3_BASEESS  0x8000c000

#define HW_UART3_CTRL0          (UART3_BASEESS + 0x00)
#define HW_UART3_CTRL1          (UART3_BASEESS + 0x10)
#define HW_UART3_CTRL2          (UART3_BASEESS + 0x20)
#define HW_UART3_LINECTRL       (UART3_BASEESS + 0x30)
#define HW_UART3_INTR           (UART3_BASEESS + 0x40)
#define HW_UART3_DATA           (UART3_BASEESS + 0x50)
#define HW_UART3_STAT           (UART3_BASEESS + 0x60)
#define HW_UART3_DEBUG          (UART3_BASEESS + 0x70)
#define HW_UART3_ILPR           (UART3_BASEESS + 0x80)
#define HW_UART3_RS485CTRL      (UART3_BASEESS + 0x90)
#define HW_UART3_RS485ADRMATCH  (UART3_BASEESS + 0xa0)
#define HW_UART3_RS485DLY       (UART3_BASEESS + 0xb0)
#define HW_UART3_AUTOBAUD       (UART3_BASEESS + 0xc0)
#define HW_UART3_CTRL3          (UART3_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART4
#define UART4_BASEESS  0x80010000

#define HW_UART4_CTRL0          (UART4_BASEESS + 0x00)
#define HW_UART4_CTRL1          (UART4_BASEESS + 0x10)
#define HW_UART4_CTRL2          (UART4_BASEESS + 0x20)
#define HW_UART4_LINECTRL       (UART4_BASEESS + 0x30)
#define HW_UART4_INTR           (UART4_BASEESS + 0x40)
#define HW_UART4_DATA           (UART4_BASEESS + 0x50)
#define HW_UART4_STAT           (UART4_BASEESS + 0x60)
#define HW_UART4_DEBUG          (UART4_BASEESS + 0x70)
#define HW_UART4_ILPR           (UART4_BASEESS + 0x80)
#define HW_UART4_RS485CTRL      (UART4_BASEESS + 0x90)
#define HW_UART4_RS485ADRMATCH  (UART4_BASEESS + 0xa0)
#define HW_UART4_RS485DLY       (UART4_BASEESS + 0xb0)
#define HW_UART4_AUTOBAUD       (UART4_BASEESS + 0xc0)
#define HW_UART4_CTRL3          (UART4_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART5
#define UART5_BASEESS  0x80014000

#define HW_UART5_CTRL0          (UART5_BASEESS + 0x00)
#define HW_UART5_CTRL1          (UART5_BASEESS + 0x10)
#define HW_UART5_CTRL2          (UART5_BASEESS + 0x20)
#define HW_UART5_LINECTRL       (UART5_BASEESS + 0x30)
#define HW_UART5_INTR           (UART5_BASEESS + 0x40)
#define HW_UART5_DATA           (UART5_BASEESS + 0x50)
#define HW_UART5_STAT           (UART5_BASEESS + 0x60)
#define HW_UART5_DEBUG          (UART5_BASEESS + 0x70)
#define HW_UART5_ILPR           (UART5_BASEESS + 0x80)
#define HW_UART5_RS485CTRL      (UART5_BASEESS + 0x90)
#define HW_UART5_RS485ADRMATCH  (UART5_BASEESS + 0xa0)
#define HW_UART5_RS485DLY       (UART5_BASEESS + 0xb0)
#define HW_UART5_AUTOBAUD       (UART5_BASEESS + 0xc0)
#define HW_UART5_CTRL3          (UART5_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART6
#define UART6_BASEESS  0x80018000

#define HW_UART6_CTRL0          (UART6_BASEESS + 0x00)
#define HW_UART6_CTRL1          (UART6_BASEESS + 0x10)
#define HW_UART6_CTRL2          (UART6_BASEESS + 0x20)
#define HW_UART6_LINECTRL       (UART6_BASEESS + 0x30)
#define HW_UART6_INTR           (UART6_BASEESS + 0x40)
#define HW_UART6_DATA           (UART6_BASEESS + 0x50)
#define HW_UART6_STAT           (UART6_BASEESS + 0x60)
#define HW_UART6_DEBUG          (UART6_BASEESS + 0x70)
#define HW_UART6_ILPR           (UART6_BASEESS + 0x80)
#define HW_UART6_RS485CTRL      (UART6_BASEESS + 0x90)
#define HW_UART6_RS485ADRMATCH  (UART6_BASEESS + 0xa0)
#define HW_UART6_RS485DLY       (UART6_BASEESS + 0xb0)
#define HW_UART6_AUTOBAUD       (UART6_BASEESS + 0xc0)
#define HW_UART6_CTRL3          (UART6_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART7
#define UART7_BASEESS  0x8001c000

#define HW_UART7_CTRL0          (UART7_BASEESS + 0x00)
#define HW_UART7_CTRL1          (UART7_BASEESS + 0x10)
#define HW_UART7_CTRL2          (UART7_BASEESS + 0x20)
#define HW_UART7_LINECTRL       (UART7_BASEESS + 0x30)
#define HW_UART7_INTR           (UART7_BASEESS + 0x40)
#define HW_UART7_DATA           (UART7_BASEESS + 0x50)
#define HW_UART7_STAT           (UART7_BASEESS + 0x60)
#define HW_UART7_DEBUG          (UART7_BASEESS + 0x70)
#define HW_UART7_ILPR           (UART7_BASEESS + 0x80)
#define HW_UART7_RS485CTRL      (UART7_BASEESS + 0x90)
#define HW_UART7_RS485ADRMATCH  (UART7_BASEESS + 0xa0)
#define HW_UART7_RS485DLY       (UART7_BASEESS + 0xb0)
#define HW_UART7_AUTOBAUD       (UART7_BASEESS + 0xc0)
#define HW_UART7_CTRL3          (UART7_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART8
#define UART8_BASEESS  0x80020000

#define HW_UART8_CTRL0          (UART8_BASEESS + 0x00)
#define HW_UART8_CTRL1          (UART8_BASEESS + 0x10)
#define HW_UART8_CTRL2          (UART8_BASEESS + 0x20)
#define HW_UART8_LINECTRL       (UART8_BASEESS + 0x30)
#define HW_UART8_INTR           (UART8_BASEESS + 0x40)
#define HW_UART8_DATA           (UART8_BASEESS + 0x50)
#define HW_UART8_STAT           (UART8_BASEESS + 0x60)
#define HW_UART8_DEBUG          (UART8_BASEESS + 0x70)
#define HW_UART8_ILPR           (UART8_BASEESS + 0x80)
#define HW_UART8_RS485CTRL      (UART8_BASEESS + 0x90)
#define HW_UART8_RS485ADRMATCH  (UART8_BASEESS + 0xa0)
#define HW_UART8_RS485DLY       (UART8_BASEESS + 0xb0)
#define HW_UART8_AUTOBAUD       (UART8_BASEESS + 0xc0)
#define HW_UART8_CTRL3          (UART8_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//UART9
#define UART9_BASEESS  0x80024000

#define HW_UART9_CTRL0          (UART9_BASEESS + 0x00)
#define HW_UART9_CTRL1          (UART9_BASEESS + 0x10)
#define HW_UART9_CTRL2          (UART9_BASEESS + 0x20)
#define HW_UART9_LINECTRL       (UART9_BASEESS + 0x30)
#define HW_UART9_INTR           (UART9_BASEESS + 0x40)
#define HW_UART9_DATA           (UART9_BASEESS + 0x50)
#define HW_UART9_STAT           (UART9_BASEESS + 0x60)
#define HW_UART9_DEBUG          (UART9_BASEESS + 0x70)
#define HW_UART9_ILPR           (UART9_BASEESS + 0x80)
#define HW_UART9_RS485CTRL      (UART9_BASEESS + 0x90)
#define HW_UART9_RS485ADRMATCH  (UART9_BASEESS + 0xa0)
#define HW_UART9_RS485DLY       (UART9_BASEESS + 0xb0)
#define HW_UART9_AUTOBAUD       (UART9_BASEESS + 0xc0)
#define HW_UART9_CTRL3          (UART9_BASEESS + 0xd0)

/////////////////////////////////////////////////////////
//RTC
#define  HW_RTC_ILR        0x800A0000
#define  HW_RTC_CCR        0x800A0008
#define  HW_RTC_CIIR       0x800A000c
#define  HW_RTC_AMR        0x800A0010
#define  HW_RTC_CTIME0     0x800A0014
#define  HW_RTC_CTIME1     0x800A0018
#define  HW_RTC_CTIME2     0x800A001c
#define  HW_RTC_SEC        0x800A0020
#define  HW_RTC_MIN        0x800A0024
#define  HW_RTC_HOUR       0x800A0028
#define  HW_RTC_DOM        0x800A002c
#define  HW_RTC_DOW        0x800A0030
#define  HW_RTC_DOY        0x800A0034
#define  HW_RTC_MONTH      0x800A0038
#define  HW_RTC_YEAR       0x800A003c
#define  HW_RTC_CAL        0x800A0040
#define  HW_RTC_GP0        0x800A0044
#define  HW_RTC_GP1        0x800A0048
#define  HW_RTC_GP2        0x800A004c
#define  HW_RTC_GP3        0x800A0050
#define  HW_RTC_GP4        0x800A0054
#define  HW_RTC_ALSEC      0x800A0060
#define  HW_RTC_ALMIN      0x800A0064
#define  HW_RTC_ALHOUR     0x800A0068
#define  HW_RTC_ALDOM      0x800A006c
#define  HW_RTC_ALDOW      0x800A0070
#define  HW_RTC_ALDOY      0x800A0074
#define  HW_RTC_ALMONTH    0x800A0078
#define  HW_RTC_ALYEAR     0x800A007c
#define  HW_RTC_ALARM      0x800A0080

/////////////////////////////////////////////////////////
//CT32b0

#define TIMER0_BASE_ADDRESS   0x80088000
#define HW_TIMER0_IR                0x80088000
#define HW_TIMER0_TCR               0x80088010
#define HW_TIMER0_DIR               0x80088020
#define HW_TIMER0_TC0               0x80088030
#define HW_TIMER0_TC1               0x80088040
#define HW_TIMER0_TC2               0x80088050
#define HW_TIMER0_TC3               0x80088060
#define HW_TIMER0_PR                0x80088070
#define HW_TIMER0_PC                0x80088080
#define HW_TIMER0_MCR               0x80088090
#define HW_TIMER0_MR0               0x800880a0
#define HW_TIMER0_MR1               0x800880b0
#define HW_TIMER0_MR2               0x800880C0
#define HW_TIMER0_MR3               0x800880D0
#define HW_TIMER0_CCR               0x800880E0
#define HW_TIMER0_CR0               0x800880F0
#define HW_TIMER0_CR1               0x80088100
#define HW_TIMER0_CR2               0x80088110
#define HW_TIMER0_CR3               0x80088120
#define HW_TIMER0_EMR               0x80088130
#define HW_TIMER0_PWMTH0            0x80088140
#define HW_TIMER0_PWMTH1            0x80088150
#define HW_TIMER0_PWMTH2            0x80088160
#define HW_TIMER0_PWMTH3            0x80088170
#define HW_TIMER0_CTCR              0x80088180
#define HW_TIMER0_PWMC              0x80088190


/////////////////////////////////////////////////////////
//CT32b1

#define TIMER1_BASE_ADDRESS   0x8008C000
#define HW_TIMER1_IR                0x8008C000
#define HW_TIMER1_TCR               0x8008C010
#define HW_TIMER1_DIR               0x8008C020
#define HW_TIMER1_TC0               0x8008C030
#define HW_TIMER1_TC1               0x8008C040
#define HW_TIMER1_TC2               0x8008C050
#define HW_TIMER1_TC3               0x8008C060
#define HW_TIMER1_PR                0x8008C070
#define HW_TIMER1_PC                0x8008C080
#define HW_TIMER1_MCR               0x8008C090
#define HW_TIMER1_MR0               0x8008C0a0
#define HW_TIMER1_MR1               0x8008C0b0
#define HW_TIMER1_MR2               0x8008C0c0
#define HW_TIMER1_MR3               0x8008C0d0
#define HW_TIMER1_CCR               0x8008C0e0
#define HW_TIMER1_CR0               0x8008C0f0
#define HW_TIMER1_CR1               0x8008C100
#define HW_TIMER1_CR2               0x8008C110
#define HW_TIMER1_CR3               0x8008C120
#define HW_TIMER1_EMR               0x8008C130
#define HW_TIMER1_PWMTH0            0x8008C140
#define HW_TIMER1_PWMTH1            0x8008C150
#define HW_TIMER1_PWMTH2            0x8008C160
#define HW_TIMER1_PWMTH3            0x8008C170
#define HW_TIMER1_CTCR              0x8008C180
#define HW_TIMER1_PWMC              0x8008C190

/////////////////////////////////////////////////////////
//CT32b2

#define TIMER2_BASE_ADDRESS   0x80090000
#define HW_TIMER2_IR                0x80090000
#define HW_TIMER2_TCR               0x80090010
#define HW_TIMER2_DIR               0x80090020
#define HW_TIMER2_TC0               0x80090030
#define HW_TIMER2_TC1               0x80090040
#define HW_TIMER2_TC2               0x80090050
#define HW_TIMER2_TC3               0x80090060
#define HW_TIMER2_PR                0x80090070
#define HW_TIMER2_PC                0x80090080
#define HW_TIMER2_MCR               0x80090090
#define HW_TIMER2_MR0               0x800900a0
#define HW_TIMER2_MR1               0x800900b0
#define HW_TIMER2_MR2               0x800900c0
#define HW_TIMER2_MR3               0x800900d0
#define HW_TIMER2_CCR               0x800900e0
#define HW_TIMER2_CR0               0x800900f0
#define HW_TIMER2_CR1               0x80090100
#define HW_TIMER2_CR2               0x80090110
#define HW_TIMER2_CR3               0x80090120
#define HW_TIMER2_EMR               0x80090130
#define HW_TIMER2_PWMTH0            0x80090140
#define HW_TIMER2_PWMTH1            0x80090150
#define HW_TIMER2_PWMTH2            0x80090160
#define HW_TIMER2_PWMTH3            0x80090170
#define HW_TIMER2_CTCR              0x80090180
#define HW_TIMER2_PWMC              0x80090190


/////////////////////////////////////////////////////////
//CT32b3

#define TIMER3_BASE_ADDRESS   0x80094000
#define HW_TIMER3_IR                0x80094000
#define HW_TIMER3_TCR               0x80094010
#define HW_TIMER3_DIR               0x80094020
#define HW_TIMER3_TC0               0x80094030
#define HW_TIMER3_TC1               0x80094040
#define HW_TIMER3_TC2               0x80094050
#define HW_TIMER3_TC3               0x80094060
#define HW_TIMER3_PR                0x80094070
#define HW_TIMER3_PC                0x80094080
#define HW_TIMER3_MCR               0x80094090
#define HW_TIMER3_MR0               0x800940a0
#define HW_TIMER3_MR1               0x800940b0
#define HW_TIMER3_MR2               0x800940c0
#define HW_TIMER3_MR3               0x800940d0
#define HW_TIMER3_CCR               0x800940e0
#define HW_TIMER3_CR0               0x800940f0
#define HW_TIMER3_CR1               0x80094100
#define HW_TIMER3_CR2               0x80094110
#define HW_TIMER3_CR3               0x80094120
#define HW_TIMER3_EMR               0x80094130
#define HW_TIMER3_PWMTH0            0x80094140
#define HW_TIMER3_PWMTH1            0x80094150
#define HW_TIMER3_PWMTH2            0x80094160
#define HW_TIMER3_PWMTH3            0x80094170
#define HW_TIMER3_CTCR              0x80094180
#define HW_TIMER3_PWMC              0x80094190


/////////////////////////////////////////////////////////
//QEI

#define QEI_BASE_ADDRESS          0x80058000
#define HW_QEI_CON                0x80058000
#define HW_QEI_CON_SET            0x80058004
#define HW_QEI_CON_CLR            0x80058008
#define HW_QEI_CONF               0x8005800C
#define HW_QEI_CONF_SET           0x80058010
#define HW_QEI_CONF_CLR           0x80058014
#define HW_QEI_STAT               0x80058018
#define HW_QEI_POS                0x8005801C
#define HW_QEI_MAXPSOS            0x80058020
#define HW_QEI_CMPOS0             0x80058024
#define HW_QEI_CMPOS1             0x80058028
#define HW_QEI_CMPOS2             0x8005802C
#define HW_QEI_INXCNT             0x80058030
#define HW_QEI_INXCMP             0x80058034
#define HW_QEI_LOAD               0x80058038
#define HW_QEI_TIME               0x8005803C
#define HW_QEI_VEL                0x80058040
#define HW_QEI_CAP                0x80058044
#define HW_QEI_VELCOMP            0x80058048
#define HW_QEI_FILTER             0x8005804C
#define HW_QEI_INTSTAT            0x80058050
#define HW_QEI_INTSTAT_SET        0x80058054
#define HW_QEI_INTSTAT_CLR        0x80058058
#define HW_QEI_INTEN              0x8005805C
#define HW_QEI_INTEN_SET          0x80058060
#define HW_QEI_INTEN_CLR          0x80058064


/////////////////////////////////////////////////////////
//MCPWM

#define MCPWM_BASE_ADDRESS        0x8005C000
#define HW_MCPWM_CON              0x8005C000
#define HW_MCPWM_CON_SET          0x8005C004
#define HW_MCPWM_CON_CLR          0x8005C008
#define HW_MCPWM_CAPCON           0x8005C00C
#define HW_MCPWM_CAPCON_SET       0x8005C010
#define HW_MCPWM_CAPCON_CLR       0x8005C014
#define HW_MCPWM_TC0              0x8005C018
#define HW_MCPWM_TC1              0x8005C01C
#define HW_MCPWM_TC2              0x8005C020
#define HW_MCPWM_LIM0             0x8005C024
#define HW_MCPWM_LIM1             0x8005C028
#define HW_MCPWM_LIM2             0x8005C02C
#define HW_MCPWM_MAT0             0x8005C030
#define HW_MCPWM_MAT1             0x8005C034
#define HW_MCPWM_MAT2             0x8005C038
#define HW_MCPWM_DT               0x8005C03C
#define HW_MCPWM_CCP              0x8005C040
#define HW_MCPWM_CAP0             0x8005C044
#define HW_MCPWM_CAP1             0x8005C048
#define HW_MCPWM_CAP2             0x8005C04C
#define HW_MCPWM_INTEN            0x8005C050
#define HW_MCPWM_INTEN_SET        0x8005C054
#define HW_MCPWM_INTEN_CLR        0x8005C058
#define HW_MCPWM_CNTCON           0x8005C05C
#define HW_MCPWM_CNTCON_SET       0x8005C060
#define HW_MCPWM_CNTCON_CLR       0x8005C064
#define HW_MCPWM_INTF             0x8005C068
#define HW_MCPWM_INTF_SET         0x8005C06C
#define HW_MCPWM_INTF_CLR         0x8005C070
#define HW_MCPWM_CAP_CLR          0x8005C074
#define HW_MCPWM_HALL             0x8005C078
#define HW_MCPWM_HALLS            0x8005C07C
#define HW_MCPWM_HALL_VEL_CMP     0x8005C080
#define HW_MCPWM_HALL_VEL_VAL     0x8005C084
#define HW_MCPWM_HALL_VEL_TH      0x8005C088
#define HW_MCPWM_HALL_MCIST       0x8005C08C

/////////////////////////////////////////////////////////
//LCDIF

#define LCDIF_BASE_ADDRESS 0x80084000
#define HW_LCDIF_CTRL        0x80084000
#define HW_LCDIF_CTRL_COUNT	0x80084010
#define HW_LCDIF_TIMING        0x80084020
#define HW_LCDIF_DATA       0x80084030
#define HW_LCDIF_DEBUG         0x80084040

/////////////////////////////////////////////////////////
//DAC

#define DAC_BASE_ADDRESS      0x800A8000
#define HW_DAC_CTRL           0x800A8000
#define HW_DAC_DATA0          0x800A8004
#define HW_DAC_DATA1          0x800A8008
#define HW_DAC_CNT0           0x800A800c
#define HW_DAC_CNT1           0x800A8010


/////////////////////////////////////////////////////////////////
/*LRADC0*/
//*************The order was changed************************//
#define HW_LRADC_CTRL0          0x800A4000
#define HW_LRADC_CTRL0_SET      0x800A4004 
#define HW_LRADC_CTRL0_CLR      0x800A4008
#define HW_LRADC_CTRL0_TOG      0x800A400C

#define HW_LRADC_CTRL1          0x800A4010
#define HW_LRADC_CTRL1_SET      0x800A4014 
#define HW_LRADC_CTRL1_CLR      0x800A4018
#define HW_LRADC_CTRL1_TOG      0x800A401C

#define HW_LRADC_CTRL2          0x800A4020
#define HW_LRADC_CTRL2_SET      0x800A4024 
#define HW_LRADC_CTRL2_CLR      0x800A4028
#define HW_LRADC_CTRL2_TOG      0x800A402C

#define HW_LRADC_CTRL3          0x800A4030
#define HW_LRADC_CTRL3_SET      0x800A4034 
#define HW_LRADC_CTRL3_CLR      0x800A4038
#define HW_LRADC_CTRL3_TOG      0x800A403C

#define HW_LRADC_STATUS         0x800A4040
#define HW_LRADC_STATUS_SET     0x800A4044
#define HW_LRADC_STATUS_CLR     0x800A4048
#define HW_LRADC_STATUS_TOG     0x800A404C

#define	HW_LRADC_CH0            0x800A4050
#define	HW_LRADC_CH0_CLR  	0x800A4058
#define	HW_LRADC_CH0_SET  	0x800A4054
#define	HW_LRADC_CH0_TOG  	0x800A405C 

#define	HW_LRADC_CH1            0x800A4060
#define	HW_LRADC_CH1_CLR  	0x800A4068
#define	HW_LRADC_CH1_SET  	0x800A4064
#define	HW_LRADC_CH1_TOG  	0x800A406C 

#define	HW_LRADC_CH2            0x800A4070
#define	HW_LRADC_CH2_CLR  	0x800A4078
#define	HW_LRADC_CH2_SET  	0x800A4074
#define	HW_LRADC_CH2_TOG  	0x800A407C 

#define	HW_LRADC_CH3            0x800A4080
#define	HW_LRADC_CH3_CLR  	0x800A4088
#define	HW_LRADC_CH3_SET  	0x800A4084
#define	HW_LRADC_CH3_TOG  	0x800A408C  

#define	HW_LRADC_CH4            0x800A4090
#define	HW_LRADC_CH4_CLR  	0x800A4098
#define	HW_LRADC_CH4_SET  	0x800A4094
#define	HW_LRADC_CH4_TOG  	0x800A409C 

#define	HW_LRADC_CH5            0x800A40A0
#define	HW_LRADC_CH5_CLR  	0x800A40A8
#define	HW_LRADC_CH5_SET  	0x800A40A4
#define	HW_LRADC_CH5_TOG  	0x800A40AC

#define	HW_LRADC_CH6            0x800A40B0
#define	HW_LRADC_CH6_CLR  	0x800A40B8
#define	HW_LRADC_CH6_SET  	0x800A40B4
#define	HW_LRADC_CH6_TOG  	0x800A40BC

#define	HW_LRADC_CH7            0x800A40C0 
#define	HW_LRADC_CH7_CLR  	0x800A40C8 
#define	HW_LRADC_CH7_SET  	0x800A40C4 
#define	HW_LRADC_CH7_TOG  	0x800A40CC

#define	HW_LRADC_DELAY0         0x800A40D0 
#define	HW_LRADC_DELAY0_CLR     0x800A40D8 
#define	HW_LRADC_DELAY0_SET     0x800A40D4 
#define	HW_LRADC_DELAY0_TOG     0x800A40DC

#define	HW_LRADC_DELAY1         0x800A40E0
#define	HW_LRADC_DELAY1_CLR     0x800A40E8
#define	HW_LRADC_DELAY1_SET     0x800A40E4
#define	HW_LRADC_DELAY1_TOG     0x800A40EC

#define	HW_LRADC_DELAY2  	0x800A40F0
#define	HW_LRADC_DELAY2_CLR     0x800A40F8
#define	HW_LRADC_DELAY2_SET     0x800A40F4
#define	HW_LRADC_DELAY2_TOG     0x800A40FC 

#define	HW_LRADC_DELAY3  	0x800A4100
#define	HW_LRADC_DELAY3_CLR     0x800A4108
#define	HW_LRADC_DELAY3_SET     0x800A4104
#define	HW_LRADC_DELAY3_TOG     0x800A410C 

#define	HW_LRADC_DEBUG0  	0x800A4110
#define	HW_LRADC_DEBUG0_CLR     0x800A4118
#define	HW_LRADC_DEBUG0_SET     0x800A4114
#define	HW_LRADC_DEBUG0_TOG     0x800A411C 

#define	HW_LRADC_DEBUG1  	0x800A4120
#define	HW_LRADC_DEBUG1_CLR     0x800A4128
#define	HW_LRADC_DEBUG1_SET     0x800A4124
#define	HW_LRADC_DEBUG1_TOG     0x800A412C 

#define	HW_LRADC_CONVERSION     0x800A4130
#define	HW_LRADC_CONVERSION_CLR 0x800A4138
#define	HW_LRADC_CONVERSION_SET 0x800A4134
#define	HW_LRADC_CONVERSION_TOG 0x800A413C


/////////////////////////////////////////////////////////
//WD

#define WATCHDOG_BASE_ADDRESS   0x80048000
#define HW_WATCHDOG_WDMOD           0x80048000
#define HW_WATCHDOG_WDTC            0x80048004
#define HW_WATCHDOG_WDFEED          0x80048008
#define HW_WATCHDOG_WDTV            0x8004800C

/////////////////////////////////////////////////////////
//IOCON
#define HW_IOCON_PIO_BASE	HW_IOCON_PIO0_0

#define HW_IOCON_PIO0_0        0x80044000
#define HW_IOCON_PIO0_1        0x80044004
#define HW_IOCON_PIO0_2        0x80044008
#define HW_IOCON_PIO0_3        0x8004400C
#define HW_IOCON_PIO0_4        0x80044010
#define HW_IOCON_PIO0_5        0x80044014
#define HW_IOCON_PIO0_6        0x80044018 
#define HW_IOCON_PIO0_7        0x8004401c
#define HW_IOCON_PIO1_0        0x80044020
#define HW_IOCON_PIO1_1        0x80044024
#define HW_IOCON_PIO1_2        0x80044028
#define HW_IOCON_PIO1_3        0x8004402c
#define HW_IOCON_PIO1_4        0x80044030
#define HW_IOCON_PIO1_5        0x80044034
#define HW_IOCON_PIO1_6        0x80044038
#define HW_IOCON_PIO1_7        0x8004403c
#define HW_IOCON_PIO2_0        0x80044040
#define HW_IOCON_PIO2_1        0x80044044
#define HW_IOCON_PIO2_2        0x80044048
#define HW_IOCON_PIO2_3        0x8004404c
#define HW_IOCON_PIO2_4        0x80044050
#define HW_IOCON_PIO2_5        0x80044054
#define HW_IOCON_PIO2_6        0x80044058
#define HW_IOCON_PIO2_7        0x8004405c
#define HW_IOCON_PIO3_0        0x80044060
#define HW_IOCON_PIO3_1        0x80044064
#define HW_IOCON_PIO3_2        0x80044068
#define HW_IOCON_PIO3_3        0x8004406c
#define HW_IOCON_PIO3_4        0x80044070
#define HW_IOCON_PIO3_5        0x80044074
#define HW_IOCON_PIO3_6        0x80044078
#define HW_IOCON_PIO3_7        0x8004407c
#define HW_IOCON_PIO4_0        0x80044080
#define HW_IOCON_PIO4_1        0x80044084
#define HW_IOCON_PIO4_2        0x80044088
#define HW_IOCON_PIO4_3        0x8004408c
#define HW_IOCON_PIO4_4        0x80044090
#define HW_IOCON_PIO4_5        0x80044094
#define HW_IOCON_PIO4_6        0x80044098
#define HW_IOCON_PIO4_7        0x8004409c
#define HW_IOCON_PIO5_0        0x800440a0
#define HW_IOCON_PIO5_1        0x800440a4
#define HW_IOCON_PIO5_2        0x800440a8
#define HW_IOCON_PIO5_3        0x800440ac
#define HW_IOCON_PIO5_4        0x800440b0
#define HW_IOCON_PIO5_5        0x800440b4
#define HW_IOCON_PIO5_6        0x800440b8
#define HW_IOCON_PIO5_7        0x800440bc
#define HW_IOCON_PIO6_0        0x800440c0
#define HW_IOCON_PIO6_1        0x800440c4
#define HW_IOCON_PIO6_2        0x800440c8
#define HW_IOCON_PIO6_3        0x800440cc
#define HW_IOCON_PIO6_4        0x800440d0
#define HW_IOCON_PIO6_5        0x800440d4
#define HW_IOCON_PIO6_6        0x800440d8
#define HW_IOCON_PIO6_7        0x800440dc
#define HW_IOCON_PIO7_0        0x800440e0
#define HW_IOCON_PIO7_1        0x800440e4
#define HW_IOCON_PIO7_2        0x800440e8
#define HW_IOCON_PIO7_3        0x800440ec
#define HW_IOCON_PIO7_4        0x800440f0
#define HW_IOCON_PIO7_5        0x800440f4
#define HW_IOCON_PIO7_6        0x800440f8
#define HW_IOCON_PIO7_7        0x800440fc
#define HW_IOCON_PIO8_0        0x80044100
#define HW_IOCON_PIO8_1        0x80044104
#define HW_IOCON_PIO8_2        0x80044108
#define HW_IOCON_PIO8_3        0x8004410c
#define HW_IOCON_PIO8_4        0x80044110
#define HW_IOCON_PIO8_5        0x80044114
#define HW_IOCON_PIO8_6        0x80044118
#define HW_IOCON_PIO8_7        0x8004411c
#define HW_IOCON_PIO9_0        0x80044120
#define HW_IOCON_PIO9_1        0x80044124
#define HW_IOCON_PIO9_2        0x80044128
#define HW_IOCON_PIO9_3        0x8004412c
#define HW_IOCON_PIO9_4        0x80044130
#define HW_IOCON_PIO9_5        0x80044134
#define HW_IOCON_PIO9_6        0x80044138
#define HW_IOCON_PIO9_7        0x8004413c
#define HW_IOCON_PIO10_0       0x80044140
#define HW_IOCON_PIO10_1       0x80044144
#define HW_IOCON_PIO10_2       0x80044148
#define HW_IOCON_PIO10_3       0x8004414c
#define HW_IOCON_PIO10_4       0x80044150
#define HW_IOCON_PIO10_5       0x80044154
#define HW_IOCON_PIO10_6       0x80044158
#define HW_IOCON_PIO10_7       0x8004415c

#define HW_IOCON_PIO11_0       0x80044160
#define HW_IOCON_PIO11_1       0x80044164
#define HW_IOCON_PIO11_2       0x80044168
#define HW_IOCON_PIO11_3       0x8004416c
#define HW_IOCON_PIO11_4       0x80044170
#define HW_IOCON_PIO11_5       0x80044174
#define HW_IOCON_PIO11_6       0x80044178
#define HW_IOCON_PIO11_7       0x8004417c

#define HW_IOCON_PIO12_0       0x80044180
#define HW_IOCON_PIO12_1       0x80044184
#define HW_IOCON_PIO12_2       0x80044188
#define HW_IOCON_PIO12_3       0x8004418c
#define HW_IOCON_PIO12_4       0x80044190
#define HW_IOCON_PIO12_5       0x80044194
#define HW_IOCON_PIO12_6       0x80044198
#define HW_IOCON_PIO12_7       0x8004419c

#define HW_IOCON_PIO13_0       0x800441a0
#define HW_IOCON_PIO13_1       0x800441a4
#define HW_IOCON_PIO13_2       0x800441a8
#define HW_IOCON_PIO13_3       0x800441ac
#define HW_IOCON_PIO13_4       0x800441b0
#define HW_IOCON_PIO13_5       0x800441b4
#define HW_IOCON_PIO13_6       0x800441b8
#define HW_IOCON_PIO13_7       0x800441bc

#define HW_IOCON_PIO14_0       0x800441c0
#define HW_IOCON_PIO14_1       0x800441c4
#define HW_IOCON_PIO14_2       0x800441c8
#define HW_IOCON_PIO14_3       0x800441cc
#define HW_IOCON_PIO14_4       0x800441d0
#define HW_IOCON_PIO14_5       0x800441d4
#define HW_IOCON_PIO14_6       0x800441d8
#define HW_IOCON_PIO14_7       0x800441dc

#define HW_IOCON_PIO15_0       0x800441e0
#define HW_IOCON_PIO15_1       0x800441e4
#define HW_IOCON_PIO15_2       0x800441e8
#define HW_IOCON_PIO15_3       0x800441ec
#define HW_IOCON_PIO15_4       0x800441f0
#define HW_IOCON_PIO15_5       0x800441f4
#define HW_IOCON_PIO15_6       0x800441f8
#define HW_IOCON_PIO15_7       0x800441fc

#define HW_IOCON_PIO16_0       0x80044200
#define HW_IOCON_PIO16_1       0x80044204
#define HW_IOCON_PIO16_2       0x80044208
#define HW_IOCON_PIO16_3       0x8004420c
#define HW_IOCON_PIO16_4       0x80044210
#define HW_IOCON_PIO16_5       0x80044214
#define HW_IOCON_PIO16_6       0x80044218
#define HW_IOCON_PIO16_7       0x8004421c

#define HW_IOCON_PIO17_0       0x80044220
#define HW_IOCON_PIO17_1       0x80044224
#define HW_IOCON_PIO17_2       0x80044228
#define HW_IOCON_PIO17_3       0x8004422c
#define HW_IOCON_PIO17_4       0x80044230
#define HW_IOCON_PIO17_5       0x80044234
#define HW_IOCON_PIO17_6       0x80044238
#define HW_IOCON_PIO17_7       0x8004423c

#define HW_IOCON_SCKLOC        0x800442c0
     
/////////////////////////////////////////////////////////
//HSPI0

#define HSPI0_BASE_ADDRESS 0x80060000
#define HW_HSPI0_CTRL0        0x80060000
#define HW_HSPI0_CTRL1        0x80060010
#define HW_HSPI0_TIMING       0x80060020
#define HW_HSPI0_DATA         0x80060030
#define HW_HSPI0_STATUS       0x80060040
#define HW_HSPI0_DEBUG0       0x80060050
#define HW_HSPI0_XFER     	0x80060060

/////////////////////////////////////////////////////////
//HSPI1

#define HSPI1_BASE_ADDRESS 0x80064000
#define HW_HSPI1_CTRL0        0x80064000
#define HW_HSPI1_CTRL1        0x80064010
#define HW_HSPI1_TIMING       0x80064020
#define HW_HSPI1_DATA         0x80064030
#define HW_HSPI1_STATUS       0x80064040
#define HW_HSPI1_DEBUG0       0x80064050
#define HW_HSPI1_XFER         0x80064060

/////////////////////////////////////////////////////////
//Quad-SPI0

#define QSPI0_BASE_ADDRESS 0x80068000
#define HW_QSPI0_CTRL0        0x80068000
#define HW_QSPI0_CTRL1        0x80068010
#define HW_QSPI0_CMD          0x80068020
#define HW_QSPI0_TIMING       0x80068030
#define HW_QSPI0_DATA         0x80068040
#define HW_QSPI0_STATUS       0x80068050
#define HW_QSPI0_DEBUG0       0x80068060
#define HW_QSPI0_XFER         0x80068070

/////////////////////////////////////////////////////////
//HSD0

#define HSD_BASE_ADDRESS     0x8006C000
#define HW_HSD_CTRL0             0x8006C000
#define HW_HSD_CMD0              0x8006C010
#define HW_HSD_CMD1              0x8006C020
#define HW_HSD_COMPREF           0x8006C030
#define HW_HSD_COMPMASK          0x8006C040
#define HW_HSD_TIMING            0x8006C050
#define HW_HSD_CTRL1             0x8006C060
#define HW_HSD_DATA              0x8006C070
#define HW_HSD_SDRESP0           0x8006C080
#define HW_HSD_SDRESP1           0x8006C090
#define HW_HSD_SDRESP2           0x8006C0A0
#define HW_HSD_SDRESP3           0x8006C0B0
#define HW_HSD_STATUS            0x8006C0C0
#define HW_HSD_DEBUG             0x8006C100
#define HW_HSD_XFER                0x8006c110



/////////////////////////////////////////////////////////
//HUART
#define HUART_BASEESS  0x80090000

#define HW_HUART_CTRL0          0x80090000
#define HW_HUART_CTRL1          0x80090010
#define HW_HUART_CTRL2          0x80090020
#define HW_HUART_LINECTRL       0x80090030
#define HW_HUART_INTR           0x80090040
#define HW_HUART_DATA           0x80090050
#define HW_HUART_STAT           0x80090060
#define HW_HUART_DEBUG          0x80090070
#define HW_HUART_ILPR           0x80090080
#define HW_HUART_RS485CTRL      0x80090090
#define HW_HUART_RS485ADRMATCH  0x800900a0
#define HW_HUART_RS485DLY       0x800900b0
#define HW_HUART_AUTOBAUD       0x800900c0

/////////////////////////////////////////////////////////
//I2S0
#define I2S0_BASE_ADDRESS 0x80028000

#define HW_I2S0_IER             0x80028000 
#define HW_I2S0_IRER            0x80028004
#define HW_I2S0_ITER            0x80028008 
#define HW_I2S0_CER             0x8002800c       
#define HW_I2S0_CCR             0x80028010 
#define HW_I2S0_RXFFR           0x80028014
#define HW_I2S0_TXFFR           0x80028018

#define HW_I2S0_LRBR0           0x80028020
#define HW_I2S0_LTHR0           0x80028020
#define HW_I2S0_RRBR0           0x80028024
#define HW_I2S0_RTHR0           0x80028024
#define HW_I2S0_RER0            0x80028028
#define HW_I2S0_TER0            0x8002802c
#define HW_I2S0_RCR0            0x80028030
#define HW_I2S0_TCR0            0x80028034
#define HW_I2S0_ISR0            0x80028038
#define HW_I2S0_IMR0            0x8002803C
#define HW_I2S0_ROR0            0x80028040
#define HW_I2S0_TOR0            0x80028044
#define HW_I2S0_RFCR0           0x80028048 
#define HW_I2S0_TFCR0           0x8002804c
#define HW_I2S0_RFF0            0x80028050
#define HW_I2S0_TFF0            0x80028054

#define HW_I2S0_LRBR1           0x80028060
#define HW_I2S0_LTHR1           0x80028060
#define HW_I2S0_RRBR1           0x80028064
#define HW_I2S0_RTHR1           0x80028064
#define HW_I2S0_RER1            0x80028068
#define HW_I2S0_TER1            0x8002806c
#define HW_I2S0_RCR1            0x80028070
#define HW_I2S0_TCR1            0x80028074
#define HW_I2S0_ISR1            0x80028078
#define HW_I2S0_IMR1            0x8002807C
#define HW_I2S0_ROR1            0x80028080
#define HW_I2S0_TOR1            0x80028084
#define HW_I2S0_RFCR1           0x80028088 
#define HW_I2S0_TFCR1           0x8002808c
#define HW_I2S0_RFF1            0x80028090
#define HW_I2S0_TFF1            0x80028094

#define HW_I2S0_LRBR2           0x800280a0
#define HW_I2S0_LTHR2           0x800280a0
#define HW_I2S0_RRBR2           0x800280a4
#define HW_I2S0_RTHR2           0x800280a4
#define HW_I2S0_RER2            0x800280a8
#define HW_I2S0_TER2            0x800280ac
#define HW_I2S0_RCR2            0x800280b0
#define HW_I2S0_TCR2            0x800280b4
#define HW_I2S0_ISR2            0x800280b8
#define HW_I2S0_IMR2            0x800280bC
#define HW_I2S0_ROR2            0x800280c0
#define HW_I2S0_TOR2            0x800280c4
#define HW_I2S0_RFCR2           0x800280c8 
#define HW_I2S0_TFCR2           0x800280cc
#define HW_I2S0_RFF2            0x800280d0
#define HW_I2S0_TFF2            0x800280d4

#define HW_I2S0_LRBR3           0x800280e0
#define HW_I2S0_LTHR3           0x800280e0
#define HW_I2S0_RRBR3           0x800280e4
#define HW_I2S0_RTHR3           0x800280e4
#define HW_I2S0_RER3            0x800280e8
#define HW_I2S0_TER3            0x800280ec
#define HW_I2S0_RCR3            0x800280f0
#define HW_I2S0_TCR3            0x800280f4
#define HW_I2S0_ISR3            0x800280f8
#define HW_I2S0_IMR3            0x800280fC
#define HW_I2S0_ROR3            0x80028100
#define HW_I2S0_TOR3            0x80028104
#define HW_I2S0_RFCR3           0x80028108 
#define HW_I2S0_TFCR3           0x8002810c
#define HW_I2S0_RFF3            0x80028110
#define HW_I2S0_TFF3            0x80028114

#define HW_I2S0_RXDMA           0x800281c0
#define HW_I2S0_RRXDMA          0x800281c4
#define HW_I2S0_TXDMA           0x800281c8
#define HW_I2S0_RTXDMA          0x800281cc

#define HW_I2S0_COMP_PARAM_2    0x800281f0
#define HW_I2S0_COMP_PARAM_1    0x800281f4
#define HW_I2S0_COMP_VERSION    0x800281f8
#define HW_I2S0_COMP_TYPE       0x800281fc

/////////////////////////////////////////////////////////
//I2S1
#define I2S1_BASE_ADDRESS       0x80070000

#define HW_I2S1_IER             I2S1_BASE_ADDRESS 
#define HW_I2S1_IRER            (I2S1_BASE_ADDRESS + 0x4)
#define HW_I2S1_ITER            (I2S1_BASE_ADDRESS + 0x8)
#define HW_I2S1_CER             (I2S1_BASE_ADDRESS + 0xc)       
#define HW_I2S1_CCR             (I2S1_BASE_ADDRESS + 0x10)
#define HW_I2S1_RXFFR           (I2S1_BASE_ADDRESS + 0x14)
#define HW_I2S1_TXFFR           (I2S1_BASE_ADDRESS + 0x18)

#define HW_I2S1_LRBR0           (I2S1_BASE_ADDRESS + 0x20)
#define HW_I2S1_LTHR0           (I2S1_BASE_ADDRESS + 0x20)
#define HW_I2S1_RRBR0           (I2S1_BASE_ADDRESS + 0x24)
#define HW_I2S1_RTHR0           (I2S1_BASE_ADDRESS + 0x24)
#define HW_I2S1_RER0            (I2S1_BASE_ADDRESS + 0x28)
#define HW_I2S1_TER0            (I2S1_BASE_ADDRESS + 0x2c)
#define HW_I2S1_RCR0            (I2S1_BASE_ADDRESS + 0x30)
#define HW_I2S1_TCR0            (I2S1_BASE_ADDRESS + 0x34)
#define HW_I2S1_ISR0            (I2S1_BASE_ADDRESS + 0x38)
#define HW_I2S1_IMR0            (I2S1_BASE_ADDRESS + 0x3c)
#define HW_I2S1_ROR0            (I2S1_BASE_ADDRESS + 0x40)
#define HW_I2S1_TOR0            (I2S1_BASE_ADDRESS + 0x44)
#define HW_I2S1_RFCR0           (I2S1_BASE_ADDRESS + 0x48)
#define HW_I2S1_TFCR0           (I2S1_BASE_ADDRESS + 0x4c)
#define HW_I2S1_RFF0            (I2S1_BASE_ADDRESS + 0x50)
#define HW_I2S1_TFF0            (I2S1_BASE_ADDRESS + 0x54)

#define HW_I2S1_LRBR1           (I2S1_BASE_ADDRESS + 0x60)
#define HW_I2S1_LTHR1           (I2S1_BASE_ADDRESS + 0x60)
#define HW_I2S1_RRBR1           (I2S1_BASE_ADDRESS + 0x64)
#define HW_I2S1_RTHR1           (I2S1_BASE_ADDRESS + 0x64)
#define HW_I2S1_RER1            (I2S1_BASE_ADDRESS + 0x68)
#define HW_I2S1_TER1            (I2S1_BASE_ADDRESS + 0x6c)
#define HW_I2S1_RCR1            (I2S1_BASE_ADDRESS + 0x70)
#define HW_I2S1_TCR1            (I2S1_BASE_ADDRESS + 0x74)
#define HW_I2S1_ISR1            (I2S1_BASE_ADDRESS + 0x78)
#define HW_I2S1_IMR1            (I2S1_BASE_ADDRESS + 0x7c)
#define HW_I2S1_ROR1            (I2S1_BASE_ADDRESS + 0x80)
#define HW_I2S1_TOR1            (I2S1_BASE_ADDRESS + 0x84)
#define HW_I2S1_RFCR1           (I2S1_BASE_ADDRESS + 0x88)
#define HW_I2S1_TFCR1           (I2S1_BASE_ADDRESS + 0x8c)
#define HW_I2S1_RFF1            (I2S1_BASE_ADDRESS + 0x90)
#define HW_I2S1_TFF1            (I2S1_BASE_ADDRESS + 0x94)

#define HW_I2S1_LRBR2           (I2S1_BASE_ADDRESS + 0xa0)
#define HW_I2S1_LTHR2           (I2S1_BASE_ADDRESS + 0xa0)
#define HW_I2S1_RRBR2           (I2S1_BASE_ADDRESS + 0xa4)
#define HW_I2S1_RTHR2           (I2S1_BASE_ADDRESS + 0xa4)
#define HW_I2S1_RER2            (I2S1_BASE_ADDRESS + 0xa8)
#define HW_I2S1_TER2            (I2S1_BASE_ADDRESS + 0xac)
#define HW_I2S1_RCR2            (I2S1_BASE_ADDRESS + 0xb0)
#define HW_I2S1_TCR2            (I2S1_BASE_ADDRESS + 0xb4)
#define HW_I2S1_ISR2            (I2S1_BASE_ADDRESS + 0xb8)
#define HW_I2S1_IMR2            (I2S1_BASE_ADDRESS + 0xbc)
#define HW_I2S1_ROR2            (I2S1_BASE_ADDRESS + 0xc0)
#define HW_I2S1_TOR2            (I2S1_BASE_ADDRESS + 0xc4)
#define HW_I2S1_RFCR2           (I2S1_BASE_ADDRESS + 0xc8)
#define HW_I2S1_TFCR2           (I2S1_BASE_ADDRESS + 0xcc)
#define HW_I2S1_RFF2            (I2S1_BASE_ADDRESS + 0xd0)
#define HW_I2S1_TFF2            (I2S1_BASE_ADDRESS + 0xd4)

#define HW_I2S1_LRBR3           (I2S1_BASE_ADDRESS + 0xe0)
#define HW_I2S1_LTHR3           (I2S1_BASE_ADDRESS + 0xe0)
#define HW_I2S1_RRBR3           (I2S1_BASE_ADDRESS + 0xe4)
#define HW_I2S1_RTHR3           (I2S1_BASE_ADDRESS + 0xe4)
#define HW_I2S1_RER3            (I2S1_BASE_ADDRESS + 0xe8)
#define HW_I2S1_TER3            (I2S1_BASE_ADDRESS + 0xec)
#define HW_I2S1_RCR3            (I2S1_BASE_ADDRESS + 0xf0)
#define HW_I2S1_TCR3            (I2S1_BASE_ADDRESS + 0xf4)
#define HW_I2S1_ISR3            (I2S1_BASE_ADDRESS + 0xf8)
#define HW_I2S1_IMR3            (I2S1_BASE_ADDRESS + 0xfc)
#define HW_I2S1_ROR3            (I2S1_BASE_ADDRESS + 0x100)
#define HW_I2S1_TOR3            (I2S1_BASE_ADDRESS + 0x104)
#define HW_I2S1_RFCR3           (I2S1_BASE_ADDRESS + 0x108)
#define HW_I2S1_TFCR3           (I2S1_BASE_ADDRESS + 0x10c)
#define HW_I2S1_RFF3            (I2S1_BASE_ADDRESS + 0x110)
#define HW_I2S1_TFF3            (I2S1_BASE_ADDRESS + 0x114)

#define HW_I2S1_RXDMA           (I2S1_BASE_ADDRESS + 0x1c0)
#define HW_I2S1_RRXDMA          (I2S1_BASE_ADDRESS + 0x1c4)
#define HW_I2S1_TXDMA           (I2S1_BASE_ADDRESS + 0x1c8)
#define HW_I2S1_RTXDMA          (I2S1_BASE_ADDRESS + 0x1cc)

#define HW_I2S1_COMP_PARAM_2    (I2S1_BASE_ADDRESS + 0x1f0)
#define HW_I2S1_COMP_PARAM_1    (I2S1_BASE_ADDRESS + 0x1f4)
#define HW_I2S1_COMP_VERSION    (I2S1_BASE_ADDRESS + 0x1f8)
#define HW_I2S1_COMP_TYPE       (I2S1_BASE_ADDRESS + 0x1fc)


/////////////////////////////////////////////////////////
//GPIO

#define GPIO_BASEESS       0x50000000
#define HW_GPIO_DATA_BASE 	0x50000000

#define HW_GPIO_DMA_CTRL        0x50000010
#define HW_GPIO_DMA_DATA        0x50000020
#define HW_GPIO_DMA_PADCTRL0    0x50000030
#define HW_GPIO_DMA_PADCTRL1    0x50000040
#define HW_GPIO_DMA_PADCTRL2    0x50000050


#define HW_GPIO_DATA0           0x50000000
#define HW_GPIO_DATA1           0x50010000
#define HW_GPIO_DATA2           0x50020000
#define HW_GPIO_DATA3           0x50030000
#define HW_GPIO_DIR0            0x50008000
#define HW_GPIO_DIR1            0x50018000
#define HW_GPIO_DIR2            0x50028000
#define HW_GPIO_DIR3            0x50038000
#define HW_GPIO_IS0             0x50008010
#define HW_GPIO_IS1             0x50018010
#define HW_GPIO_IS2             0x50028010
#define HW_GPIO_IS3             0x50038010
#define HW_GPIO_IBE0            0x50008020
#define HW_GPIO_IBE1            0x50018020
#define HW_GPIO_IBE2            0x50028020
#define HW_GPIO_IBE3            0x50038020
#define HW_GPIO_IEV0            0x50008030
#define HW_GPIO_IEV1            0x50018030
#define HW_GPIO_IEV2            0x50028030
#define HW_GPIO_IEV3            0x50038030
#define HW_GPIO_IE0             0x50008040
#define HW_GPIO_IE1             0x50018040
#define HW_GPIO_IE2             0x50028040
#define HW_GPIO_IE3             0x50038040
#define HW_GPIO_IRS0            0x50008050
#define HW_GPIO_IRS1            0x50018050
#define HW_GPIO_IRS2            0x50028050
#define HW_GPIO_IRS3            0x50038050
#define HW_GPIO_MIS0            0x50008060
#define HW_GPIO_MIS1            0x50018060
#define HW_GPIO_MIS2            0x50028060
#define HW_GPIO_MIS3            0x50038060
#define HW_GPIO_IC0             0x50008070
#define HW_GPIO_IC1             0x50018070
#define HW_GPIO_IC2             0x50028070
#define HW_GPIO_IC3             0x50038070 
#define HW_GPIO_DATAMASK0       0x50008080
#define HW_GPIO_DATAMASK1       0x50018080
#define HW_GPIO_DATAMASK2       0x50028080
#define HW_GPIO_DATAMASK3       0x50038080 

/////////////////////////////////////////////////////////////
//emi
#define	HW_EMI_SCONR            0x80700000    
#define	HW_EMI_STMG0R           0x80700004
#define	HW_EMI_STMG1R           0x80700008
#define	HW_EMI_SCTLR  	        0x8070000C
#define	HW_EMI_SREFR  	        0x80700010
#define	HW_EMI_SCSLR0_LOW       0x80700014
#define	HW_EMI_SCSLR1_LOW       0x80700018
#define	HW_EMI_SCSLR2_LOW       0x8070001c
#define	HW_EMI_SCSLR3_LOW       0x80700020
#define	HW_EMI_SCSLR4_LOW       0x80700024
#define	HW_EMI_SCSLR5_LOW       0x80700028
#define	HW_EMI_SCSLR6_LOW       0x8070002c
#define	HW_EMI_SCSLR7_LOW       0x80700030

#define	HW_EMI_SMSKR0           0x80700054
#define	HW_EMI_SMSKR1           0x80700058
#define	HW_EMI_SMSKR2           0x8070005c
#define	HW_EMI_SMSKR3           0x80700060
#define	HW_EMI_SMSKR4           0x80700064
#define	HW_EMI_SMSKR5           0x80700068
#define	HW_EMI_SMSKR6           0x8070006c
#define	HW_EMI_SMSKR7           0x80700070

#define	HW_EMI_CSALIAS0_LOW     0x80700074
#define HW_EMI_CSALIAS1_LOW     0x80700078

#define HW_EMI_CSREMAP0_LOW     0x80700084
#define HW_EMI_CSREMAP1_LOW     0x80700088

#define HW_EMI_SMTMGR_SET0      0x80700094
#define HW_EMI_SMTMGR_SET1      0x80700098
#define HW_EMI_SMTMGR_SET2      0x8070009c

#define HW_EMI_FLASH_TRPDR      0x807000a0
#define HW_EMI_SMCTLR           0x807000a4
#define	HW_EMI_EXN_MODE_REG     0x807000ac


/*USB0 PHY*/
#define HW_USBPHY0_PWD          0x80098000
#define HW_USBPHY0_PWD_SET      0x80098004
#define HW_USBPHY0_PWD_CLR      0x80098008
#define HW_USBPHY0_PWD_TOG      0x8009800C 

#define HW_USBPHY0_TX           0x80098010
#define HW_USBPHY0_TX_SET       0x80098014 
#define HW_USBPHY0_TX_CLR       0x80098018
#define HW_USBPHY0_TX_TOG       0x8009801C

#define HW_USBPHY0_RX           0x80098020
#define HW_USBPHY0_RX_SET       0x80098024
#define HW_USBPHY0_RX_CLR       0x80098028 
#define HW_USBPHY0_RX_TOG       0x8009802C

#define HW_USBPHY0_CTRL         0x80098030
#define HW_USBPHY0_CTRL_SET     0x80098034
#define HW_USBPHY0_CTRL_CLR     0x80098038
#define HW_USBPHY0_CTRL_TOG     0x8009803C

#define HW_USBPHY0_STATUS       0x80098040

#define HW_USBPHY0_DEBUG        0x80098050 
#define HW_USBPHY0_DEBUG_SET    0x80098054
#define HW_USBPHY0_DEBUG_CLR    0x80098058
#define HW_USBPHY0_DEBUG_TOG    0x8009805C

#define HW_USBPHY0_DEBUG0_STATUS        0x80098060
#define HW_USBPHY0_DEBUG1_STATUS        0x80098070
#define HW_USBPHY0_DEBUG2_STATUS        0x80098080

#define HW_USBPHY0_SYSCTRL        0x80098090 
#define HW_USBPHY0_SYSCTRL_SET    0x80098094
#define HW_USBPHY0_SYSCTRL_CLR    0x80098098
#define HW_USBPHY0_SYSCTRL_TOG    0x8009809C

#define HW_USBPHY0_ANALOG         0x800980A0
#define HW_USBPHY0_ANALOG_SET     0x800980A4
#define HW_USBPHY0_ANALOG_CLR     0x800980A8
#define HW_USBPHY0_ANALOG_TOG     0x800980AC 

#define HW_USBPHY0_5VCTRL        0x800980c0
#define HW_USBPHY0_SOFTOTGID     0X800980d0

/*USB1 PHY*/
#define HW_USBPHY1_PWD          0x8009c000
#define HW_USBPHY1_PWD_SET      0x8009c004
#define HW_USBPHY1_PWD_CLR      0x8009c008
#define HW_USBPHY1_PWD_TOG      0x8009c00C 

#define HW_USBPHY1_TX           0x8009c010
#define HW_USBPHY1_TX_SET       0x8009c014 
#define HW_USBPHY1_TX_CLR       0x8009c018
#define HW_USBPHY1_TX_TOG       0x8009c01C

#define HW_USBPHY1_RX           0x8009c020
#define HW_USBPHY1_RX_SET       0x8009c024
#define HW_USBPHY1_RX_CLR       0x8009c028 
#define HW_USBPHY1_RX_TOG       0x8009c02C

#define HW_USBPHY1_CTRL         0x8009c030
#define HW_USBPHY1_CTRL_SET     0x8009c034
#define HW_USBPHY1_CTRL_CLR     0x8009c038
#define HW_USBPHY1_CTRL_TOG     0x8009c03C

#define HW_USBPHY1_STATUS       0x8009c040

#define HW_USBPHY1_DEBUG        0x8009c050 
#define HW_USBPHY1_DEBUG_SET    0x8009c054
#define HW_USBPHY1_DEBUG_CLR    0x8009c058
#define HW_USBPHY1_DEBUG_TOG    0x8009c05C

#define HW_USBPHY1_DEBUG0_STATUS        0x8009c060
#define HW_USBPHY1_DEBUG1_STATUS        0x8009c070
#define HW_USBPHY1_DEBUG2_STATUS        0x8009c080

#define HW_USBPHY1_SYSCTRL        0x8009c090 
#define HW_USBPHY1_SYSCTRL_SET    0x8009c094
#define HW_USBPHY1_SYSCTRL_CLR    0x8009c098
#define HW_USBPHY1_SYSCTRL_TOG    0x8009c09C

#define HW_USBPHY1_ANALOG         0x8009c0A0
#define HW_USBPHY1_ANALOG_SET     0x8009c0A4
#define HW_USBPHY1_ANALOG_CLR     0x8009c0A8
#define HW_USBPHY1_ANALOG_TOG     0x8009c0AC 

#define HW_USBPHY1_5VCTRL        0x8009c0c0
#define HW_USBPHY1_SOFTOTGID     0X8009c0d0

/////////////////////////////////////////////////////////
//USB0

#define USB0_BaseAddr 0x80300000 //USB0 base address

//common registers
#define	USB0_FAddr               ((volatile unsigned char*)(0x00 + USB0_BaseAddr))
#define	USB0_Power               ((volatile unsigned char*)(0x01 + USB0_BaseAddr))
#define	USB0_IntrTx              ((volatile unsigned short*)(0x02 + USB0_BaseAddr))
#define	USB0_IntrRx              ((volatile unsigned short*)(0x04 + USB0_BaseAddr))
#define	USB0_IntrTxE             ((volatile unsigned short*)(0x06 + USB0_BaseAddr))
#define	USB0_IntrRxE             ((volatile unsigned short*)(0x08 + USB0_BaseAddr))
#define	USB0_IntrUSB             ((volatile unsigned char*)(0x0A + USB0_BaseAddr))
#define	USB0_IntrUSBE            ((volatile unsigned char*)(0x0B + USB0_BaseAddr))
#define	USB0_Frame               ((volatile unsigned char*)(0x0C + USB0_BaseAddr))
#define	USB0_Index               ((volatile unsigned char*)(0x0E + USB0_BaseAddr))
#define	USB0_Testmode            ((volatile unsigned char*)(0x0F + USB0_BaseAddr))

//peripheral mode
#define	USB0_TxMaxP              ((volatile unsigned short*)(0x10 + USB0_BaseAddr))
#define	USB0_CSR0                ((volatile unsigned short*)(0x12 + USB0_BaseAddr))	//ep0
#define	USB0_TxCSR               ((volatile unsigned short*)(0x12 + USB0_BaseAddr))	//ep1-15
#define	USB0_RxMaxP              ((volatile unsigned short*)(0x14 + USB0_BaseAddr))
#define	USB0_RxCSR               ((volatile unsigned short*)(0x16 + USB0_BaseAddr))
#define	USB0_Count0              ((volatile unsigned short*)(0x18 + USB0_BaseAddr))
#define	USB0_RxCount             ((volatile unsigned short*)(0x18 + USB0_BaseAddr))
#define USB0_Type0               ((volatile unsigned short*)(0x1A + USB0_BaseAddr))
#define	USB0_ConfigData          ((volatile unsigned char*)(0x1F + USB0_BaseAddr))
#define	USB0_FIFOSize            ((volatile unsigned char*)(0x1F + USB0_BaseAddr))

//register map
#define	USB0_FIFO0               (0x20 + USB0_BaseAddr)
#define	USB0_FIFO1               (0x24 + USB0_BaseAddr)
#define	USB0_FIFO2               (0x28 + USB0_BaseAddr)
#define	USB0_FIFO3               (0x2C + USB0_BaseAddr)
#define	USB0_FIFO4               (0x30 + USB0_BaseAddr)
#define	USB0_FIFO5               (0x34 + USB0_BaseAddr)
#define	USB0_FIFO6               (0x38 + USB0_BaseAddr)
#define	USB0_FIFO7               (0x3C + USB0_BaseAddr)
#define	USB0_FIFO8               (0x80 + USB0_BaseAddr)
#define	USB0_FIFO9               (0x44 + USB0_BaseAddr)
#define	USB0_FIFO10              (0x48 + USB0_BaseAddr)
#define	USB0_FIFO11              (0x4C + USB0_BaseAddr)
#define	USB0_FIFO12              (0x50 + USB0_BaseAddr)
#define	USB0_FIFO13              (0x54 + USB0_BaseAddr)
#define	USB0_FIFO14              (0x58 + USB0_BaseAddr)
#define	USB0_FIFO15              (0x5C + USB0_BaseAddr)

//additional control & configuration
#define USB0_DevCtl               ((volatile unsigned short*)(0x60 + USB0_BaseAddr))
#define USB0_TxFIFOsz             ((volatile unsigned char*)(0x62 + USB0_BaseAddr))
#define	USB0_RxFIFOsz             ((volatile unsigned char*)(0x63 + USB0_BaseAddr))
#define	USB0_TxFIFOadd            ((volatile unsigned short*)(0x64 + USB0_BaseAddr))
#define	USB0_RxFIFOadd            ((volatile unsigned short*)(0x66 + USB0_BaseAddr))
#define	USB0_VControl_VStatus     ((volatile unsigned int*)(0x68 + USB0_BaseAddr))
#define	USB0_HWVers               ((volatile unsigned short*)(0x6C + USB0_BaseAddr))
#define	USB0_EPInfo               ((volatile unsigned char*)(0x78 + USB0_BaseAddr))
#define	USB0_RAMInfo              ((volatile unsigned char*)(0x79 + USB0_BaseAddr))
#define	USB0_LinkInfo             ((volatile unsigned char*)(0x7A + USB0_BaseAddr))
#define	USB0_VPLen                ((volatile unsigned char*)(0x7B + USB0_BaseAddr))
#define	USB0_HS_EOF1              ((volatile unsigned char*)(0x7C + USB0_BaseAddr))
#define	USB0_FS_EOF1              ((volatile unsigned char*)(0x7D + USB0_BaseAddr))
#define	USB0_LS_EOF1              ((volatile unsigned char*)(0x7E + USB0_BaseAddr))
 
#define	USB0_TxFuncAddr           ((volatile unsigned char*)(0x80 + USB0_BaseAddr))
#define	USB0_RxFuncAddr           ((volatile unsigned char*)(0x84 + USB0_BaseAddr))

#define USB0_EP0_CSR              (0x106 + USB0_BaseAddr)

#define USB0_DMA_CTRL_REG         (0x200 + USB0_BaseAddr)


/////////////////////////////////////////////////////////
//USB1

#define USB1_BaseAddr 0x80400000 //USB1 base address

//common registers
#define	USB1_FAddr               ((volatile unsigned char*)(0x00 + USB1_BaseAddr))
#define	USB1_Power               ((volatile unsigned char*)(0x01 + USB1_BaseAddr))
#define	USB1_IntrTx              ((volatile unsigned short*)(0x02 + USB1_BaseAddr))
#define	USB1_IntrRx              ((volatile unsigned short*)(0x04 + USB1_BaseAddr))
#define	USB1_IntrTxE             ((volatile unsigned short*)(0x06 + USB1_BaseAddr))
#define	USB1_IntrRxE             ((volatile unsigned short*)(0x08 + USB1_BaseAddr))
#define	USB1_IntrUSB             ((volatile unsigned char*)(0x0A + USB1_BaseAddr))
#define	USB1_IntrUSBE            ((volatile unsigned char*)(0x0B + USB1_BaseAddr))
#define	USB1_Frame               ((volatile unsigned char*)(0x0C + USB1_BaseAddr))
#define	USB1_Index               ((volatile unsigned char*)(0x0E + USB1_BaseAddr))
#define	USB1_Testmode            ((volatile unsigned char*)(0x0F + USB1_BaseAddr))

//peripheral mode
#define	USB1_TxMaxP              ((volatile unsigned short*)(0x10 + USB1_BaseAddr))
#define	USB1_CSR0                ((volatile unsigned short*)(0x12 + USB1_BaseAddr))	//ep0
#define	USB1_TxCSR               ((volatile unsigned short*)(0x12 + USB1_BaseAddr))	//ep1-15
#define	USB1_RxMaxP              ((volatile unsigned short*)(0x14 + USB1_BaseAddr))
#define	USB1_RxCSR               ((volatile unsigned short*)(0x16 + USB1_BaseAddr))
#define	USB1_Count0              ((volatile unsigned short*)(0x18 + USB1_BaseAddr))
#define	USB1_RxCount             ((volatile unsigned short*)(0x18 + USB1_BaseAddr))
#define USB1_Type0               ((volatile unsigned short*)(0x1A + USB1_BaseAddr))
#define	USB1_ConfigData          ((volatile unsigned char*)(0x1F + USB1_BaseAddr))
#define	USB1_FIFOSize            ((volatile unsigned char*)(0x1F + USB1_BaseAddr))

//register map
#define	USB1_FIFO0               (0x20 + USB1_BaseAddr)
#define	USB1_FIFO1               (0x24 + USB1_BaseAddr)
#define	USB1_FIFO2               (0x28 + USB1_BaseAddr)
#define	USB1_FIFO3               (0x2C + USB1_BaseAddr)
#define	USB1_FIFO4               (0x30 + USB1_BaseAddr)
#define	USB1_FIFO5               (0x34 + USB1_BaseAddr)
#define	USB1_FIFO6               (0x38 + USB1_BaseAddr)
#define	USB1_FIFO7               (0x3C + USB1_BaseAddr)
#define	USB1_FIFO8               (0x80 + USB1_BaseAddr)
#define	USB1_FIFO9               (0x44 + USB1_BaseAddr)
#define	USB1_FIFO10              (0x48 + USB1_BaseAddr)
#define	USB1_FIFO11              (0x4C + USB1_BaseAddr)
#define	USB1_FIFO12              (0x50 + USB1_BaseAddr)
#define	USB1_FIFO13              (0x54 + USB1_BaseAddr)
#define	USB1_FIFO14              (0x58 + USB1_BaseAddr)
#define	USB1_FIFO15              (0x5C + USB1_BaseAddr)

//additional control & configuration
#define USB1_DevCtl               ((volatile unsigned short*)(0x60 + USB1_BaseAddr))
#define USB1_TxFIFOsz             ((volatile unsigned char*)(0x62 + USB1_BaseAddr))
#define	USB1_RxFIFOsz             ((volatile unsigned char*)(0x63 + USB1_BaseAddr))
#define	USB1_TxFIFOadd            ((volatile unsigned short*)(0x64 + USB1_BaseAddr))
#define	USB1_RxFIFOadd            ((volatile unsigned short*)(0x66 + USB1_BaseAddr))
#define	USB1_VControl_VStatus     ((volatile unsigned int*)(0x68 + USB1_BaseAddr))
#define	USB1_HWVers               ((volatile unsigned short*)(0x6C + USB1_BaseAddr))
#define	USB1_EPInfo               ((volatile unsigned char*)(0x78 + USB1_BaseAddr))
#define	USB1_RAMInfo              ((volatile unsigned char*)(0x79 + USB1_BaseAddr))
#define	USB1_LinkInfo             ((volatile unsigned char*)(0x7A + USB1_BaseAddr))
#define	USB1_VPLen                ((volatile unsigned char*)(0x7B + USB1_BaseAddr))
#define	USB1_HS_EOF1              ((volatile unsigned char*)(0x7C + USB1_BaseAddr))
#define	USB1_FS_EOF1              ((volatile unsigned char*)(0x7D + USB1_BaseAddr))
#define	USB1_LS_EOF1              ((volatile unsigned char*)(0x7E + USB1_BaseAddr))
 
#define	USB1_TxFuncAddr           ((volatile unsigned char*)(0x80 + USB1_BaseAddr))
#define	USB1_RxFuncAddr           ((volatile unsigned char*)(0x84 + USB1_BaseAddr))

#define USB1_EP0_CSR              (0x106 + USB1_BaseAddr)

#define USB1_DMA_CTRL_REG         (0x200 + USB1_BaseAddr)

#endif

