
// Atomtool.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CAtomtoolApp:
// See Atomtool.cpp for the implementation of this class
//

class CAtomtoolApp : public CWinApp
{
public:
	CAtomtoolApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CAtomtoolApp theApp;