/*
**==============================================================================
**
** LSVMTools 
** 
** MIT License
** 
** Copyright (c) Microsoft Corporation. All rights reserved.
** 
** Permission is hereby granted, free of charge, to any person obtaining a copy
** of this software and associated documentation files (the "Software"), to deal
** in the Software without restriction, including without limitation the rights
** to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
** copies of the Software, and to permit persons to whom the Software is
** furnished to do so, subject to the following conditions:
** 
** The above copyright notice and this permission notice shall be included in 
** all copies or substantial portions of the Software.
** 
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
** IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
** AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
** SOFTWARE
**
**==============================================================================
*/
#define POSIXEFI_SUPPRESS_DEFINITIONS
#include <dlfcn.h>
#include <string.h>

void __posix_panic(const char* func);

void *posix_dlopen(const char *filename, int flags)
{
    __posix_panic("dlopen");
    return NULL;
}

void *posix_dlsym(void *handle, const char *symbol)
{
    __posix_panic("dlsym");
    return NULL;
}

char *posix_dlerror()
{
    __posix_panic("dlerror");
    return "unknown";
}

int posix_dlclose(void *handle)
{
    __posix_panic("dlclose");
    return -1;
}

int posix_dladdr(void *addr, posix_Dl_info *info)
{
    if (info)
        posix_memset(info, 0, sizeof(posix_Dl_info));
    __posix_panic("dladdr");
    return -1;
}
