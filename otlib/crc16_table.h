/* Copyright 2009-2011 JP Norair
  *
  * Licensed under the OpenTag License, Version 1.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  * http://www.indigresso.com/wiki/doku.php?id=opentag:license_1_0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  */
/**
  * @file       OTlib/crc16_table.h
  * @author     JP Norair
  * @version    V1.0
  * @date       3 Jan 2011
  * @brief      Constants to use for a CRC computation table
  * @ingroup    CRC16   
  *
  * This is a header defining a table that can optionally be used to compute a
  * CRC16 CCITT value.  This is much faster than the bitwise computation method,
  * although it is not tremendously faster than the optimized computation method
  * used in the OpenTag CRC SW, and it is slower than using CRC in hardware
  * (although HW CRC is not always available).  It also consumes 512 bytes of
  * program memory, which you might not want to give up.  If you have a surplus
  * of program memory and no working HW CRC (the MSP430 HW CRC doesn't really
  * work) then this is a good option.
  ******************************************************************************
  */


#ifndef __CRC16_TABLE_H
#define __CRC16_TABLE_H

#include "OT_types.h"
#include "OT_config.h"

#define CRC_TABLE_LENGTH    256
#define CRC_TABLE_SIZE      512

#define CRCx00 0x0000
#define CRCx01 0x1021
#define CRCx02 0x2042
#define CRCx03 0x3063
#define CRCx04 0x4084
#define CRCx05 0x50A5
#define CRCx06 0x60C6
#define CRCx07 0x70E7
#define CRCx08 0x8108
#define CRCx09 0x9129
#define CRCx0A 0xA14A
#define CRCx0B 0xB16B
#define CRCx0C 0xC18C
#define CRCx0D 0xD1AD
#define CRCx0E 0xE1CE
#define CRCx0F 0xF1EF
#define CRCx10 0x1231
#define CRCx11 0x0210
#define CRCx12 0x3273
#define CRCx13 0x2252
#define CRCx14 0x52B5
#define CRCx15 0x4294
#define CRCx16 0x72F7
#define CRCx17 0x62D6
#define CRCx18 0x9339
#define CRCx19 0x8318
#define CRCx1A 0xB37B
#define CRCx1B 0xA35A
#define CRCx1C 0xD3BD
#define CRCx1D 0xC39C
#define CRCx1E 0xF3FF
#define CRCx1F 0xE3DE
#define CRCx20 0x2462
#define CRCx21 0x3443
#define CRCx22 0x0420
#define CRCx23 0x1401
#define CRCx24 0x64E6
#define CRCx25 0x74C7
#define CRCx26 0x44A4
#define CRCx27 0x5485
#define CRCx28 0xA56A
#define CRCx29 0xB54B
#define CRCx2A 0x8528
#define CRCx2B 0x9509
#define CRCx2C 0xE5EE
#define CRCx2D 0xF5CF
#define CRCx2E 0xC5AC
#define CRCx2F 0xD58D
#define CRCx30 0x3653
#define CRCx31 0x2672
#define CRCx32 0x1611
#define CRCx33 0x0630
#define CRCx34 0x76D7
#define CRCx35 0x66F6
#define CRCx36 0x5695
#define CRCx37 0x46B4
#define CRCx38 0xB75B
#define CRCx39 0xA77A
#define CRCx3A 0x9719
#define CRCx3B 0x8738
#define CRCx3C 0xF7DF
#define CRCx3D 0xE7FE
#define CRCx3E 0xD79D
#define CRCx3F 0xC7BC
#define CRCx40 0x48C4
#define CRCx41 0x58E5
#define CRCx42 0x6886
#define CRCx43 0x78A7
#define CRCx44 0x0840
#define CRCx45 0x1861
#define CRCx46 0x2802
#define CRCx47 0x3823
#define CRCx48 0xC9CC
#define CRCx49 0xD9ED
#define CRCx4A 0xE98E
#define CRCx4B 0xF9AF
#define CRCx4C 0x8948
#define CRCx4D 0x9969
#define CRCx4E 0xA90A
#define CRCx4F 0xB92B
#define CRCx50 0x5AF5
#define CRCx51 0x4AD4
#define CRCx52 0x7AB7
#define CRCx53 0x6A96
#define CRCx54 0x1A71
#define CRCx55 0x0A50
#define CRCx56 0x3A33
#define CRCx57 0x2A12
#define CRCx58 0xDBFD
#define CRCx59 0xCBDC
#define CRCx5A 0xFBBF
#define CRCx5B 0xEB9E
#define CRCx5C 0x9B79
#define CRCx5D 0x8B58
#define CRCx5E 0xBB3B
#define CRCx5F 0xAB1A
#define CRCx60 0x6CA6
#define CRCx61 0x7C87
#define CRCx62 0x4CE4
#define CRCx63 0x5CC5
#define CRCx64 0x2C22
#define CRCx65 0x3C03
#define CRCx66 0x0C60
#define CRCx67 0x1C41
#define CRCx68 0xEDAE
#define CRCx69 0xFD8F
#define CRCx6A 0xCDEC
#define CRCx6B 0xDDCD
#define CRCx6C 0xAD2A
#define CRCx6D 0xBD0B
#define CRCx6E 0x8D68
#define CRCx6F 0x9D49
#define CRCx70 0x7E97
#define CRCx71 0x6EB6
#define CRCx72 0x5ED5
#define CRCx73 0x4EF4
#define CRCx74 0x3E13
#define CRCx75 0x2E32
#define CRCx76 0x1E51
#define CRCx77 0x0E70
#define CRCx78 0xFF9F
#define CRCx79 0xEFBE
#define CRCx7A 0xDFDD
#define CRCx7B 0xCFFC
#define CRCx7C 0xBF1B
#define CRCx7D 0xAF3A
#define CRCx7E 0x9F59
#define CRCx7F 0x8F78
#define CRCx80 0x9188
#define CRCx81 0x81A9
#define CRCx82 0xB1CA
#define CRCx83 0xA1EB
#define CRCx84 0xD10C
#define CRCx85 0xC12D
#define CRCx86 0xF14E
#define CRCx87 0xE16F
#define CRCx88 0x1080
#define CRCx89 0x00A1
#define CRCx8A 0x30C2
#define CRCx8B 0x20E3
#define CRCx8C 0x5004
#define CRCx8D 0x4025
#define CRCx8E 0x7046
#define CRCx8F 0x6067
#define CRCx90 0x83B9
#define CRCx91 0x9398
#define CRCx92 0xA3FB
#define CRCx93 0xB3DA
#define CRCx94 0xC33D
#define CRCx95 0xD31C
#define CRCx96 0xE37F
#define CRCx97 0xF35E
#define CRCx98 0x02B1
#define CRCx99 0x1290
#define CRCx9A 0x22F3
#define CRCx9B 0x32D2
#define CRCx9C 0x4235
#define CRCx9D 0x5214
#define CRCx9E 0x6277
#define CRCx9F 0x7256
#define CRCxA0 0xB5EA
#define CRCxA1 0xA5CB
#define CRCxA2 0x95A8
#define CRCxA3 0x8589
#define CRCxA4 0xF56E
#define CRCxA5 0xE54F
#define CRCxA6 0xD52C
#define CRCxA7 0xC50D
#define CRCxA8 0x34E2
#define CRCxA9 0x24C3
#define CRCxAA 0x14A0
#define CRCxAB 0x0481
#define CRCxAC 0x7466
#define CRCxAD 0x6447
#define CRCxAE 0x5424
#define CRCxAF 0x4405
#define CRCxB0 0xA7DB
#define CRCxB1 0xB7FA
#define CRCxB2 0x8799
#define CRCxB3 0x97B8
#define CRCxB4 0xE75F
#define CRCxB5 0xF77E
#define CRCxB6 0xC71D
#define CRCxB7 0xD73C
#define CRCxB8 0x26D3
#define CRCxB9 0x36F2
#define CRCxBA 0x0691
#define CRCxBB 0x16B0
#define CRCxBC 0x6657
#define CRCxBD 0x7676
#define CRCxBE 0x4615
#define CRCxBF 0x5634
#define CRCxC0 0xD94C
#define CRCxC1 0xC96D
#define CRCxC2 0xF90E
#define CRCxC3 0xE92F
#define CRCxC4 0x99C8
#define CRCxC5 0x89E9
#define CRCxC6 0xB98A
#define CRCxC7 0xA9AB
#define CRCxC8 0x5844
#define CRCxC9 0x4865
#define CRCxCA 0x7806
#define CRCxCB 0x6827
#define CRCxCC 0x18C0
#define CRCxCD 0x08E1
#define CRCxCE 0x3882
#define CRCxCF 0x28A3
#define CRCxD0 0xCB7D
#define CRCxD1 0xDB5C
#define CRCxD2 0xEB3F
#define CRCxD3 0xFB1E
#define CRCxD4 0x8BF9
#define CRCxD5 0x9BD8
#define CRCxD6 0xABBB
#define CRCxD7 0xBB9A
#define CRCxD8 0x4A75
#define CRCxD9 0x5A54
#define CRCxDA 0x6A37
#define CRCxDB 0x7A16
#define CRCxDC 0x0AF1
#define CRCxDD 0x1AD0
#define CRCxDE 0x2AB3
#define CRCxDF 0x3A92
#define CRCxE0 0xFD2E
#define CRCxE1 0xED0F
#define CRCxE2 0xDD6C
#define CRCxE3 0xCD4D
#define CRCxE4 0xBDAA
#define CRCxE5 0xAD8B
#define CRCxE6 0x9DE8
#define CRCxE7 0x8DC9
#define CRCxE8 0x7C26
#define CRCxE9 0x6C07
#define CRCxEA 0x5C64
#define CRCxEB 0x4C45
#define CRCxEC 0x3CA2
#define CRCxED 0x2C83
#define CRCxEE 0x1CE0
#define CRCxEF 0x0CC1
#define CRCxF0 0xEF1F
#define CRCxF1 0xFF3E
#define CRCxF2 0xCF5D
#define CRCxF3 0xDF7C
#define CRCxF4 0xAF9B
#define CRCxF5 0xBFBA
#define CRCxF6 0x8FD9
#define CRCxF7 0x9FF8
#define CRCxF8 0x6E17
#define CRCxF9 0x7E36
#define CRCxFA 0x4E55
#define CRCxFB 0x5E74
#define CRCxFC 0x2E93
#define CRCxFD 0x3EB2
#define CRCxFE 0x0ED1
#define CRCxFF 0x1EF0

#endif