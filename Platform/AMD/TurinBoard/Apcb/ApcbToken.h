//*****************************************************************************
//
// Copyright (C) 2022-2023 Advanced Micro Devices, Inc. All rights reserved.
//
//*****************************************************************************

// Add override tokens here

#ifdef ESPI_UART
#ifdef APCB_TOKEN_UID_FCH_CONSOLE_OUT_SERIAL_PORT_VALUE
  #undef APCB_TOKEN_UID_FCH_CONSOLE_OUT_SERIAL_PORT_VALUE
#endif
#define APCB_TOKEN_UID_FCH_CONSOLE_OUT_SERIAL_PORT_VALUE  0

#ifdef APCB_TOKEN_UID_FCH_CONSOLE_OUT_SERIAL_PORT_IO_VALUE
  #undef APCB_TOKEN_UID_FCH_CONSOLE_OUT_SERIAL_PORT_IO_VALUE
#endif
#define APCB_TOKEN_UID_FCH_CONSOLE_OUT_SERIAL_PORT_IO_VALUE 0
#endif /// end of ESPI_UART

#ifdef PCIE_MULTI_SEGMENT
    #define APCB_TOKEN_UID_DF_PCI_MMIO_BASE_VALUE     0x0
    #define APCB_TOKEN_UID_DF_PCI_MMIO_HI_BASE_VALUE  0x3FFB
#endif /// end of PCIE_MULTI_SEGMENT

#ifdef SATA_OVERRIDE
  #define APCB_TOKEN_UID_FCH_SATA_0_ENABLE_VALUE  0
  #define APCB_TOKEN_UID_FCH_SATA_1_ENABLE_VALUE  0
  #define APCB_TOKEN_UID_FCH_SATA_2_ENABLE_VALUE  0
  #define APCB_TOKEN_UID_FCH_SATA_3_ENABLE_VALUE  0
  #define APCB_TOKEN_UID_FCH_SATA_4_ENABLE_VALUE  1
  #define APCB_TOKEN_UID_FCH_SATA_5_ENABLE_VALUE  1
  #define APCB_TOKEN_UID_FCH_SATA_6_ENABLE_VALUE  0
  #define APCB_TOKEN_UID_FCH_SATA_7_ENABLE_VALUE  0
#endif

#ifdef ROM3_1TB_REMAP
  #define APCB_TOKEN_UID_FCH_ROM3_BASE_HIGH_VALUE 0x3FFC
#else
  #define APCB_TOKEN_UID_FCH_ROM3_BASE_HIGH_VALUE 0
#endif
