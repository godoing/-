
// fuckDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "fuck.h"
#include "fuckDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CfuckDlg �Ի���




CfuckDlg::CfuckDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CfuckDlg::IDD, pParent)
	, m_str(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CfuckDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_str);
}

BEGIN_MESSAGE_MAP(CfuckDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, &CfuckDlg::OnBnClicked1)
	ON_BN_CLICKED(IDC_2, &CfuckDlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_3, &CfuckDlg::OnBnClicked3)
	ON_BN_CLICKED(IDC_4, &CfuckDlg::OnBnClicked4)
	ON_BN_CLICKED(IDC_5, &CfuckDlg::OnBnClicked5)
	ON_BN_CLICKED(IDC_6, &CfuckDlg::OnBnClicked6)
	ON_BN_CLICKED(IDC7, &CfuckDlg::OnBnClickedC7)
	ON_BN_CLICKED(IDC_8, &CfuckDlg::OnBnClicked8)
	ON_BN_CLICKED(IDC_9, &CfuckDlg::OnBnClicked9)
	ON_BN_CLICKED(IDC_0, &CfuckDlg::OnBnClicked0)
	ON_BN_CLICKED(IDC_POINT, &CfuckDlg::OnBnClickedPoint)
	ON_BN_CLICKED(IDC_DEL, &CfuckDlg::OnBnClickedDel)
	ON_BN_CLICKED(IDC_jia, &CfuckDlg::OnBnClickedjia)
	ON_BN_CLICKED(IDC_jian, &CfuckDlg::OnBnClickedjian)
	ON_BN_CLICKED(IDC_cheng, &CfuckDlg::OnBnClickedcheng)
	ON_BN_CLICKED(IDC_chu, &CfuckDlg::OnBnClickedchu)
	ON_BN_CLICKED(IDCdengyu, &CfuckDlg::OnBnClickedCdengyu)
END_MESSAGE_MAP()


// CfuckDlg ��Ϣ�������

BOOL CfuckDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CfuckDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CfuckDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CfuckDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CfuckDlg::OnBnClicked1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"1";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"2";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"3";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"4";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"5";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"6";
	UpdateData(false);
}


void CfuckDlg::OnBnClickedC7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"7";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"8";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"9";
	UpdateData(false);
}


void CfuckDlg::OnBnClicked0()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	m_str=m_str+L"0";
	UpdateData(false);
}


void CfuckDlg::OnBnClickedPoint()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if(m_str.Find(L".")==-1)
		m_str=m_str+L".";
	UpdateData(false);

}


void CfuckDlg::OnBnClickedDel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_str=" ";
		UpdateData(false);
}


void CfuckDlg::OnBnClickedjia()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	flag=1;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
}


void CfuckDlg::OnBnClickedjian()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	flag=2;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
}


void CfuckDlg::OnBnClickedcheng()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	flag=3;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
}


void CfuckDlg::OnBnClickedchu()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	flag=4;
	UpdateData(true);
	temp=_ttof(m_str);
	m_str="";
	UpdateData(false);
}


void CfuckDlg::OnBnClickedCdengyu()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	UpdateData(true);
	if(flag==1)
	{
		temp=temp+_ttof(m_str);
	}
	if(flag==2)
	{
		temp=temp-_ttof(m_str);
	}
	if(flag==3)
	{
		temp=temp*_ttof(m_str);
	}
	if(flag==4)
	{
		temp=temp/_ttof(m_str);
	}
	m_str.Format(L"%lf",temp);
	UpdateData(false);

}
