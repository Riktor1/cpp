#pragma once

#include <agile.h>
#include <array>
#include <d2d1_2.h>
#include <d3d11_4.h>
#include <DirectXColors.h>
#include <dwrite_2.h>
#include <map>
#include <mutex>
#include <wincodec.h>
#include <WindowsNumerics.h>
#include <collection.h>
#include <ppltasks.h>

#include <mfapi.h>
#include <mfobjects.h>
#include <mftransform.h>
#include <codecapi.h>
#include <mfidl.h>
#include <mferror.h>
#include <assert.h>
#include <stdio.h>
#include <tchar.h>
#include <evr.h>
#include <mfplay.h>
#include <mfreadwrite.h>
#include <wmcodecdsp.h>
#include <strsafe.h>

#include "App.xaml.h"
#include <list>

//
// Error handling
//

// Exception-based error handling
#define CHK(statement)  {HRESULT _hr = (statement); if (FAILED(_hr)) { throw ref new Platform::COMException(_hr); };}
#define CHKNULL(p)  {if ((p) == nullptr) { throw ref new Platform::NullReferenceException(L#p); };}
#define CHKOOM(p)  {if ((p) == nullptr) { throw ref new Platform::OutOfMemoryException(L#p); };}

// Exception-free error handling
#define CHK_RETURN(statement) {hr = (statement); if (FAILED(hr)) { return hr; };}