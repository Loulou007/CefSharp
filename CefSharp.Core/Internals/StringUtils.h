// Copyright � 2010-2013 The CefSharp Project. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#include "Stdafx.h"
#pragma once

using namespace System;

namespace CefSharp
{
    namespace Internals
    {
        private class StringUtils
        {
        public:
            /// <summary>
            /// Converts an unmanaged string to a (managed) .NET string.
            /// </summary>
            /// <param name="cefStr">The string that should be converted.</param>
            /// <returns>A .NET string.</returns>
            static String^ ToClr(const cef_string_t& cefStr);

            /// <summary>
            /// Converts an unmanaged string to a (managed) .NET string.
            /// </summary>
            /// <param name="cefStr">The string that should be converted.</param>
            /// <returns>A .NET string.</returns>
            static String^ ToClr(const CefString& cefStr);

            /// <summary>
            /// Converts a .NET string to native (unmanaged) format. Note that this method does not allocate a new copy of the
            // string, but rather returns a pointer to the memory in the existing managed String object.
            /// </summary>
            /// <param name="str">The string that should be converted.</param>
            /// <returns>An unmanaged representation of the provided string, or an empty string if the input string is a nullptr.</returns>
            static CefString ToNative(String^ str);

            /// <summary>
            /// Assigns the provided cef_string_t object from the given .NET string.
            /// </summary>
            /// <param name="cefStr">The cef_string_t that should be updated.</param>
            /// <param name="str">The .NET string whose value should be used to update cefStr.</param>
            static void AssignNativeFromClr(cef_string_t& cefStr, String^ str);
        };
    }
}