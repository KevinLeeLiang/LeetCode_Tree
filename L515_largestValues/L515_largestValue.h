//
// Created by garen-lee on 2025/8/3.
/**
  ******************************************************************************
  * @file           : L515_largestValue.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/3
  ******************************************************************************
  */
//

#ifndef TREE_L515_LARGESTVALUE_H
#define TREE_L515_LARGESTVALUE_H

#include "util.h"
class L515_largestValue : public LeetcodeTree {
private:
    void dfs(vector<int>& res, TreeNode* root, int curHeight);
    vector<int> largestValues(TreeNode* root);
public:
    L515_largestValue() {}
    void test();
};


#endif //TREE_L515_LARGESTVALUE_H
