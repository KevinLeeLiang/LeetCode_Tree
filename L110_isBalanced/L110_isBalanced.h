//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L110_isBalanced.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#ifndef TREE_L110_ISBALANCED_H
#define TREE_L110_ISBALANCED_H

#include "util.h"
class L110_isBalanced : public LeetcodeTree {
private:
    bool isBalanced(TreeNode *root);
    int height(TreeNode *root);
public:
    L110_isBalanced() {}
    void test();
};


#endif //TREE_L110_ISBALANCED_H
