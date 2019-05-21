cmake_minimum_required(VERSION 3.14)
project(Assignment7)

set(CMAKE_CXX_STANDARD 14)

add_executable(Assignment7 src/main.cpp src/PermissionDeniedException.cpp src/PermissionDeniedException.h src/CommandNotFoundException.cpp src/CommandNotFoundException.h src/BadRequestException.cpp src/BadRequestException.h src/Errors.h src/User.cpp src/User.h src/Publisher.cpp src/Publisher.h src/structs.h)