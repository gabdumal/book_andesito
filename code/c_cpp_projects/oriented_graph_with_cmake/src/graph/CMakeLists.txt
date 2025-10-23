## Library
add_library(graph)

## Sources
target_sources(graph
    PUBLIC
        graph.hpp
    PRIVATE
        graph.cpp
)

## Define module
target_include_directories(graph
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

## Link libraries
target_link_libraries(graph
    PRIVATE
        node
        edge
)
