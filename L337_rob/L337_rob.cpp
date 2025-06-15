//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L337_rob.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#include "L337_rob.h"

void L337_rob::dfs(TreeNode *root) {
    if (!root) {
        return;
    }
    dfs(root->left);
    dfs(root->right);
    f[root] = root->val + g[root->left] + g[root->right];
    g[root] = max(f[root->left], g[root->left]) + max(f[root->right], g[root->right]);
}

int L337_rob::rob(TreeNode *root) {
    f.clear();
    g.clear();
    dfs(root);
    return max(f[root], g[root]);
}

void L337_rob::test() {
    vector<int> nums = {3, 2, 3, -1, 3, -1, 1};
    TreeNode *root = create_treenode(nums, true);
    cout << rob(root) << endl;
    nums = {3, 4, 5, 1, 3, -1, 1};
    root = create_treenode(nums, true);
    cout << rob(root) << endl;
}