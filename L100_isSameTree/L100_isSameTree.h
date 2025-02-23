//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L100_isSameTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#ifndef TREE_L100_ISSAMETREE_H
#define TREE_L100_ISSAMETREE_H

#include "util.h"
class L100_isSameTree : public LeetcodeTree{
private:
    bool isSameTree(TreeNode* p, TreeNode* q);
public:
    L100_isSameTree() {}
    void test();
};


#endif //TREE_L100_ISSAMETREE_H
