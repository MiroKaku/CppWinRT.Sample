#include "winrt/CppWinRT.Component.h"

using namespace winrt;
using namespace Windows::Foundation;
using namespace CppWinRT::Component;

int wmain(int /*argc*/, wchar_t* /*argv*/[])
{
    init_apartment();

    Class component;
    wprintf(L"StaticClass       : %s\n", StaticClass::ToString().c_str());
    wprintf(L"Class.BaseClass   : %s\n", component.as<IBaseClass>().ToString().c_str());
    wprintf(L"Class.MyProperty  : %s\n", component.MyProperty().c_str());

    return 0;
}
