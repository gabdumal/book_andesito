## Executable
add_executable(oriented_graph
        main.cpp
)

## Directories
add_subdirectory(node)
add_subdirectory(edge)
add_subdirectory(graph)

## Linking libraries
target_link_libraries(oriented_graph
    PRIVATE
        graph
)
