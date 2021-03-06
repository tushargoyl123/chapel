/* gmp-mparam.h -- Compiler/machine parameter header file for a73.

Copyright 2019 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* 1800 MHz Cortex-A72 */
/* FFT tuning limit = 48,820,337 */
/* Generated by tuneup.c, 2019-10-22, gcc 7.4 */

#define DIVREM_1_NORM_THRESHOLD              3
#define DIVREM_1_UNNORM_THRESHOLD            3
#define MOD_1_1P_METHOD                      1  /* 2.28% faster than 2 */
#define MOD_1_NORM_THRESHOLD                 3
#define MOD_1_UNNORM_THRESHOLD               4
#define MOD_1N_TO_MOD_1_1_THRESHOLD          8
#define MOD_1U_TO_MOD_1_1_THRESHOLD          5
#define MOD_1_1_TO_MOD_1_2_THRESHOLD         8
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        44
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD     16
#define USE_PREINV_DIVREM_1                  1
#define DIV_QR_1N_PI1_METHOD                 1  /* 35.13% faster than 2 */
#define DIV_QR_1_NORM_THRESHOLD              5
#define DIV_QR_1_UNNORM_THRESHOLD            5
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always */
#define BMOD_1_TO_MOD_1_THRESHOLD           33

#define DIV_1_VS_MUL_1_PERCENT             168

#define MUL_TOOM22_THRESHOLD                10
#define MUL_TOOM33_THRESHOLD                57
#define MUL_TOOM44_THRESHOLD                89
#define MUL_TOOM6H_THRESHOLD               141
#define MUL_TOOM8H_THRESHOLD               199

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      61
#define MUL_TOOM32_TO_TOOM53_THRESHOLD      69
#define MUL_TOOM42_TO_TOOM53_THRESHOLD      65
#define MUL_TOOM42_TO_TOOM63_THRESHOLD      66
#define MUL_TOOM43_TO_TOOM54_THRESHOLD      58

#define SQR_BASECASE_THRESHOLD               0  /* always */
#define SQR_TOOM2_THRESHOLD                 18
#define SQR_TOOM3_THRESHOLD                 62
#define SQR_TOOM4_THRESHOLD                166
#define SQR_TOOM6_THRESHOLD                222
#define SQR_TOOM8_THRESHOLD                309

#define MULMID_TOOM42_THRESHOLD             22

#define MULMOD_BNM1_THRESHOLD                8
#define SQRMOD_BNM1_THRESHOLD               11

