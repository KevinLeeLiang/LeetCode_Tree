//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#ifndef TREE_L101_ISSYMMETRIC_H
#define TREE_L101_ISSYMMETRIC_H

#include "util.h"
class L101_isSymmetric : public LeetcodeTree {
private:
    bool isSymmetric(TreeNode *root);
    bool check(TreeNode* left, TreeNode* right);
public:
    L101_isSymmetric() {}
    void test();
};


#endif //TREE_L101_ISSYMMETRIC_H
