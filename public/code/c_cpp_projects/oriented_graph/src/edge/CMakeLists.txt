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
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

## Link libraries
target_link_libraries(edge
    PRIVATE
        node
)
