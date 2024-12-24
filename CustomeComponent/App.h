﻿#pragma once

#define DISABLE_XAML_GENERATED_MAIN
#include "App.g.h"

namespace winrt::CustomeComponent::implementation
{
    struct App : AppT<App>
    {
    public:
        App();
        ~App();

        void Close();

        winrt::Windows::UI::Xaml::Markup::IXamlType GetXamlType(winrt::Windows::UI::Xaml::Interop::TypeName const& type);
        winrt::Windows::UI::Xaml::Markup::IXamlType GetXamlType(winrt::hstring const& fullName);
        winrt::com_array<winrt::Windows::UI::Xaml::Markup::XmlnsDefinition> GetXmlnsDefinitions();

    private:
        winrt::Windows::UI::Xaml::Hosting::WindowsXamlManager m_windowsXamlManager{ nullptr };
        winrt::CustomeComponent::XamlMetaDataProvider m_xamlMetaDataProvider;
    };
} // namespace winrt::CustomeComponent::implementation

namespace winrt::CustomeComponent::factory_implementation
{
    struct App : AppT<App, implementation::App>
    {
    };
} // namespace winrt::CustomeComponent::factory_implementation
