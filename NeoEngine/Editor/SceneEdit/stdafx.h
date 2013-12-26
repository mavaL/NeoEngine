
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件

#pragma once


#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // 从 Windows 头中排除极少使用的资料
#endif

// 关闭 MFC 对某些常见但经常可放心忽略的警告消息的隐藏
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC 核心组件和标准组件
#include <afxext.h>         // MFC 扩展

//STL
#include <vector>
#include <map>
#include <list>
#include <algorithm>
#include <tuple>
#include <unordered_map>
#include <functional>

//rapidxml
#include "rapidxml/rapidxml.hpp"       
#include "rapidxml/rapidxml_utils.hpp"
#include "rapidxml/rapidxml_print.hpp"

//XTP
#include <XTToolkitPro.h>

//GDI+
#include <GdiPlus.h>
#pragma comment(lib, "gdiplus.lib")

//D3D
#include <d3d11.h>
#include <d3dx11.h>

//NeoEngine
#include <Prerequiestity.h>
#include <MathDef.h>
#include <Singleton.h>


