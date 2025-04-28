# Project
add_library(graph)

# Sources
target_sources(graph
    PUBLIC
        graph.hpp
    PRIVATE
        graph.cpp
)

# Include module
target_include_directories(graph
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

# Linking libraries
target_link_libraries(graph
    PRIVATE
        node
        edge
)
