//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L113_pathSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#ifndef TREE_L113_PATHSUM_H
#define TREE_L113_PATHSUM_H

#include "util.h"
class L113_pathSum : public LeetcodeTree {
    vector<vector<int>> pathSum(TreeNode *root, int targetSum);
    void dfs(TreeNode *root, int targetSum, vector<vector<int>> &res, vector<int> &path);
public:
    L113_pathSum() {};
    void test();
};


#endif //TREE_L113_PATHSUM_H
