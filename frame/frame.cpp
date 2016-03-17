
// frame.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "frame.h"
#include "mainframe.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CframeApp

BEGIN_MESSAGE_MAP(CframeApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CframeApp ����

CframeApp::CframeApp()
{

}


// Ψһ��һ�� CframeApp ����

CframeApp theApp;


// CframeApp ��ʼ��

BOOL CframeApp::InitInstance()
{
	CWinApp::InitInstance();
	CMainFrame * mainframe = new CMainFrame();
	m_pMainWnd = mainframe;
	mainframe->CreateEx(0, _T("MAINFRAME"), _T("ninglei_w"),
		WS_POPUPWINDOW | WS_MAXIMIZEBOX | WS_MINIMIZEBOX | WS_THICKFRAME,
		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, NULL, NULL);
	mainframe->ShowWindow(SW_SHOW);
	mainframe->UpdateWindow();
	return TRUE;
}

