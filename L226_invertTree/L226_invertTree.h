//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L226_invertTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#ifndef TREE_L226_INVERTTREE_H
#define TREE_L226_INVERTTREE_H

#include "util.h"
class L226_invertTree : public LeetcodeTree {
private:
    TreeNode *invertTree(TreeNode* root);
public:
    L226_invertTree() {}
    void test();
};


#endif //TREE_L226_INVERTTREE_H
