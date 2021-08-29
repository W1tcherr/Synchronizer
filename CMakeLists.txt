cmake_minimum_required(VERSION 3.20)
project(Synchronizer)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(Synchronizer
        src/containerStruct.hpp
        src/main.cpp
        src/printContainer.cpp
        src/printContainer.hpp
        src/randomDeleter.cpp
        src/randomDeleter.hpp
        src/synchronizator.cpp
        src/synchronizator.hpp)
