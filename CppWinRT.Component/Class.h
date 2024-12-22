#pragma once
#include "Class.g.h"
#include "BaseClass.h"

namespace winrt::CppWinRT::Component::implementation
{
    struct Class : ClassT<Class, implementation::BaseClass>
    {
        Class() = default;

        hstring MyProperty();
        hstring MyProperty2();

        void MyProperty(hstring value);
        void MyProperty2(hstring value);
    };
}

namespace winrt::CppWinRT::Component::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
