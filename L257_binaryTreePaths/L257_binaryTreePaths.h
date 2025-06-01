//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L257_binaryTreePaths.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#ifndef TREE_L257_BINARYTREEPATHS_H
#define TREE_L257_BINARYTREEPATHS_H

#include "util.h"
class L257_binaryTreePaths : public LeetcodeTree {
private:
    vector<string> binaryTreePaths(TreeNode* root);
public:
    L257_binaryTreePaths() {}
    void test();
};


#endif //TREE_L257_BINARYTREEPATHS_H
