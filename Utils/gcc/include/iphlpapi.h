/**
 * @file iphlpapi.h
 * Copyright 2012, 2013 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#ifndef _IPHLPAPI_H
#define _IPHLPAPI_H
#pragma GCC system_header
#include <_mingw.h>

#include <iprtrmib.h>
#include <ipexport.h>
#include <iptypes.h>
#ifdef __cplusplus
extern "C" {
#endif

DWORD WINAPI AddIPAddress(IPAddr,IPMask,DWORD,PULONG,PULONG);
DWORD WINAPI CreateIpForwardEntry(PMIB_IPFORWARDROW);
DWORD WINAPI CreateIpNetEntry(PMIB_IPNETROW);
DWORD WINAPI CreateProxyArpEntry(DWORD,DWORD,DWORD);
DWORD WINAPI DeleteIPAddress(ULONG);
DWORD WINAPI DeleteIpForwardEntry(PMIB_IPFORWARDROW);
DWORD WINAPI DeleteIpNetEntry(PMIB_IPNETROW);
DWORD WINAPI DeleteProxyArpEntry(DWORD,DWORD,DWORD);
DWORD WINAPI EnableRouter(HANDLE*,OVERLAPPED*);
DWORD WINAPI FlushIpNetTable(DWORD);
DWORD WINAPI GetAdapterIndex(LPWSTR,PULONG);
DWORD WINAPI GetAdaptersInfo(PIP_ADAPTER_INFO,PULONG);
DWORD WINAPI GetBestInterface(IPAddr,PDWORD);
DWORD WINAPI GetBestRoute(DWORD,DWORD,PMIB_IPFORWARDROW);
DWORD WINAPI GetFriendlyIfIndex(DWORD);
DWORD WINAPI GetIcmpStatistics(PMIB_ICMP);
DWORD WINAPI GetIfEntry(PMIB_IFROW);
DWORD WINAPI GetIfTable(PMIB_IFTABLE,PULONG,BOOL);
DWORD WINAPI GetInterfaceInfo(PIP_INTERFACE_INFO,PULONG);
DWORD WINAPI GetIpAddrTable(PMIB_IPADDRTABLE,PULONG,BOOL);
DWORD WINAPI GetIpForwardTable(PMIB_IPFORWARDTABLE,PULONG,BOOL);
DWORD WINAPI GetIpNetTable(PMIB_IPNETTABLE,PULONG,BOOL);
DWORD WINAPI GetIpStatistics(PMIB_IPSTATS);
DWORD WINAPI GetNetworkParams(PFIXED_INFO,PULONG);
DWORD WINAPI GetNumberOfInterfaces(PDWORD);
DWORD WINAPI GetPerAdapterInfo(ULONG,PIP_PER_ADAPTER_INFO, PULONG);
BOOL WINAPI GetRTTAndHopCount(IPAddr,PULONG,ULONG,PULONG);
DWORD WINAPI GetTcpStatistics(PMIB_TCPSTATS);
DWORD WINAPI GetTcpTable(PMIB_TCPTABLE,PDWORD,BOOL);
DWORD WINAPI GetUniDirectionalAdapterInfo(PIP_UNIDIRECTIONAL_ADAPTER_ADDRESS,PULONG);
DWORD WINAPI GetUdpStatistics(PMIB_UDPSTATS);
DWORD WINAPI GetUdpTable(PMIB_UDPTABLE,PDWORD,BOOL);
DWORD WINAPI IpReleaseAddress(PIP_ADAPTER_INDEX_MAP);
DWORD WINAPI IpRenewAddress(PIP_ADAPTER_INDEX_MAP);
DWORD WINAPI NotifyAddrChange(PHANDLE,LPOVERLAPPED);
DWORD WINAPI NotifyRouteChange(PHANDLE,LPOVERLAPPED);
DWORD WINAPI SendARP(IPAddr,IPAddr,PULONG,PULONG);
DWORD WINAPI SetIfEntry(PMIB_IFROW);
DWORD WINAPI SetIpForwardEntry(PMIB_IPFORWARDROW);
DWORD WINAPI SetIpNetEntry(PMIB_IPNETROW);
DWORD WINAPI SetIpStatistics(PMIB_IPSTATS);
DWORD WINAPI SetIpTTL(UINT);
DWORD WINAPI SetTcpEntry(PMIB_TCPROW);
DWORD WINAPI UnenableRouter(OVERLAPPED*, LPDWORD);

#if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)
#define GAA_FLAG_SKIP_UNICAST 0x00000001
#define GAA_FLAG_SKIP_ANYCAST 0x00000002
#define GAA_FLAG_SKIP_MULTICAST 0x00000004
#define GAA_FLAG_SKIP_DNS_SERVER 0x00000008
#define GAA_FLAG_INCLUDE_PREFIX 0x00000010
#define GAA_FLAG_SKIP_FRIENDLY_NAME 0x00000020
#if (defined(_WINSOCK2_H))
ULONG WINAPI GetAdaptersAddresses(ULONG,ULONG,PVOID,PIP_ADAPTER_ADDRESSES,PULONG);
#endif
DWORD WINAPI GetExtendedTcpTable (PVOID,PDWORD,BOOL,ULONG,TCP_TABLE_CLASS,ULONG);
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINXP */

#ifdef __cplusplus
}
#endif
#endif /* _IPHLPAPI_H */
