cmake_minimum_required(VERSION 3.17)
project(Tree)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(Tree main.cpp test_factory.h util/util.h L95_generateTrees/L95_generateTrees.cpp L95_generateTrees/L95_generateTrees.h L94_inorderTraversal/L94_inorderTraversal.cpp L94_inorderTraversal/L94_inorderTraversal.h L96_numTree/L96_numTree.cpp L96_numTree/L96_numTree.h L98_isValidBST/L98_isValidBST.cpp L98_isValidBST/L98_isValidBST.h L99_recoverTree/L99_recoverTree.cpp L99_recoverTree/L99_recoverTree.h L100_isSameTree/L100_isSameTree.cpp L100_isSameTree/L100_isSameTree.h)