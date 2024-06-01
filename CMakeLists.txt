
cmake_minimum_required(VERSION 3.10)
project(matrix_mult VERSION 1.0)

# Add your source files
set(SOURCES
    src/matrix_mult.c
)

# Add an executable or library target
add_library(matrix_mult STATIC ${SOURCES})

# Include directories
target_include_directories(matrix_mult PUBLIC include)
