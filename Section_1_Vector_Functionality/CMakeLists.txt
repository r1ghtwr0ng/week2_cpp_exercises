cmake_minimum_required(VERSION 3.28.1)
project(exercise_1)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Add your source files
add_executable(opengl_proj 
    src/exercise_main.cpp 
    src/vector_functions.cpp
)

