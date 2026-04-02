## Version
cmake_minimum_required(VERSION 3.28...3.31)

## Project
project(oriented_graph
        LANGUAGES CXX
)

## Environment
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

## Warnings
if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
    add_compile_options(
        -Wall -Wextra           # Reasonable warnings
        -Wpedantic              # Strict ISO C++ compliance
        -Wconversion            # Warn on implicit type conversions
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(
        /W4                     # High warning level
        /permissive-            # Enforce standards compliance
    )
endif()

## Directories
add_subdirectory(src)
