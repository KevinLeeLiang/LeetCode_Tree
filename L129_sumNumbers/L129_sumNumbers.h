//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L129_sumNumbers.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#ifndef TREE_L129_SUMNUMBERS_H
#define TREE_L129_SUMNUMBERS_H

#include "util.h"
class L129_sumNumbers : public LeetcodeTree {
private:
    int sumNumbers(TreeNode* root);
    int dfs(TreeNode* root, int val);
public:
    L129_sumNumbers() {};
    void test();
};


#endif //TREE_L129_SUMNUMBERS_H
