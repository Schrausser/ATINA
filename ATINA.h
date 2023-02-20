// ATINA.h : main header file for the ATINA application
//

#if !defined(AFX_ATINA_H__1BA4F50B_CF0D_46D5_AE73_E5D7A8DFB7EE__INCLUDED_)
#define AFX_ATINA_H__1BA4F50B_CF0D_46D5_AE73_E5D7A8DFB7EE__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CATINAApp:
// See ATINA.cpp for the implementation of this class
//

class CATINAApp : public CWinApp
{
public:
	CATINAApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CATINAApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CATINAApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ATINA_H__1BA4F50B_CF0D_46D5_AE73_E5D7A8DFB7EE__INCLUDED_)
