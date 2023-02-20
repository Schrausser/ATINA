// Einstellungen.cpp : implementation file
//

#include "stdafx.h"
#include "ATINA.h"
#include "Einstellungen.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Einstellungen dialog


Einstellungen::Einstellungen(CWnd* pParent /*=NULL*/)
	: CDialog(Einstellungen::IDD, pParent)
{
	//{{AFX_DATA_INIT(Einstellungen)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Einstellungen::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Einstellungen)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Einstellungen, CDialog)
	//{{AFX_MSG_MAP(Einstellungen)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Einstellungen message handlers
