﻿/**
* @file     Virtual.h
* @brief    虚拟控件实现.
* @author   [Zero](22249030)
* @version  1.0
* @date     $date
* @par History:
*
* [2016-10-25] <Zero> v1.0
*
* + v1.0版发布.
*
*/
#ifndef __Virtual_H__
#define __Virtual_H__
#define Type_Virtual            0xbc68c001
#define Proc_Virtual_SetHost    601 ///设置句柄
/**按钮控件结构*/
typedef struct _ZVirtual
{
    HWND m_hwnd;        //管理的控件句柄
    ZCtlProc old_call;
}*ZuiVirtual, ZVirtual;
ZEXPORT ZuiAny ZCALL ZuiVirtualProc(ZuiInt ProcId, ZuiControl cp, ZuiVirtual p, ZuiAny Param1, ZuiAny Param2, ZuiAny Param3);


#endif	//__LABEL_H__
