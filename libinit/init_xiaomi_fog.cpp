/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t fog_global_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "fog",
    .model = "Redmi 10C",
    .build_fingerprint = "Redmi/fog/fog:11/RKQ1.211001.001/V13.0.13.0.RGEMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t fog_global2_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "fog",
    .model = "Redmi 10 Power",
    .build_fingerprint = "Redmi/fog_global2/fog:11/RKQ1.211001.001/V13.0.13.0.RGEMIXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t fog_in_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "fog",
    .model = "Redmi 10",
    .build_fingerprint = "Redmi/fog_in/fog:11/RKQ1.211001.001/V13.0.13.0.RGEINXM:user/release-keys",

    .nfc = false,
};

static const variant_info_t rain_global_info = {
    .hwc_value = "",
    .sku_value = "c3qn",

    .brand = "Redmi",
    .device = "rain",
    .model = "Redmi 10C",
    .build_fingerprint = "Redmi/rain_global/rain:11/RKQ1.211001.001/V13.0.13.0.RGEMIXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t wind_global_info = {
    .hwc_value = "",
    .sku_value = "",

    .brand = "Redmi",
    .device = "wind",
    .model = "Redmi 10C",
    .build_fingerprint = "Redmi/wind_global/wind:11/RKQ1.211001.001/V13.0.13.0.RGEMIXM:user/release-keys",

    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    fog_global_info,
    fog_global2_info,
    fog_in_info,
    rain_global_info,
    wind_global_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
