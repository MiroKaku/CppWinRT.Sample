#pragma once

#include <windows.h>

#pragma push_macro("GetCurrentTime")
#pragma push_macro("TRY")
#undef GetCurrentTime
#undef TRY
#include <winrt/base.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>
#pragma pop_macro("TRY")
#pragma pop_macro("GetCurrentTime")
