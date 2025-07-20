//
// Created by garen-lee on 2025/7/13.
/**
  ******************************************************************************
  * @file           : L508_findFrequentTreeSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/13
  ******************************************************************************
  */
//

#ifndef TREE_L508_FINDFREQUENTTREESUM_H
#define TREE_L508_FINDFREQUENTTREESUM_H

#include "util.h"
class L508_findFrequentTreeSum : public LeetcodeTree {
private:
    unordered_map<int, int> cnt;
    int maxCnt = 0;
    int dfs(TreeNode* node);
    vector<int> findFrequentTreeSum(TreeNode* root);
public:
    L508_findFrequentTreeSum() {}
    void test();
};


#endif //TREE_L508_FINDFREQUENTTREESUM_H
