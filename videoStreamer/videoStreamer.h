
// videoStreamer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CvideoStreamerApp: 
// �йش����ʵ�֣������ videoStreamer.cpp
//

class CvideoStreamerApp : public CWinApp
{
public:
	CvideoStreamerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CvideoStreamerApp theApp;