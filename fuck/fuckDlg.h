
// fuckDlg.h : ͷ�ļ�
//

#pragma once


// CfuckDlg �Ի���
class CfuckDlg : public CDialogEx
{
// ����
public:
	CfuckDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_FUCK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_str;
	double temp;
	int flag;
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClickedC7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedPoint();
	afx_msg void OnBnClickedDel();
	afx_msg void OnBnClickedjia();
	afx_msg void OnBnClickedjian();
	afx_msg void OnBnClickedcheng();
	afx_msg void OnBnClickedchu();
	afx_msg void OnBnClickedCdengyu();
};
