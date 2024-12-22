#pragma once

#include "BaseClass.g.h"

namespace winrt::CppWinRT::Component::implementation
{
    struct BaseClass : BaseClassT<BaseClass>
    {
        BaseClass() = default;

        hstring ToString();
    };
}

namespace winrt::CppWinRT::Component::factory_implementation
{
    struct BaseClass : BaseClassT<BaseClass, implementation::BaseClass>
    {
    };
}
