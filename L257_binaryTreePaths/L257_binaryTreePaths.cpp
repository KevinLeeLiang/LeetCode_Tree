//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L257_binaryTreePaths.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#include "L257_binaryTreePaths.h"

vector<string> L257_binaryTreePaths::binaryTreePaths(TreeNode* root) {
    vector<string>res;
    if (root == nullptr) {
        return res;
    }
    if (root->left == nullptr && root->right == nullptr) {
        res.push_back(to_string(root->val));
        return res;
    }
    vector<string> left = binaryTreePaths(root->left);
    vector<string> right = binaryTreePaths(root->right);
    for (auto &item : left) {
        res.push_back(to_string(root->val) + "->" + item);
    }
    for (auto &item : right) {
        res.push_back(to_string(root->val) + "->" + item);
    }
    return res;
}

void L257_binaryTreePaths::test() {
    vector<int> nums = {1, 2, 3, -1, 5};
    TreeNode* root = create_treenode(nums, true);
    vector<string> res = binaryTreePaths(root);
    print_vector(res);
    nums = {1};
    root = create_treenode(nums, true);
    res = binaryTreePaths(root);
    print_vector(res);
}