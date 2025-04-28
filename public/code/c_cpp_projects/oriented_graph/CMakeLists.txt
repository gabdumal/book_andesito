# Version
cmake_minimum_required(VERSION 3.12...3.30)

if (${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif ()

# Project
project(oriented_graph
        LANGUAGES CXX
)

# Environment
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compilation flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

# Directories
add_subdirectory(node)
add_subdirectory(edge)
add_subdirectory(graph)

# Executable
add_executable(oriented_graph main.cpp)

# Include module
target_include_directories(oriented_graph
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)

# Linking libraries
target_link_libraries(oriented_graph
    PRIVATE
        graph
)
