; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CATINADlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "ATINA.h"

ClassCount=4
Class1=CATINAApp
Class2=CATINADlg
Class3=CAboutDlg

ResourceCount=4
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_einstellungen
Class4=Einstellungen
Resource4=IDD_ATINA_DIALOG

[CLS:CATINAApp]
Type=0
HeaderFile=ATINA.h
ImplementationFile=ATINA.cpp
Filter=N

[CLS:CATINADlg]
Type=0
HeaderFile=ATINADlg.h
ImplementationFile=ATINADlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_input

[CLS:CAboutDlg]
Type=0
HeaderFile=ATINADlg.h
ImplementationFile=ATINADlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDOK,button,1342178048
Control4=IDC_STATIC,static,1342308352

[DLG:IDD_ATINA_DIALOG]
Type=1
Class=CATINADlg
ControlCount=19
Control1=IDOK,button,1342181120
Control2=ID_HELP,button,1342177280
Control3=IDC_input,edit,1342242944
Control4=IDC_output,edit,1342242944
Control5=IDC_berechnen,button,1342242816
Control6=IDC_FOC,button,1342246915
Control7=IDC_CHECK2,button,1342246915
Control8=IDC_FOCN,button,1342246915
Control9=IDC_OUT,button,1342246915
Control10=IDC_info,button,1342242816
Control11=IDC_STATIC,button,1342178055
Control12=IDC_STATIC,button,1342177287
Control13=IDC_STATIC,button,1342177799
Control14=IDC_reinigen,button,1342242816
Control15=IDC_einstellungen,button,1342242816
Control16=IDC_STATIC,button,1342177287
Control17=IDC_STATIC,button,1342177287
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352

[DLG:IDD_einstellungen]
Type=1
Class=Einstellungen
ControlCount=27
Control1=IDOK,button,1342177281
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_n,edit,1342242944
Control5=IDC_EDIT_k,edit,1342177408
Control6=IDC_output2,edit,1342242944
Control7=IDC_clearlog,button,1342242816
Control8=IDC_output3,edit,1342242944
Control9=IDC_STATIC,button,1342177543
Control10=IDC_STATIC,button,1342177287
Control11=IDC_STATIC,button,1342177287
Control12=IDC_EDIT_n2,edit,1342242944
Control13=IDC_EDIT_k2,edit,1342177408
Control14=IDC_STATIC,static,1342308352
Control15=IDC_STATIC,static,1342308352
Control16=IDC_EDIT_n3,edit,1342242944
Control17=IDC_EDIT_k3,edit,1342177408
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352
Control20=IDC_EDIT_n4,edit,1342242944
Control21=IDC_EDIT_k4,edit,1342177408
Control22=IDC_STATIC,static,1342308352
Control23=IDC_STATIC,static,1342308352
Control24=IDC_STATIC,static,1342308352
Control25=IDC_CHECK1,button,1342250755
Control26=IDC_clearlog2,button,1342242816
Control27=IDC_STATIC,static,1342308352

[CLS:Einstellungen]
Type=0
HeaderFile=Einstellungen.h
ImplementationFile=Einstellungen.cpp
BaseClass=CDialog
Filter=D
LastObject=Einstellungen

