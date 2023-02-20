// ATINADlg.h : header file
//

#if !defined(AFX_ATINADLG_H__F0A315D7_4FCE_4285_BC9E_18FCE1CD7F2C__INCLUDED_)
#define AFX_ATINADLG_H__F0A315D7_4FCE_4285_BC9E_18FCE1CD7F2C__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CATINADlg dialog

class CATINADlg : public CDialog
{
// Construction
public:
	CATINADlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CATINADlg)
	enum { IDD = IDD_ATINA_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CATINADlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CATINADlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnDestroy();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void Onfile();
	afx_msg void OnUpdateRichedit1();
	afx_msg void Oninfo();
	afx_msg void Oneinstellungen();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ATINADLG_H__F0A315D7_4FCE_4285_BC9E_18FCE1CD7F2C__INCLUDED_)
