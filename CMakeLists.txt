cmake_minimum_required(VERSION 3.15)

project(mHTTP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectory for Sockets
add_subdirectory(networking/sockets)
add_subdirectory(networking/servers)