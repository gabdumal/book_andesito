## Library
add_library(edge)

## Sources
target_sources(edge
    PRIVATE
        edge.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            "${CMAKE_CURRENT_SOURCE_DIR}"
        FILES
            edge.hpp
)

## Link libraries
target_link_libraries(edge
    PUBLIC
        node
)
