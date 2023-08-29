/*
 * Copyright (c) 2017 Oticon A/S
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef _NRF_HW_MODEL_AES_CCM_H
#define _NRF_HW_MODEL_AES_CCM_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C"{
#endif

void nrf_ccm_TASK_KSGEN(void);
void nrf_ccm_TASK_CRYPT(void);
void nrf_ccm_TASK_STOP(void);
void nrf_ccm_TASK_RATEOVERRIDE(void);
void nrf_ccm_radio_received_packet(bool crc_error);
void nrf_ccm_regw_sideeffects_INTENSET(void);
void nrf_ccm_regw_sideeffects_INTENCLR(void);
void nrf_ccm_regw_sideeffects_TASKS_KSGEN(void);
void nrf_ccm_regw_sideeffects_TASKS_CRYPT(void);
void nrf_ccm_regw_sideeffects_TASKS_STOP(void);

#ifdef __cplusplus
}
#endif

#endif
