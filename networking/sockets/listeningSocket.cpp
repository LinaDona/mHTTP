#include "sockets/listeningSocket.hpp"
#include <cstdio>

namespace mHTTP {
    int ListeningSocket::init(int domain, int service, int protocol, int port, const char *addr) {
        ls_fd = socket(AF_INET, SOCK_STREAM, 0);
        if (ls_fd == 0) {
            perror("Could not create socket.");
            return -1;
        }
        sock = {
            .fd = ls_fd,
            .domain = SocketDomain::IPv4,
            .service = SocketType::TCP,
            .protocol = SupportingProtocol::NO_VARIATION
        };

    }
}