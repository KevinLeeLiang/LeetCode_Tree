//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L111_minDepth.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#include "L111_minDepth.h"

int L111_minDepth::minDepth_dfs(TreeNode* root) {
    if (!root) {
        return 0;
    }
    if (!root->left && !root->right) {
        return 1;
    }
    if (!root->left) {
        return minDepth_dfs(root->right) + 1;
    }
    if (!root->right) {
        return minDepth_dfs(root->left) + 1;
    }
    return min(minDepth_dfs(root->left), minDepth_dfs(root->right)) + 1;
}

int L111_minDepth::minDepth_bfs(TreeNode* root) {
    if (!root) {
        return 0;
    }
    queue<pair<TreeNode*, int>> q;
    q.push({root, 1});
    while (!q.empty()) {
        auto [node, depth] = q.front();
        q.pop();
        if (!node->left && !node->right) {
            return depth;
        }
        if (node->left) {
            q.push({node->left, depth + 1});
        }
        if (node->right) {
            q.push({node->right, depth + 1});
        }
    }
    return 0;
}

void L111_minDepth::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root = create_treenode(nums, true);
    cout << "dfs:" << minDepth_dfs(root) << ",bfs:" << minDepth_bfs(root) << endl;
    nums = {2, -1, 3, -1, 4, -1, 5, -1, 6};
    root = create_treenode(nums, true);
    cout << "dfs:" << minDepth_dfs(root) << ",bfs:" << minDepth_bfs(root) << endl;
}