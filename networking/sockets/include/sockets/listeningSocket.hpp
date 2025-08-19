#pragma once

#include "sockets/socket.hpp"
#include <sys/socket.h>

namespace mHTTP {
struct ListeningSocket {
    int ls_fd;
    struct Socket sock;

    int init(int domain, int service, int protocol, int port, const char *addr);
};  
}