// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__F2230523_26E5_44C1_9257_A6FC51587248__INCLUDED_)
#define AFX_STDAFX_H__F2230523_26E5_44C1_9257_A6FC51587248__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers


#include <stdio.h>

// TODO: reference additional headers your program requires here
#include "assert.h"

#pragma warning (disable: 4786)
#include <iostream>
#include <map>
#include <vector>
#include <string>

#include <boost/smart_ptr.hpp>

//---------------------------------------------------------------------------
#define countof(x) (sizeof(x) / sizeof(x[0]))
//#define RELEASE(x) if (x) (x)->Release ();
#define DELETE(x)  { delete (x); x = NULL; }

typedef std::vector<std::string> StringVector;

//---------------------------------------------------------------------------
void Info (const char* message);
void Notice (const char* message);
void Warning (const char* message);
void Error (const char* message);

#define warn_if(x) (x) ? Warning (#x), false : true;
#define warn_with_msg_if(x,y) (x) ? Warning (y), false : true;


#include "SSException.h"



//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__F2230523_26E5_44C1_9257_A6FC51587248__INCLUDED_)
