#if !defined(AFX_DRAGMARKSTOOL_H__76014595_85D7_4F4D_B35C_E15839F04FEE__INCLUDED_)
#define AFX_DRAGMARKSTOOL_H__76014595_85D7_4F4D_B35C_E15839F04FEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CDragMarksTool wrapper class

class CDragMarksTool : public COleDispatchDriver
{
public:
	CDragMarksTool() {}		// Calls COleDispatchDriver default constructor
	CDragMarksTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDragMarksTool(const CDragMarksTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DRAGMARKSTOOL_H__76014595_85D7_4F4D_B35C_E15839F04FEE__INCLUDED_)
