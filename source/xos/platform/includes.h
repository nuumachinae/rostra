/*/
///////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
///
/// This software is provided by the author and contributors ``as is''
/// and any express or implied warranties, including, but not limited to,
/// the implied warranties of merchantability and fitness for a particular
/// purpose are disclaimed. In no event shall the author or contributors
/// be liable for any direct, indirect, incidental, special, exemplary,
/// or consequential damages (including, but not limited to, procurement
/// of substitute goods or services; loss of use, data, or profits; or
/// business interruption) however caused and on any theory of liability,
/// whether in contract, strict liability, or tort (including negligence
/// or otherwise) arising in any way out of the use of this software,
/// even if advised of the possibility of such damage.
///
///   File: includes.h
///
/// Author: $author$
///   Date: 6/18/2023
//////////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_INCLUDES_H
#define XOS_PLATFORM_INCLUDES_H

#include "xos/platform/compiler.h"

#if defined(WINDOWS)
/*/
/// Windows
/// ...
/*/
#if !defined(_WINDOWS_)
#define _INC_WINDOWS
#include <windows.h>
#if !defined(_WIN32_WINNT)
#if (WINVER >= 0x0500)
#define _WIN32_WINNT WINVER
#endif /*/ (WINVER >= 0x500) /*/
#endif /*/ !defined(_WIN32_WINNT) /*/
#undef _INC_WINDOWS
#undef _WINDOWS_
#else /*/ !defined(_WINDOWS_) /*/
#endif /*/ !defined(_WINDOWS_) /*/

/*/
/// Winsock
/// ...
/*/
#if defined(WINSOCK_2)
/*/
/// Use Windows Sockets 2 API
/*/
#include <winsock2.h>
#include <ws2tcpip.h>
#elif defined(WINSOCK_1)
/*/
/// Use Windows Sockets 1 API
/*/
#include <winsock.h>
#else /*/ defined(WINSOCK_2) /*/
/*/
/// Use Default Windows Sockets API
/// <windows.h>
/*/
#endif /*/ defined(WINSOCK_2) /*/
/*/
/// ...
/// Winsock
/*/

#include <windows.h>
#include <windowsx.h>
#include <tchar.h>
#include <wchar.h>
#include <time.h>
#include <fcntl.h>
#include <io.h>
/*/
/// ...
/// Windows
/*/
#else /*/ defined(WINDOWS) /*/
/*/
/// Unix
/// ...
/*/
/*/
/// ...
/// Unix
/*/
#endif /*/ defined(WINDOWS) /*/

#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

#if defined(__cplusplus)
namespace xos {
namespace platform {
#else /*/ defined(__cplusplus) /*/
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /* namespace platform */
} /* namespace xos */
#else /*/ defined(__cplusplus) /*/
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
extern "C" {
#else /*/ defined(__cplusplus) /*/
#endif /*/ defined(__cplusplus) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#else /*/ defined(__cplusplus) /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ ndef XOS_PLATFORM_INCLUDES_H /*/
