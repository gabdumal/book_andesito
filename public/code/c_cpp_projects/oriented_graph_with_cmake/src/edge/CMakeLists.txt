## Library
add_library(edge)

## Sources
target_sources(edge
    PUBLIC
        edge.hpp
    PRIVATE
        edge.cpp
)

## Define module
target_include_directories(edge
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

## Link libraries
target_link_libraries(edge
    PRIVATE
        node
)
