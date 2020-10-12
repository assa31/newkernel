/*
* drv_isrcb.h- Sigmastar
*
* Copyright (C) 2018 Sigmastar Technology Corp.
*
* Author: karl.xiao <karl.xiao@sigmastar.com.tw>
*
* This software is licensed under the terms of the GNU General Public
* License version 2, as published by the Free Software Foundation, and
* may be copied, distributed, and modified under those terms.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
*/
#ifndef _DRV_ISRCB_
#define _DRV_ISRCB_

typedef enum
{
    eISRCB_ID_ISP_WDMA0_DONE=0,
    eISRCB_ID_ISP_WDMA1_DONE,
    eISRCB_ID_ISP_WDMA2_DONE,
    eISRCB_ID_ISP_WDMA3_DONE,
    eISRCB_ID_MAX,
}ISRCB_ID_e;

typedef void* ISRCB_Handle;
typedef void (*ISRCB_fp)(void* pData);

ISRCB_Handle ISRCB_RegisterCallback(ISRCB_ID_e eID,ISRCB_fp fpCB,void* pData);
void ISRCB_UnRegisterCallback(ISRCB_Handle hHnd);
void ISRCB_Proc(ISRCB_ID_e eID);

#endif