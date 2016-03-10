
// frame.cpp : 定义应用程序的类行为。
//

#include "stdafx.h"
#include "frame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CframeApp

BEGIN_MESSAGE_MAP(CframeApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CframeApp 构造

CframeApp::CframeApp()
{

}


// 唯一的一个 CframeApp 对象

CframeApp theApp;


// CframeApp 初始化

BOOL CframeApp::InitInstance()
{

	CWinApp::InitInstance();
	return TRUE;
}

