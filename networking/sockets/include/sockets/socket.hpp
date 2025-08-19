#pragma once

#include <cstdint>
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

namespace mHTTP {

enum SocketDomain {
    IPv4 = 0,
    IPv6,
    UNIX,
};

enum SocketType {
    TCP = 0,
    UDP,
    RAW
};

enum SupportingProtocol {
    NO_VARIATION = 0
};

struct Socket  {
    int fd;
    int domain;
    int service; // aka: type
    int protocol;
    struct sockaddr_in addr;

    // The only sockets we're gonna use are binding ones, so this method exists in this generalized struct
    int _bind(int family, int address, int port);
};
}