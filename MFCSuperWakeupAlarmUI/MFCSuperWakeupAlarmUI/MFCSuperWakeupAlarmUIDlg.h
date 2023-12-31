﻿
// MFCSuperWakeupAlarmUIDlg.h: 头文件
//

#pragma once

#define MYWM_NOTIFYSHUTDOWNBLOCKING (WM_USER+0x10)

// CMFCSuperWakeupAlarmUIDlg 对话框
class CMFCSuperWakeupAlarmUIDlg : public CDialogEx
{
// 构造
public:
	CMFCSuperWakeupAlarmUIDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCSUPERWAKEUPALARMUI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButtonTots();
	afx_msg void OnBnClickedButton3();
public:
	CComboBox cComboCombox;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedCancel();
	bool stateIsRunning;
	afx_msg BOOL OnQueryEndSession();
protected:
	afx_msg LRESULT OnMywmNotifyshutdownblocking(WPARAM wParam, LPARAM lParam);
public:
	CButton cCheckLowPower;
	HANDLE myThread_Internal;
};
