﻿/**
* @file     Edit.h
* @brief    编辑框控件实现.
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
#ifndef __EDIT_H__
#define __EDIT_H__
#define Type_Edit           0xa4fb51ff
/**按钮控件结构*/
typedef struct _ZEdit
{
    ZuiStringFormat sf;
    ZuiColor FrameColor;    //边框颜色
    ZuiColor FireColor;     //点燃颜色
    ZuiColor FocusColor;    //焦点颜色
    ZuiInt MouseType;
    ZuiInt StrBufLen;       //文本缓冲长度
    ZuiBool type;           //光标状态
    ZuiInt x;               //光标位置
    ZuiInt pos;             //写入偏移
    ZuiInt StrLen;          //文本长度
    ZCtlProc old_call;
}*ZuiEdit, ZEdit;
ZEXPORT ZuiAny ZCALL ZuiEditProc(ZuiInt ProcId, ZuiControl cp, ZuiEdit p, ZuiAny Param1, ZuiAny Param2, ZuiAny Param3);


#endif //__EDIT_H__
