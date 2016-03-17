// mainframe.cpp : implementation file
//

#include "stdafx.h"
#include "frame.h"
#include "mainframe.h"


// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CWnd)

CMainFrame::CMainFrame()
{

}

CMainFrame::~CMainFrame()
{
}


BEGIN_MESSAGE_MAP(CMainFrame, CWnd)
	ON_WM_NCDESTROY()
END_MESSAGE_MAP()


BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	HINSTANCE hInstance = (HINSTANCE)AfxGetInstanceHandle();
	ASSERT(hInstance);

	WNDCLASSEX wcex;
	wcex.cbSize = sizeof(WNDCLASSEX);
	BOOL bRet = GetClassInfoEx(hInstance, cs.lpszClass, &wcex);
	if (bRet) {
		return TRUE;
	}
	wcex.style = CS_VREDRAW | CS_HREDRAW | CS_DBLCLKS;
	wcex.lpfnWndProc = AfxWndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = wcex.hIconSm = (HICON)AfxGetApp()->LoadIcon(MAKEINTRESOURCE(IDR_MAINFRAME));
	wcex.hCursor = (HCURSOR)AfxGetApp()->LoadStandardCursor(IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wcex.lpszMenuName = NULL;
	wcex.lpszClassName = cs.lpszClass;
	bRet = RegisterClassEx(&wcex);
	return bRet;
}




void CMainFrame::PostNcDestroy()
{
	delete this;
	CWnd::PostNcDestroy();
}
