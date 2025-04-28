## Version
cmake_minimum_required(VERSION 3.12...3.31)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif ()

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
        -Wall -Wextra          # Reasonable warnings
        -Wpedantic             # Strict ISO C++ compliance
        -Wshadow               # Warn on variable shadowing
        -Wconversion           # Warn on implicit type conversions
        -Wsign-conversion      # Warn on signed/unsigned mismatches
    )
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_compile_options(
        /W4                    # High warning level
        /permissive-           # Enforce standards compliance
    )
endif()

## Directories
add_subdirectory(src)
