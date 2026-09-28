cmake_minimum_required(VERSION 3.16)

project(first LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(first
    findDialog.cpp
    findDialog.h
    main.cpp
)

target_link_libraries(first PRIVATE Qt6::Widgets)