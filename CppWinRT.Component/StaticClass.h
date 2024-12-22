#pragma once
#include "StaticClass.g.h"

namespace winrt::CppWinRT::Component::implementation
{
    struct StaticClass
    {
        static hstring ToString();
    };
}

namespace winrt::CppWinRT::Component::factory_implementation
{
    struct StaticClass : StaticClassT<StaticClass, implementation::StaticClass>
    {
    };
}
