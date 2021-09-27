// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ImageIconSource.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(ImageIconSource)
}

#include "ImageIconSource.g.cpp"

GlobalDependencyProperty ImageIconSourceProperties::s_ImageSourceProperty{ nullptr };

ImageIconSourceProperties::ImageIconSourceProperties()
{
    EnsureProperties();
}

void ImageIconSourceProperties::EnsureProperties()
{
    IconSource::EnsureProperties();
    if (!s_ImageSourceProperty)
    {
        s_ImageSourceProperty =
            InitializeDependencyProperty(
                L"ImageSource",
                winrt::name_of<winrt::ImageSource>(),
                winrt::name_of<winrt::ImageIconSource>(),
                false /* isAttached */,
                ValueHelper<winrt::ImageSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnImageSourcePropertyChanged));
    }
}

void ImageIconSourceProperties::ClearProperties()
{
    s_ImageSourceProperty = nullptr;
    IconSource::ClearProperties();
}

void ImageIconSourceProperties::OnImageSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ImageIconSource>();
    winrt::get_self<ImageIconSource>(owner)->OnPropertyChanged(args);
}

void ImageIconSourceProperties::ImageSource(winrt::ImageSource const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<ImageIconSource*>(this)->SetValue(s_ImageSourceProperty, ValueHelper<winrt::ImageSource>::BoxValueIfNecessary(value));
    }
}

winrt::ImageSource ImageIconSourceProperties::ImageSource()
{
    return ValueHelper<winrt::ImageSource>::CastOrUnbox(static_cast<ImageIconSource*>(this)->GetValue(s_ImageSourceProperty));
}