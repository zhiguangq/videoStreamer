
// videoStreamerDlg.h : ͷ�ļ�
//

#pragma once
#include "CameraDS.h"


// CvideoStreamerDlg �Ի���
class CvideoStreamerDlg : public CDialog
{
// ����
public:
	CvideoStreamerDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_VIDEOSTREAMER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

    CCameraDS m_CamDS;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    CComboBox m_comboCam;
};
