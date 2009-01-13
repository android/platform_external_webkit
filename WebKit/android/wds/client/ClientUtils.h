/*
 * Copyright 2009, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef WDS_CLIENT_UTILS_H
#define WDS_CLIENT_UTILS_H

#include <arpa/inet.h>

/*
 * included for sockaddr_in structure, AF_INET definiton and etc.
 */
#ifdef __FreeBSD__
#include <netinet/in.h>
#include <sys/socket.h>
#endif

// Callers need to include Log.h and errno.h to use this macro
#define log_errno(str) LOGE("%s: %s", str, strerror(errno))

// Fill in the sockaddr_in structure for binding to the localhost on the given
// port
void createTcpSocket(sockaddr_in& addr, short port);

#endif
