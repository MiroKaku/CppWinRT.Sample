#include "BaseClass.h"
#include "BaseClass.g.cpp"

namespace winrt::CppWinRT::Component::implementation
{
    hstring BaseClass::ToString()
    {
        return GetRuntimeClassName();
    }
}
