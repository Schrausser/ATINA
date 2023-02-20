#if !defined(AFX_EINSTELLUNGEN_H__2191261B_0CC2_4752_BFFF_C146EA34FF6B__INCLUDED_)
#define AFX_EINSTELLUNGEN_H__2191261B_0CC2_4752_BFFF_C146EA34FF6B__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Einstellungen.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Einstellungen dialog

class Einstellungen : public CDialog
{
// Construction
public:
	Einstellungen(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Einstellungen)
	enum { IDD = IDD_einstellungen };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Einstellungen)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Einstellungen)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EINSTELLUNGEN_H__2191261B_0CC2_4752_BFFF_C146EA34FF6B__INCLUDED_)
