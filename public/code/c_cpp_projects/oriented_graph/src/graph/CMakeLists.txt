## Library
add_library(graph)

## Sources
target_sources(graph
    PRIVATE
        graph.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            "${CMAKE_CURRENT_SOURCE_DIR}"
        FILES
            graph.hpp
)

## Link libraries
target_link_libraries(graph
    PUBLIC
        node
        edge
)
