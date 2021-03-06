///////////////////////////////////////////////////////////////////////////////////////////////
//
// QUALCOMM Proprietary Design Data
// Copyright (c) 2011, Qualcomm Technologies Incorporated. All rights reserved.
//
// All data and information contained in or disclosed by this document are confidential and
// proprietary information of Qualcomm Technologies Incorporated, and all rights therein are expressly
// reserved. By accepting this material, the recipient agrees that this material and the
// information contained therein are held in confidence and in trust and will not be used,
// copied, reproduced in whole or in part, nor its contents revealed in any manner to others
// without the express written permission of Qualcomm Technologies Incorporated.
//
// This technology was exported from the United States in accordance with the Export
// Administration Regulations. Diversion contrary to U. S. law prohibited.
//
///////////////////////////////////////////////////////////////////////////////////////////////
//
// ddrss_seq_hwiobase.h : automatically generated by Autoseq  2.4.4 1/27/2015 
// User Name:nevedeth
//
// !! WARNING !!  DO NOT MANUALLY EDIT THIS FILE.
//
///////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __SEQ_BASE_H__
#define __SEQ_BASE_H__

#include "HALhwio.h"


///////////////////////////////////////////////////////////////////////////////////////////////
// Instance Relative Offsets from Block ddrss
///////////////////////////////////////////////////////////////////////////////////////////////

#define SEQ_DDRSS_BIMC_OFFSET                                        0x00400000
#define SEQ_DDRSS_BIMC_GLOBAL0_OFFSET                                0x00400000
#define SEQ_DDRSS_BIMC_GLOBAL1_OFFSET                                0x00401000
#define SEQ_DDRSS_BIMC_GLOBAL2_OFFSET                                0x00402000
#define SEQ_DDRSS_BIMC_BIMC_PERFMON_OFFSET                           0x00403000
#define SEQ_DDRSS_BIMC_BIMC_DTE_OFFSET                               0x00406000
#define SEQ_DDRSS_BIMC_BIMC_M_APP_MPORT_OFFSET                       0x00408000
#define SEQ_DDRSS_BIMC_BIMC_M_APP_PROF_OFFSET                        0x00409000
#define SEQ_DDRSS_BIMC_BIMC_M_DSP_MPORT_OFFSET                       0x0040c000
#define SEQ_DDRSS_BIMC_BIMC_M_DSP_PROF_OFFSET                        0x0040d000
#define SEQ_DDRSS_BIMC_BIMC_M_GPU_MPORT_OFFSET                       0x00410000
#define SEQ_DDRSS_BIMC_BIMC_M_GPU_PROF_OFFSET                        0x00411000
#define SEQ_DDRSS_BIMC_BIMC_M_MMSS0_MPORT_OFFSET                     0x00414000
#define SEQ_DDRSS_BIMC_BIMC_M_MMSS0_PROF_OFFSET                      0x00415000
#define SEQ_DDRSS_BIMC_BIMC_M_MMSS1_MPORT_OFFSET                     0x00418000
#define SEQ_DDRSS_BIMC_BIMC_M_MMSS1_PROF_OFFSET                      0x00419000
#define SEQ_DDRSS_BIMC_BIMC_M_SYS_MPORT_OFFSET                       0x0041c000
#define SEQ_DDRSS_BIMC_BIMC_M_SYS_PROF_OFFSET                        0x0041d000
#define SEQ_DDRSS_BIMC_BIMC_M_TCU_MPORT_OFFSET                       0x00420000
#define SEQ_DDRSS_BIMC_BIMC_M_TCU_PROF_OFFSET                        0x00421000
#define SEQ_DDRSS_BIMC_BIMC_S_SYS_SWAY_OFFSET                        0x00458000
#define SEQ_DDRSS_BIMC_BIMC_S_DEFAULT_SWAY_OFFSET                    0x00460000
#define SEQ_DDRSS_BIMC_BIMC_S_DDR0_ARB_OFFSET                        0x00449000
#define SEQ_DDRSS_BIMC_BIMC_S_SYS_ARB_OFFSET                         0x00459000
#define SEQ_DDRSS_BIMC_BIMC_S_DEFAULT_ARB_OFFSET                     0x00461000
#define SEQ_DDRSS_BIMC_BIMC_S_DDR0_SCMO_OFFSET                       0x00448000
#define SEQ_DDRSS_BIMC_BIMC_S_DDR0_OFFSET                            0x0044a000
#define SEQ_DDRSS_BIMC_BIMC_S_DDR0_DPE_OFFSET                        0x0044c000
#define SEQ_DDRSS_BIMC_BIMC_S_DDR0_SHKE_OFFSET                       0x0044d000
#define SEQ_DDRSS_EBI1_PHY_OFFSET                                    0x00480000
#define SEQ_DDRSS_EBI1_PHY_CH0_CA_DDRPHY_CA_OFFSET                   0x00480000
#define SEQ_DDRSS_EBI1_PHY_CH0_DQ0_DDRPHY_DQ_OFFSET                  0x00480800
#define SEQ_DDRSS_EBI1_PHY_CH0_DQ1_DDRPHY_DQ_OFFSET                  0x00481000
#define SEQ_DDRSS_EBI1_PHY_CH0_DDR_CC_OFFSET                         0x00482800
#define SEQ_DDRSS_EBI1_PHY_EBI1_AHB2PHY_SWMAN_OFFSET                 0x0049f000
#define SEQ_DDRSS_EBI1_PHY_EBI1_AHB2PHY_BROADCAST_SWMAN_OFFSET       0x0049f800


