
// frame.cpp : ����Ӧ�ó��������Ϊ��
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
	return TRUE;
}

