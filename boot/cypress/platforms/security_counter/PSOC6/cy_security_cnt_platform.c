/*
 * Copyright (c) 2020 Arm Limited.
 * Copyright (c) 2021 Infineon Technologies AG
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdint.h>
#include "cy_security_cnt_platform.h"
#include "sysflash/sysflash.h"
#include "bootutil/bootutil_log.h"

#if defined MCUBOOT_HW_ROLLBACK_PROT

/*
 * Reads a data corresponding to security counter which is stored in
 * efuses of chip and converts it actual value of security conter
 *
 * @param security_cnt     Pointer to a variable, where security conter value would be stored
 *
 * @return                  FIH_SUCESS on success; FIH_FAILURE on failure.
 */
fih_int platform_security_counter_get(fih_uint *security_cnt) {

    (void)security_cnt;

    BOOT_LOG_ERR("Hardware security conter is not supported on PSOC6 platform.");

    FIH_RET(FIH_FAILURE);
}

/**
 * Updates the stored value of a given image's security counter with a new
 * security counter value if the new one is greater.
 *
 * @param reprov_packet     Pointer to a reprovisioning packet containing NV counter.
 * @param packet_len        Length of a packet
 * @param img_security_cnt  Security conter value of image
 *
 * @return                  0 on success; nonzero on failure.
 */
int32_t platform_security_counter_update(fih_uint img_security_cnt, void *custom_data)
{
    (void)img_security_cnt;
    (void)custom_data;

    BOOT_LOG_ERR("Hardware security conter is not supported on PSOC6 platform.");

    return -1;
}

#endif /* defined MCUBOOT_HW_ROLLBACK_PROT */