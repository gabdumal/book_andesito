## Library
add_library(node)

## Sources
target_sources(node
    PUBLIC
        node.hpp
    PRIVATE
        node.cpp
)

## Define module
target_include_directories(node
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)
