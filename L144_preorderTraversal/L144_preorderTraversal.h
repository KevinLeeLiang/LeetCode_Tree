//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#ifndef TREE_L144_PREORDERTRAVERSAL_H
#define TREE_L144_PREORDERTRAVERSAL_H

#include "util.h"
class L144_preorderTraversal : public LeetcodeTree {
private:
    vector<int> preorderTraversalDfs(TreeNode* root);
    vector<int> preorderTraversalBfs(TreeNode* root);
    void dfs(TreeNode* root, vector<int>& res);
    void bfs(TreeNode* root, vector<int>& res);
public:
    L144_preorderTraversal() {}
    void test();
};


#endif //TREE_L144_PREORDERTRAVERSAL_H
