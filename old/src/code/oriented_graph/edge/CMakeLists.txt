# Project
add_library(edge)

# Sources
target_sources(edge
    PUBLIC
        edge.hpp
    PRIVATE
        edge.cpp
)

# Include module
target_include_directories(edge
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)

# Linking libraries
target_link_libraries(edge
    PRIVATE
        node
)
