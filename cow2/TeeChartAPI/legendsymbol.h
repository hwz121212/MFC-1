#if !defined(AFX_LEGENDSYMBOL_H__A558D7CC_0645_410E_916B_F4723B2DD779__INCLUDED_)
#define AFX_LEGENDSYMBOL_H__A558D7CC_0645_410E_916B_F4723B2DD779__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CLegendSymbol wrapper class

class CLegendSymbol : public COleDispatchDriver
{
public:
	CLegendSymbol() {}		// Calls COleDispatchDriver default constructor
	CLegendSymbol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CLegendSymbol(const CLegendSymbol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetContinuous();
	void SetContinuous(BOOL bNewValue);
	long GetPosition();
	void SetPosition(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetWidthUnits();
	void SetWidthUnits(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LEGENDSYMBOL_H__A558D7CC_0645_410E_916B_F4723B2DD779__INCLUDED_)