#define MUL_FFT_MODF_THRESHOLD             276  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    276, 5}, {     13, 6}, {      7, 5}, {     15, 6}, \
    {     15, 7}, {      8, 6}, {     17, 7}, {      9, 6}, \
    {     19, 7}, {     13, 8}, {      7, 7}, {     17, 8}, \
    {      9, 7}, {     19, 8}, {     11, 7}, {     23, 8}, \
    {     13, 9}, {      7, 8}, {     19, 9}, {     11, 8}, \
    {     27,10}, {      7, 9}, {     15, 8}, {     33, 9}, \
    {     19, 8}, {     39, 9}, {     23, 8}, {     47, 9}, \
    {     27,10}, {     15, 9}, {     43,10}, {     23, 9}, \
    {     51,11}, {     15,10}, {     31, 9}, {     67,10}, \
    {     39, 9}, {     83,10}, {     47, 9}, {     99,10}, \
    {     55,11}, {     31,10}, {     63, 9}, {    127, 8}, \
    {    255, 9}, {    131,10}, {     71, 9}, {    143, 8}, \
    {    287,10}, {     79, 9}, {    159, 8}, {    319,11}, \
    {     47, 9}, {    191, 8}, {    383, 7}, {    767, 8}, \
    {    415,12}, {     31,11}, {     63, 9}, {    255, 8}, \
    {    511,10}, {    143, 9}, {    287, 8}, {    575,11}, \
    {     79,10}, {    159, 9}, {    319,10}, {    175, 9}, \
    {    351, 8}, {    703,11}, {     95,10}, {    191, 9}, \
    {    383, 8}, {    767,10}, {    207, 9}, {    415,10}, \
    {    223, 9}, {    447,12}, {     63,10}, {    255, 9}, \
    {    511, 8}, {   1023, 9}, {    543,11}, {    143, 9}, \
    {    575,10}, {    319, 9}, {    639,10}, {    351, 9}, \
    {    703,12}, {     95,11}, {    191,10}, {    383,11}, \
    {    207,10}, {    415,11}, {    223,10}, {    447, 9}, \
    {    895,13}, {     63,11}, {    255,10}, {    511,11}, \
    {    287,10}, {    575,12}, {    159,11}, {    319,10}, \
    {    639,11}, {    351,10}, {    703, 9}, {   1407,12}, \
    {    191,11}, {    383,10}, {    767,11}, {    415,12}, \
    {    223,11}, {    447,10}, {    895,11}, {    479,10}, \
    {    959,12}, {    255,11}, {    543,10}, {   1087,11}, \
    {    575,12}, {    319,11}, {    639,12}, {    351,11}, \
    {    703,13}, {    191,12}, {    383,11}, {    767,12}, \
    {    415,11}, {    831,12}, {    447,11}, {    895,12}, \
    {    479,13}, {    255,12}, {    511,11}, {   1023,12}, \
    {    575,13}, {    319,12}, {    703,13}, {    383,12}, \
    {    831,13}, {    447,12}, {    959,14}, {    255,13}, \
    {    511,12}, {   1023,13}, {    575,12}, {   1151,13}, \
    {    703,12}, {   1407,14}, {    383,13}, {    831,12}, \
    {   1663,13}, {    959,15}, {    255,14}, {    511,13}, \
    {   1151,14}, {    639,13}, {   1407,14}, {    767,13}, \
    {   1663,14}, {    895,13}, {   1791,15}, {    511,14}, \
    {   1023,13}, {   2047,14}, {   1151,13}, {   2431,14}, \
    {   1407,15}, {    767,14}, {   1791,16}, {    511,15}, \
    {   1023,14}, {   2431,15}, {   1279,14}, {   2815,15}, \
    {  32768,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 185
#define MUL_FFT_THRESHOLD                 3200

#define SQR_FFT_MODF_THRESHOLD             244  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    244, 5}, {     13, 6}, {      7, 5}, {     15, 6}, \
    {     17, 7}, {      9, 6}, {     19, 7}, {     17, 8}, \
    {      9, 7}, {     20, 8}, {     11, 7}, {     23, 8}, \
    {     13, 9}, {      7, 8}, {     19, 9}, {     11, 8}, \
    {     25,10}, {      7, 9}, {     15, 8}, {     31, 9}, \
    {     19, 8}, {     39, 9}, {     23, 8}, {     47,10}, \
    {     15, 9}, {     39,10}, {     23, 9}, {     47,11}, \
    {     15,10}, {     31, 9}, {     63,10}, {     39, 9}, \
    {     79,10}, {     47, 9}, {     95,10}, {     55,11}, \
    {     31,10}, {     63, 8}, {    255,10}, {     71, 9}, \
    {    143, 8}, {    287,10}, {     79, 9}, {    159, 8}, \
    {    319,11}, {     47,10}, {     95, 9}, {    191, 8}, \
    {    383,12}, {     31,11}, {     63,10}, {    127, 9}, \
    {    287, 8}, {    575,11}, {     79,10}, {    159, 9}, \
    {    319, 8}, {    639,10}, {    175, 9}, {    351, 8}, \
    {    703,11}, {     95, 9}, {    383, 8}, {    767,10}, \
    {    207, 9}, {    415,10}, {    223, 8}, {    895,10}, \
    {    239,12}, {     63,11}, {    127,10}, {    255, 9}, \
    {    511,10}, {    287, 9}, {    575,11}, {    159,10}, \
    {    319, 9}, {    639,11}, {    175,10}, {    351, 9}, \
    {    703,11}, {    191,10}, {    383,11}, {    207,10}, \
    {    415,11}, {    223,10}, {    479,11}, {    255,10}, \
    {    511,11}, {    287,10}, {    575,12}, {    159,11}, \
    {    351,12}, {    191,11}, {    383,10}, {    767,12}, \
    {    223,11}, {    447,10}, {    895,11}, {    479,13}, \
    {    127,12}, {    255,11}, {    511,12}, {    287,10}, \
    {   1151,12}, {    319,11}, {    639,12}, {    351,11}, \
    {    703,13}, {    191,12}, {    383,11}, {    767,12}, \
    {    415,11}, {    831,12}, {    447,11}, {    895,12}, \
    {    479,11}, {    959,12}, {    511,11}, {   1023,12}, \
    {    575,11}, {   1151,13}, {    319,12}, {    639,11}, \
    {   1279,13}, {    383,12}, {    831,13}, {    447,12}, \
    {    895,14}, {    255,13}, {    511,12}, {   1023,13}, \
    {    703,14}, {    383,13}, {    831,12}, {   1663,13}, \
    {    895,15}, {    255,14}, {    511,13}, {   1151,14}, \
    {    639,13}, {   1407,14}, {    767,13}, {   1535,14}, \
    {    895,15}, {    511,14}, {   1151,13}, {   2431,14}, \
    {   1407,15}, {    767,14}, {   1791,16}, {    511,15}, \
    {   1023,14}, {   2431,15}, {   1279,14}, {   2815,15}, \
    {  32768,16}, {  65536,17}, { 131072,18}, { 262144,19}, \
    { 524288,20}, {1048576,21}, {2097152,22}, {4194304,23}, \
    {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 165
#define SQR_FFT_THRESHOLD                 2496

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  39
#define MULLO_MUL_N_THRESHOLD             6253
#define SQRLO_BASECASE_THRESHOLD             4
#define SQRLO_DC_THRESHOLD                  56
#define SQRLO_SQR_THRESHOLD               4940

#define DC_DIV_QR_THRESHOLD                 36
#define DC_DIVAPPR_Q_THRESHOLD             136
#define DC_BDIV_QR_THRESHOLD                35
#define DC_BDIV_Q_THRESHOLD                 88

#define INV_MULMOD_BNM1_THRESHOLD           30
#define INV_NEWTON_THRESHOLD               149
#define INV_APPR_THRESHOLD                 139

#define BINV_NEWTON_THRESHOLD              166
#define REDC_1_TO_REDC_N_THRESHOLD          38

#define MU_DIV_QR_THRESHOLD               1120
#define MU_DIVAPPR_Q_THRESHOLD            1078
#define MUPI_DIV_QR_THRESHOLD               68
#define MU_BDIV_QR_THRESHOLD               889
#define MU_BDIV_Q_THRESHOLD                942

#define POWM_SEC_TABLE  4,22,102,473,1730

#define GET_STR_DC_THRESHOLD                11
#define GET_STR_PRECOMPUTE_THRESHOLD        22
#define SET_STR_DC_THRESHOLD               381
#define SET_STR_PRECOMPUTE_THRESHOLD      1042

#define FAC_DSC_THRESHOLD                  140
#define FAC_ODD_THRESHOLD                   23

#define MATRIX22_STRASSEN_THRESHOLD         11
#define HGCD2_DIV1_METHOD                    1  /* 7.84% faster than 3 */
#define HGCD_THRESHOLD                      80
#define HGCD_APPR_THRESHOLD                 80
#define HGCD_REDUCE_THRESHOLD             1679
#define GCD_DC_THRESHOLD                   273
#define GCDEXT_DC_THRESHOLD                201
#define JACOBI_BASE_METHOD                   1  /* 1.03% faster than 4 */

/* Tuneup completed successfully, took 64972 seconds */
