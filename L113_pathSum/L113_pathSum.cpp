//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L113_pathSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#include "L113_pathSum.h"
void L113_pathSum::dfs(TreeNode *root, int targetSum, vector<vector<int>> &res, vector<int> &path) {
    if (!root) {
        return;
    }
    path.emplace_back(root->val);
    if (!root->left && !root->right && root->val == targetSum) {
        res.emplace_back(path);
    }
    dfs(root->left, targetSum - root->val, res, path);
    dfs(root->right, targetSum - root->val, res, path);
    path.pop_back();
}
vector<vector<int>> L113_pathSum::pathSum(TreeNode *root, int targetSum) {
    if (!root) {
        return {};
    }
    vector<vector<int>> res;
    vector<int> path;
    dfs(root, targetSum, res, path);
    return res;
}

void L113_pathSum::test() {
    vector<int> nums = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, 5, 1};
    TreeNode *root = create_treenode(nums, true);
    vector<vector<int>> res = pathSum(root, 22);
    print_vector_vector(res);
    nums = {1, 2, 3};
    root = create_treenode(nums, true);
    res = pathSum(root, 5);
    print_vector_vector(res);
    nums = {1, 2};
    root = create_treenode(nums, true);
    res = pathSum(root, 0);
    print_vector_vector(res);
}