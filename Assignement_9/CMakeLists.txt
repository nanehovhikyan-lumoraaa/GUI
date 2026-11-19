cmake_minimum_required(VERSION 3.16)

project(circlebar LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_add_executable(circlebar
    circlebar.cpp
    circlebar.h
    problem.cpp
    problem.h
    main.cpp
)

target_link_libraries(circlebar PRIVATE Qt6::Widgets)