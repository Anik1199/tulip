/*
 * Copyright (c) 2011 Intel Corporation. All Rights Reserved.
 * Copyright (c) Imagination Technologies Limited, UK
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


/******************************************************************************

 @File         msvdx_vec_mpeg4_reg_io2.h

 @Title        MSVDX Offsets

 @Platform     </b>\n

 @Description  </b>\n This file contains the MSVDX_VEC_MPEG4_REG_IO2_H Defintions.

******************************************************************************/
#if !defined (__MSVDX_VEC_MPEG4_REG_IO2_H__)
#define __MSVDX_VEC_MPEG4_REG_IO2_H__

#ifdef __cplusplus
extern "C" {
#endif


#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_OFFSET             (0x0600)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_SPS0     FE_VOP_WIDTH_IN_MBS_LESS_1
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_VOP_WIDTH_IN_MBS_LESS_1_MASK            (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_VOP_WIDTH_IN_MBS_LESS_1_LSBMASK         (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_VOP_WIDTH_IN_MBS_LESS_1_SHIFT           (0)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_SPS0     FE_SHORT_HEADER_FLAG
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_SHORT_HEADER_FLAG_MASK          (0x00000400)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_SHORT_HEADER_FLAG_LSBMASK               (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_SHORT_HEADER_FLAG_SHIFT         (10)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_SPS0     FE_PROFILE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_PROFILE_MASK            (0x00000300)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_PROFILE_LSBMASK         (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SPS0_FE_PROFILE_SHIFT           (8)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_OFFSET         (0x0604)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     FE_VOP_HEIGHT_IN_MBS_LESS_1
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_VOP_HEIGHT_IN_MBS_LESS_1_MASK               (0x0000FE00)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_VOP_HEIGHT_IN_MBS_LESS_1_LSBMASK            (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_VOP_HEIGHT_IN_MBS_LESS_1_SHIFT              (9)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     QUANT_PRECISION
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_QUANT_PRECISION_MASK           (0x000001E0)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_QUANT_PRECISION_LSBMASK                (0x0000000F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_QUANT_PRECISION_SHIFT          (5)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     FE_NO_OF_GMC_WARPING_POINTS
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_NO_OF_GMC_WARPING_POINTS_MASK               (0x00000010)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_NO_OF_GMC_WARPING_POINTS_LSBMASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_NO_OF_GMC_WARPING_POINTS_SHIFT              (4)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     FE_GMC_ENABLE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_GMC_ENABLE_MASK             (0x00000008)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_GMC_ENABLE_LSBMASK          (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_GMC_ENABLE_SHIFT            (3)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     REVERSIBLE_VLC
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_REVERSIBLE_VLC_MASK            (0x00000004)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_REVERSIBLE_VLC_LSBMASK         (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_REVERSIBLE_VLC_SHIFT           (2)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     FE_DATA_PARTITIONED
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_DATA_PARTITIONED_MASK               (0x00000002)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_DATA_PARTITIONED_LSBMASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_DATA_PARTITIONED_SHIFT              (1)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_SPS0     FE_INTERLACED
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_INTERLACED_MASK             (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_INTERLACED_LSBMASK          (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_SPS0_FE_INTERLACED_SHIFT            (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_OFFSET         (0x0608)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_PPS0     BACKWARD_REF_VOP_CODING_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_BACKWARD_REF_VOP_CODING_TYPE_MASK              (0x18000000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_BACKWARD_REF_VOP_CODING_TYPE_LSBMASK           (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_BACKWARD_REF_VOP_CODING_TYPE_SHIFT             (27)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_PPS0     FE_FCODE_BACKWARD
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_FCODE_BACKWARD_MASK         (0x07000000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_FCODE_BACKWARD_LSBMASK              (0x00000007)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_FCODE_BACKWARD_SHIFT                (24)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_PPS0     FE_FCODE_FORWARD
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_FCODE_FORWARD_MASK          (0x00E00000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_FCODE_FORWARD_LSBMASK               (0x00000007)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_FCODE_FORWARD_SHIFT         (21)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_PPS0     INTRA_DC_VLC_THR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_INTRA_DC_VLC_THR_MASK          (0x001C0000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_INTRA_DC_VLC_THR_LSBMASK               (0x00000007)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_INTRA_DC_VLC_THR_SHIFT         (18)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_VOP_PPS0     FE_VOP_CODING_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_VOP_CODING_TYPE_MASK                (0x00030000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_VOP_CODING_TYPE_LSBMASK             (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_VOP_PPS0_FE_VOP_CODING_TYPE_SHIFT               (16)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_OFFSET               (0x060C)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_PICSH_PPS0     NUM_MBS_IN_GOB
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_NUM_MBS_IN_GOB_MASK          (0x00007FC0)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_NUM_MBS_IN_GOB_LSBMASK               (0x000001FF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_NUM_MBS_IN_GOB_SHIFT         (6)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_PICSH_PPS0     NUM_GOBS_IN_VOP
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_NUM_GOBS_IN_VOP_MASK         (0x0000003E)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_NUM_GOBS_IN_VOP_LSBMASK              (0x0000001F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_NUM_GOBS_IN_VOP_SHIFT                (1)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_PICSH_PPS0     FE_PICSH_CODING_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_FE_PICSH_CODING_TYPE_MASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_FE_PICSH_CODING_TYPE_LSBMASK         (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PICSH_PPS0_FE_PICSH_CODING_TYPE_SHIFT           (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_OFFSET           (0x0610)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_SLICE0     FE_VOP_QUANT
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_VOP_QUANT_MASK                (0x007FC000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_VOP_QUANT_LSBMASK             (0x000001FF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_VOP_QUANT_SHIFT               (14)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_SLICE0     FE_FIRST_MB_IN_SLICE_Y
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_FIRST_MB_IN_SLICE_Y_MASK              (0x00003F80)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_FIRST_MB_IN_SLICE_Y_LSBMASK           (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_FIRST_MB_IN_SLICE_Y_SHIFT             (7)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_SLICE0     FE_FIRST_MB_IN_SLICE_X
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_FIRST_MB_IN_SLICE_X_MASK              (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_FIRST_MB_IN_SLICE_X_LSBMASK           (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_SLICE0_FE_FIRST_MB_IN_SLICE_X_SHIFT             (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PARSER_VLR_BASE_ADDR_OFFSET             (0x0614)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_PARSER_VLR_BASE_ADDR     FE_PARSER_VLR_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PARSER_VLR_BASE_ADDR_FE_PARSER_VLR_BASE_ADDR_MASK               (0x0FFC0000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PARSER_VLR_BASE_ADDR_FE_PARSER_VLR_BASE_ADDR_LSBMASK            (0x000003FF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_PARSER_VLR_BASE_ADDR_FE_PARSER_VLR_BASE_ADDR_SHIFT              (18)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION0_BASE_ADDR_OFFSET         (0x0618)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_DATAPARTITION0_BASE_ADDR     FE_DATAPARTITION0_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION0_BASE_ADDR_FE_DATAPARTITION0_BASE_ADDR_MASK               (0xFFFFF000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION0_BASE_ADDR_FE_DATAPARTITION0_BASE_ADDR_LSBMASK            (0x000FFFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION0_BASE_ADDR_FE_DATAPARTITION0_BASE_ADDR_SHIFT              (12)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION1_BASE_ADDR_OFFSET         (0x061C)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_DATAPARTITION1_BASE_ADDR     FE_DATAPARTITION1_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION1_BASE_ADDR_FE_DATAPARTITION1_BASE_ADDR_MASK               (0xFFFFF000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION1_BASE_ADDR_FE_DATAPARTITION1_BASE_ADDR_LSBMASK            (0x000FFFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION1_BASE_ADDR_FE_DATAPARTITION1_BASE_ADDR_SHIFT              (12)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION_VLR_BASE_ADDR_OFFSET              (0x0620)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_FE_DATAPARTITION_VLR_BASE_ADDR     FE_DATAPARTITION_VLR_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION_VLR_BASE_ADDR_FE_DATAPARTITION_VLR_BASE_ADDR_MASK         (0x00000FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION_VLR_BASE_ADDR_FE_DATAPARTITION_VLR_BASE_ADDR_LSBMASK              (0x00000FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_FE_DATAPARTITION_VLR_BASE_ADDR_FE_DATAPARTITION_VLR_BASE_ADDR_SHIFT                (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_OFFSET             (0x0650)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_SPS0     BE_SHORT_HEADER_FLAG
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_BE_SHORT_HEADER_FLAG_MASK          (0x00000004)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_BE_SHORT_HEADER_FLAG_LSBMASK               (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_BE_SHORT_HEADER_FLAG_SHIFT         (2)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_SPS0     BE_PROFILE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_BE_PROFILE_MASK            (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_BE_PROFILE_LSBMASK         (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS0_BE_PROFILE_SHIFT           (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_OFFSET             (0x0654)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_SPS1     BE_VOP_WIDTH_IN_MBS_LESS_1
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_BE_VOP_WIDTH_IN_MBS_LESS_1_MASK            (0x00003F80)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_BE_VOP_WIDTH_IN_MBS_LESS_1_LSBMASK         (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_BE_VOP_WIDTH_IN_MBS_LESS_1_SHIFT           (7)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_SPS1     VOP_HEIGHT_IN_MBS_LESS_1
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_VOP_HEIGHT_IN_MBS_LESS_1_MASK              (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_VOP_HEIGHT_IN_MBS_LESS_1_LSBMASK           (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SPS1_VOP_HEIGHT_IN_MBS_LESS_1_SHIFT             (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_OFFSET         (0x0658)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS0     QUANT_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_QUANT_TYPE_MASK                (0x00000004)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_QUANT_TYPE_LSBMASK             (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_QUANT_TYPE_SHIFT               (2)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS0     OBMC_DISABLE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_OBMC_DISABLE_MASK              (0x00000002)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_OBMC_DISABLE_LSBMASK           (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_OBMC_DISABLE_SHIFT             (1)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS0     QUARTER_SAMPLE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_QUARTER_SAMPLE_MASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_QUARTER_SAMPLE_LSBMASK         (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS0_QUARTER_SAMPLE_SHIFT           (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_OFFSET         (0x065C)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS1     GMC_WARPING_ACCURACY
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_GMC_WARPING_ACCURACY_MASK              (0x00000030)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_GMC_WARPING_ACCURACY_LSBMASK           (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_GMC_WARPING_ACCURACY_SHIFT             (4)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS1     BE_NO_OF_GMC_WARPING_POINTS
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_NO_OF_GMC_WARPING_POINTS_MASK               (0x00000008)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_NO_OF_GMC_WARPING_POINTS_LSBMASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_NO_OF_GMC_WARPING_POINTS_SHIFT              (3)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS1     BE_GMC_ENABLE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_GMC_ENABLE_MASK             (0x00000004)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_GMC_ENABLE_LSBMASK          (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_GMC_ENABLE_SHIFT            (2)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS1     BE_DATA_PARTITIONED
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_DATA_PARTITIONED_MASK               (0x00000002)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_DATA_PARTITIONED_LSBMASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_DATA_PARTITIONED_SHIFT              (1)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_SPS1     BE_INTERLACED
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_INTERLACED_MASK             (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_INTERLACED_LSBMASK          (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_SPS1_BE_INTERLACED_SHIFT            (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_OFFSET         (0x0660)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_PPS0     BE_FCODE_BACKWARD
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_FCODE_BACKWARD_MASK         (0x00000700)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_FCODE_BACKWARD_LSBMASK              (0x00000007)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_FCODE_BACKWARD_SHIFT                (8)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_PPS0     BE_FCODE_FORWARD
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_FCODE_FORWARD_MASK          (0x000000E0)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_FCODE_FORWARD_LSBMASK               (0x00000007)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_FCODE_FORWARD_SHIFT         (5)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_PPS0     ALTERNATE_VERTICAL_SCAN_FLAG
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_ALTERNATE_VERTICAL_SCAN_FLAG_MASK              (0x00000010)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_ALTERNATE_VERTICAL_SCAN_FLAG_LSBMASK           (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_ALTERNATE_VERTICAL_SCAN_FLAG_SHIFT             (4)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_PPS0     TOP_FIELD_FIRST
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_TOP_FIELD_FIRST_MASK           (0x00000008)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_TOP_FIELD_FIRST_LSBMASK                (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_TOP_FIELD_FIRST_SHIFT          (3)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_PPS0     ROUNDING_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_ROUNDING_TYPE_MASK             (0x00000004)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_ROUNDING_TYPE_LSBMASK          (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_ROUNDING_TYPE_SHIFT            (2)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_PPS0     BE_VOP_CODING_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_VOP_CODING_TYPE_MASK                (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_VOP_CODING_TYPE_LSBMASK             (0x00000003)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_PPS0_BE_VOP_CODING_TYPE_SHIFT               (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_OFFSET               (0x0664)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_PICSH_PPS0     BE_NUM_MBS_IN_GOB
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_BE_NUM_MBS_IN_GOB_MASK               (0x000003FE)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_BE_NUM_MBS_IN_GOB_LSBMASK            (0x000001FF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_BE_NUM_MBS_IN_GOB_SHIFT              (1)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_PICSH_PPS0     BE_PICSH_CODING_TYPE
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_BE_PICSH_CODING_TYPE_MASK            (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_BE_PICSH_CODING_TYPE_LSBMASK         (0x00000001)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PICSH_PPS0_BE_PICSH_CODING_TYPE_SHIFT           (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_X_OFFSET            (0x0668)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_GMC_X     GMC_X
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_X_GMC_X_MASK                (0x00003FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_X_GMC_X_LSBMASK             (0x00003FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_X_GMC_X_SHIFT               (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_Y_OFFSET            (0x066C)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_GMC_Y     GMC_Y
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_Y_GMC_Y_MASK                (0x00003FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_Y_GMC_Y_LSBMASK             (0x00003FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_GMC_Y_GMC_Y_SHIFT               (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_OFFSET           (0x0670)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_SLICE0     BE_FIRST_MB_IN_SLICE_Y
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_BE_FIRST_MB_IN_SLICE_Y_MASK              (0x00003F80)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_BE_FIRST_MB_IN_SLICE_Y_LSBMASK           (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_BE_FIRST_MB_IN_SLICE_Y_SHIFT             (7)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_SLICE0     BE_FIRST_MB_IN_SLICE_X
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_BE_FIRST_MB_IN_SLICE_X_MASK              (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_BE_FIRST_MB_IN_SLICE_X_LSBMASK           (0x0000007F)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_SLICE0_BE_FIRST_MB_IN_SLICE_X_SHIFT             (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRB_OFFSET          (0x0674)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_TRB     BE_TRB
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRB_BE_TRB_MASK             (0x0000FFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRB_BE_TRB_LSBMASK          (0x0000FFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRB_BE_TRB_SHIFT            (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRD_OFFSET          (0x0678)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_VOP_TRD     BE_TRD
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRD_BE_TRD_MASK             (0x0000FFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRD_BE_TRD_LSBMASK          (0x0000FFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_VOP_TRD_BE_TRD_SHIFT            (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION0_BASE_ADDR_OFFSET         (0x06E4)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_DATAPARTITION0_BASE_ADDR     BE_DATAPARTITION0_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION0_BASE_ADDR_BE_DATAPARTITION0_BASE_ADDR_MASK               (0xFFFFF000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION0_BASE_ADDR_BE_DATAPARTITION0_BASE_ADDR_LSBMASK            (0x000FFFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION0_BASE_ADDR_BE_DATAPARTITION0_BASE_ADDR_SHIFT              (12)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION1_BASE_ADDR_OFFSET         (0x06E8)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_DATAPARTITION1_BASE_ADDR     BE_DATAPARTITION1_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION1_BASE_ADDR_BE_DATAPARTITION1_BASE_ADDR_MASK               (0xFFFFF000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION1_BASE_ADDR_BE_DATAPARTITION1_BASE_ADDR_LSBMASK            (0x000FFFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION1_BASE_ADDR_BE_DATAPARTITION1_BASE_ADDR_SHIFT              (12)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PARAM_BASE_ADDR_OFFSET          (0x06EC)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_PARAM_BASE_ADDR     PARAM_BASE_ADDRESS
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PARAM_BASE_ADDR_PARAM_BASE_ADDRESS_MASK         (0xFFFFF000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PARAM_BASE_ADDR_PARAM_BASE_ADDRESS_LSBMASK              (0x000FFFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_PARAM_BASE_ADDR_PARAM_BASE_ADDRESS_SHIFT                (12)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION_VLR_BASE_ADDR_OFFSET              (0x06F0)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_DATAPARTITION_VLR_BASE_ADDR     BE_DATAPARTITION_VLR_BASE_ADDR
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION_VLR_BASE_ADDR_BE_DATAPARTITION_VLR_BASE_ADDR_MASK         (0x00000FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION_VLR_BASE_ADDR_BE_DATAPARTITION_VLR_BASE_ADDR_LSBMASK              (0x00000FFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_DATAPARTITION_VLR_BASE_ADDR_BE_DATAPARTITION_VLR_BASE_ADDR_SHIFT                (0)

#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_COLPARAM_BASE_ADDR_OFFSET               (0x06F8)

// MSVDX_VEC_MPEG4     CR_VEC_MPEG4_BE_COLPARAM_BASE_ADDR     COLPARAM_BASE_ADDRESS
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_COLPARAM_BASE_ADDR_COLPARAM_BASE_ADDRESS_MASK           (0xFFFFF000)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_COLPARAM_BASE_ADDR_COLPARAM_BASE_ADDRESS_LSBMASK                (0x000FFFFF)
#define MSVDX_VEC_MPEG4_CR_VEC_MPEG4_BE_COLPARAM_BASE_ADDR_COLPARAM_BASE_ADDRESS_SHIFT          (12)



#ifdef __cplusplus
}
#endif

#endif /* __MSVDX_VEC_MPEG4_REG_IO2_H__ */
