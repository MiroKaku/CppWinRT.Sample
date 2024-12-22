#include "StaticClass.h"
#include "StaticClass.g.cpp"

namespace winrt::CppWinRT::Component::implementation
{
    hstring StaticClass::ToString()
    {
        return L"StaticClass";
    }
}
