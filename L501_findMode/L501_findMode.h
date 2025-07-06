//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L501_findMode.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#ifndef TREE_L501_FINDMODE_H
#define TREE_L501_FINDMODE_H

#include "util.h"
class L501_findMode : public LeetcodeTree {
private:
    vector<int> answer;
    int base, count, maxCount;
    vector<int> findMode(TreeNode* root);
    void update(int x);
    void dfs(TreeNode* o);
public:
    L501_findMode() {}
    void test();
};


#endif //TREE_L501_FINDMODE_H
