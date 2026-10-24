## Library
add_library(node)

## Sources
target_sources(node
    PRIVATE
        node.cpp
    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            "${CMAKE_CURRENT_SOURCE_DIR}"
        FILES
            node.hpp
)
