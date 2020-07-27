/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56990_b0/bcm56990_b0_MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILE.map.ltl for
 *      bcm56990_b0
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
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_b0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILE field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map_field_data_mmd[] = {
    { /* 0 MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 1 OPAQUE_DATA */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0xffffffff,
      .depth = 3,
      .width = 32,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map_field_data = {
    .fields = 2,
    .field = bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 8191,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s19[1] = {
    {
        .field_id  = MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILEt_OPAQUE_DATAf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_opaque_data_profile_dst_field_desc_d17[3] = {
    {
        .field_id  = OPAQUE_FIELD_1f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OPAQUE_FIELD_2f,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = OPAQUE_FIELD_3f,
        .field_idx = 0,
        .minbit    = 64,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s19_d17_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_TO_MULTI_FIELDS_SET_XFRM_HANDLER_FWD_S19_D17_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s19,
    .dst_fields = 3,
    .dst = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_opaque_data_profile_dst_field_desc_d17,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s19_d17_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_TO_MULTI_FIELDS_SET_XFRM_HANDLER_REV_S19_D17_ID,
    .src_fields = 3,
    .src = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_mon_inband_telemetry_opaque_data_profile_dst_field_desc_d17,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_array_to_multi_fields_set_src_field_desc_s19,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profilet_egr_metadata_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 12,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILEt_MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s19_d17 */
                .desc = &bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_fwd_s19_d17_desc,
            },
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s19_d17 */
                .desc = &bcm56990_b0_lta_bcmltx_array_to_multi_fields_set_xfrm_handler_rev_s19_d17_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_METADATA_PROFILEm,
        },
        .entries = 3,
        .entry = bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profilet_egr_metadata_profile_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map = {
    .src_id = MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILEt,
    .field_data = &bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profile_map_group,
    .table_attr = &bcm56990_b0_lrd_mon_inband_telemetry_opaque_data_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};