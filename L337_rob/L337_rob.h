//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L337_rob.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#ifndef TREE_L337_ROB_H
#define TREE_L337_ROB_H

#include "util.h"
class L337_rob : public LeetcodeTree {
private:
    int rob(TreeNode* root);
    void dfs(TreeNode* node);
    unordered_map<TreeNode*, int> f, g;
public:
    L337_rob() {}
    void test();
};


#endif //TREE_L337_ROB_H
