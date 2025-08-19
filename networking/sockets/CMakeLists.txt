# Create a library from the socket sources
add_library(sockets
    socket.cpp
    connectingSocket.cpp
    listeningSocket.cpp
)

# Expose the public include directory
target_include_directories(sockets PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)