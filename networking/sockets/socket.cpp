#include <cstdio>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "sockets/socket.hpp"

namespace mHTTP {

int Socket::_bind(int family, int address, int port) 
{
    memset((char *)&this->addr, 0, sizeof(this->addr));
    this->addr.sin_family = family;
    this->addr.sin_addr.s_addr = htonl(address);
    this->addr.sin_port = htons(port);

    if (bind(this->fd, (struct sockaddr *)&this->addr, sizeof(this->addr)) < 0) {
        char tmp[INET_ADDRSTRLEN];
        inet_ntop(family, &this->addr, tmp, sizeof(tmp));
        printf("binding socket to port address pair %s:%d failed\n", tmp, port);
        return -1;
    }
    return 0;
}
}