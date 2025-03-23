//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L107_levelOrderBottom.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#include "L107_levelOrderBottom.h"

vector<vector<int>> L107_levelOrderBottom::levelOrderBottom(TreeNode *root) {
    if (!root) {
        return {};
    }
    vector<vector<int>> result;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        while (size--) {
            TreeNode *node = q.front();
            q.pop();
            level.push_back(node->val);
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        result.push_back(level);
    }
    reverse(result.begin(), result.end());
    return result;
}

void L107_levelOrderBottom::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root = create_treenode(nums, true);
    vector<vector<int>> result = levelOrderBottom(root);
    print_vector_vector(result);
    nums = {1};
    root = create_treenode(nums, true);
    result = levelOrderBottom(root);
    print_vector_vector(result);
    nums = {};
    root = create_treenode(nums, true);
    result = levelOrderBottom(root);
    print_vector_vector(result);
}