///////////////////////////////////////////////////////////////////////////////////////////////
// Instance Relative Offsets from Block bimc
///////////////////////////////////////////////////////////////////////////////////////////////

#define SEQ_BIMC_GLOBAL0_OFFSET                                      0x00000000
#define SEQ_BIMC_GLOBAL1_OFFSET                                      0x00001000
#define SEQ_BIMC_GLOBAL2_OFFSET                                      0x00002000
#define SEQ_BIMC_BIMC_PERFMON_OFFSET                                 0x00003000
#define SEQ_BIMC_BIMC_DTE_OFFSET                                     0x00006000
#define SEQ_BIMC_BIMC_M_APP_MPORT_OFFSET                             0x00008000
#define SEQ_BIMC_BIMC_M_APP_PROF_OFFSET                              0x00009000
#define SEQ_BIMC_BIMC_M_DSP_MPORT_OFFSET                             0x0000c000
#define SEQ_BIMC_BIMC_M_DSP_PROF_OFFSET                              0x0000d000
#define SEQ_BIMC_BIMC_M_GPU_MPORT_OFFSET                             0x00010000
#define SEQ_BIMC_BIMC_M_GPU_PROF_OFFSET                              0x00011000
#define SEQ_BIMC_BIMC_M_MMSS0_MPORT_OFFSET                           0x00014000
#define SEQ_BIMC_BIMC_M_MMSS0_PROF_OFFSET                            0x00015000
#define SEQ_BIMC_BIMC_M_MMSS1_MPORT_OFFSET                           0x00018000
#define SEQ_BIMC_BIMC_M_MMSS1_PROF_OFFSET                            0x00019000
#define SEQ_BIMC_BIMC_M_SYS_MPORT_OFFSET                             0x0001c000
#define SEQ_BIMC_BIMC_M_SYS_PROF_OFFSET                              0x0001d000
#define SEQ_BIMC_BIMC_M_TCU_MPORT_OFFSET                             0x00020000
#define SEQ_BIMC_BIMC_M_TCU_PROF_OFFSET                              0x00021000
#define SEQ_BIMC_BIMC_S_SYS_SWAY_OFFSET                              0x00058000
#define SEQ_BIMC_BIMC_S_DEFAULT_SWAY_OFFSET                          0x00060000
#define SEQ_BIMC_BIMC_S_DDR0_ARB_OFFSET                              0x00049000
#define SEQ_BIMC_BIMC_S_SYS_ARB_OFFSET                               0x00059000
#define SEQ_BIMC_BIMC_S_DEFAULT_ARB_OFFSET                           0x00061000
#define SEQ_BIMC_BIMC_S_DDR0_SCMO_OFFSET                             0x00048000
#define SEQ_BIMC_BIMC_S_DDR0_OFFSET                                  0x0004a000
#define SEQ_BIMC_BIMC_S_DDR0_DPE_OFFSET                              0x0004c000
#define SEQ_BIMC_BIMC_S_DDR0_SHKE_OFFSET                             0x0004d000


///////////////////////////////////////////////////////////////////////////////////////////////
// Instance Relative Offsets from Block ebi1_phy_cfg
///////////////////////////////////////////////////////////////////////////////////////////////

#define SEQ_EBI1_PHY_CFG_CH0_CA_DDRPHY_CA_OFFSET                     0x00000000
#define SEQ_EBI1_PHY_CFG_CH0_DQ0_DDRPHY_DQ_OFFSET                    0x00000800
#define SEQ_EBI1_PHY_CFG_CH0_DQ1_DDRPHY_DQ_OFFSET                    0x00001000
#define SEQ_EBI1_PHY_CFG_CH0_DDR_CC_OFFSET                           0x00002800
#define SEQ_EBI1_PHY_CFG_EBI1_AHB2PHY_SWMAN_OFFSET                   0x0001f000
#define SEQ_EBI1_PHY_CFG_EBI1_AHB2PHY_BROADCAST_SWMAN_OFFSET         0x0001f800


#endif

