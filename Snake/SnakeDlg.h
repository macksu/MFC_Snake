﻿
// SnakeDlg.h: 头文件
//

#include "SHE.h"
#pragma once


// CSnakeDlg 对话框
class CSnakeDlg : public CDialogEx
{
// 构造
public:
	CSnakeDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SNAKE_DIALOG };
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
	afx_msg void OnStart();
	SHE snake1;
	void DrawSnake();
	CPoint Food; //食物
	afx_msg void OnEND();
};
