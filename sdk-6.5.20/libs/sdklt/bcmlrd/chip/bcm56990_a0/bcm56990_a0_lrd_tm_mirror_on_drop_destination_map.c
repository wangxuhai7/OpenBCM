/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56990_a0/bcm56990_a0_TM_MIRROR_ON_DROP_DESTINATION.map.ltl for
 *      bcm56990_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* TM_MIRROR_ON_DROP_DESTINATION field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_tm_mirror_on_drop_destination_map_field_data_mmd[] = {
    { /* 0 TM_MIRROR_ON_DROP_DESTINATION_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 1 PORT_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x1,
      .max = &bcm56990_a0_lrd_ifd_u16_0x10f,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 2 UC_Q */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 3 TM_UC_Q_ID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 TM_MC_Q_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x2f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 5 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_TM_MIRROR_DROP_DESTINATION_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_tm_mirror_on_drop_destination_map_field_data = {
    .fields = 6,
    .field = bcm56990_a0_lrd_tm_mirror_on_drop_destination_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_tm_mirror_on_drop_destinationt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 4,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 3,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_tm_mirror_on_drop_destinationt_attr_group = {
    .attributes = 4,
    .attr = bcm56990_a0_lrd_tm_mirror_on_drop_destinationt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_a0_lrd_bcmimm_tm_mirror_on_drop_destination_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56990_a0_lta_bcmimm_tm_mirror_on_drop_destination_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56990_A0_LTA_BCMIMM_TM_MIRROR_ON_DROP_DESTINATION_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56990_a0_lrd_bcmltx_tm_mirror_on_drop_destination_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56990_a0_lta_bcmltx_tm_mirror_on_drop_destination_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56990_A0_LTA_BCMLTX_TM_MIRROR_ON_DROP_DESTINATION_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_tm_mirror_on_drop_destination_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_a0_lrd_bcmimm_tm_mirror_on_drop_destination_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_a0_lrd_bcmltx_tm_mirror_on_drop_destination_validate_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_tm_mirror_on_drop_destination_map = {
    .src_id = TM_MIRROR_ON_DROP_DESTINATIONt,
    .field_data = &bcm56990_a0_lrd_tm_mirror_on_drop_destination_map_field_data,
    .groups = 2,
    .group  = bcm56990_a0_lrd_tm_mirror_on_drop_destination_map_group,
    .table_attr = &bcm56990_a0_lrd_tm_mirror_on_drop_destinationt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};