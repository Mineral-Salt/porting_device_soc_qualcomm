/*
 *
 * Copyright 2018 Rockchip Electronics Co., LTD.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _ROCKCHIP_OSAL_ENV_H_
#define _ROCKCHIP_OSAL_ENV_H_

#include "securec.h"
#include "OMX_Core.h"

#ifdef __cplusplus
extern "C" {
#endif

OMX_ERRORTYPE Rockchip_OSAL_GetEnvU32(const char *name, OMX_U32 *value, OMX_U32 default_value);
OMX_ERRORTYPE Rockchip_OSAL_GetEnvStr(const char *name, char *value, char *default_value);
OMX_ERRORTYPE Rockchip_OSAL_SetEnvU32(const char *name, OMX_U32 value);
OMX_ERRORTYPE Rockchip_OSAL_SetEnvStr(const char *name, char *value);

#ifdef __cplusplus
}
#endif

#endif
