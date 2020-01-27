cmake_minimum_required(VERSION 3.15)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)
add_executable(untitled3 main.cpp includes/IGraph.hpp   sources/Graph.cpp includes/Graph.hpp  includes/Sommet.hpp)
# python
target_include_directories(untitled3 PRIVATE ${PYTHON_INCLUDE_DIRS})
# the -I flag in gcc