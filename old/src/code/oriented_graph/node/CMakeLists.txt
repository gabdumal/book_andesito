# Project
add_library(node)

# Sources
target_sources(node
    PUBLIC
        node.hpp
    PRIVATE
        node.cpp
)

# Include module
target_include_directories(node
    INTERFACE
        ${CMAKE_CURRENT_LIST_DIR}
)
