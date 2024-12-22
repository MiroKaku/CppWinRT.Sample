#include "Class.h"
#include "Class.g.cpp"

namespace winrt::CppWinRT::Component::implementation
{
    hstring componentString = L"Hello from an Non-Packaged WinRT Component! :D";

    hstring Class::MyProperty()
    {
        return componentString;
    }

    void Class::MyProperty(hstring /* value */)
    {
    }

    hstring Class::MyProperty2()
    {
        return componentString;
    }

    void Class::MyProperty2(hstring /* value */)
    {
    }
}
