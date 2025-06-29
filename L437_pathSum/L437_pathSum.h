//
// Created by garen-lee on 2025/6/29.
/**
  ******************************************************************************
  * @file           : L437_pathSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/29
  ******************************************************************************
  */
//

#ifndef TREE_L437_PATHSUM_H
#define TREE_L437_PATHSUM_H

#include "util.h"
class L437_pathSum : public LeetcodeTree {
private:
    int pathSum(TreeNode* root, int targetSum);
    int pathSum(TreeNode *root, int targetSum, long long sum);
public:
    L437_pathSum() {}
    void test();
};


#endif //TREE_L437_PATHSUM_H
