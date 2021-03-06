// Copyright � 2010-2013 The CefSharp Project. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#include "Stdafx.h"
#pragma once

using namespace System;
using namespace System::IO;

namespace CefSharp
{
    namespace Internals
    {
        private class StreamAdapter : public CefReadHandler
        {
            gcroot<Stream^> _stream;

        public:
            virtual ~StreamAdapter();
            StreamAdapter(Stream^ stream) : _stream(stream) { }

            virtual size_t Read(void* ptr, size_t size, size_t n);
            virtual int Seek(int64 offset, int whence);
            virtual int64 Tell();
            virtual int Eof();

            IMPLEMENT_LOCKING(StreamAdapter);
            IMPLEMENT_REFCOUNTING(StreamAdapter);
        };
    }
}