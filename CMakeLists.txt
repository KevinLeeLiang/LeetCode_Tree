cmake_minimum_required(VERSION 3.17)
project(Tree)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(Tree main.cpp test_factory.h util/util.h L95_generateTrees/L95_generateTrees.cpp L95_generateTrees/L95_generateTrees.h L94_inorderTraversal/L94_inorderTraversal.cpp L94_inorderTraversal/L94_inorderTraversal.h)