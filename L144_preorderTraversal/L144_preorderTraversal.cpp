//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#include "L144_preorderTraversal.h"

void L144_preorderTraversal::dfs(TreeNode* root, vector<int>& res) {
    if (root == nullptr) {
        return;
    }
    res.push_back(root->val);
    dfs(root->left, res);
    dfs(root->right, res);
}

vector<int> L144_preorderTraversal::preorderTraversalDfs(TreeNode* root) {
    if (root == nullptr) {
        return {};
    }
    vector<int> res;
    dfs(root, res);
    return res;
}

vector<int> L144_preorderTraversal::preorderTraversalBfs(TreeNode *root) {
    vector<int>res;
    if (root == nullptr) {
        return res;
    }
    stack<TreeNode*> stk;
    TreeNode* node = root;
    while (!stk.empty() || node != nullptr) {
        while (node != nullptr) {
            res.emplace_back(node->val);
            stk.emplace(node);
            node = node->left;
        }
        node = stk.top();
        stk.pop();
        node = node->right;
    }
    return res;
}

void L144_preorderTraversal::test() {
    vector<int> nums = {1, -1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res = preorderTraversalDfs(root);
    print_vector(res);
    res = preorderTraversalBfs(root);
    print_vector(res);
    cout << "_____" << endl;
    nums = {1,2,3,4,5,-1,8,-1,-1,6,7,9};
    root = create_treenode(nums, true);
    res = preorderTraversalDfs(root);
    print_vector(res);
    res = preorderTraversalBfs(root);
    print_vector(res);
    cout << "_____" << endl;
    nums = {};
    root = create_treenode(nums, true);
    res = preorderTraversalDfs(root);
    print_vector(res);
    res = preorderTraversalBfs(root);
    print_vector(res);
    cout << "_____" << endl;
    nums = {1};
    root = create_treenode(nums, true);
    res = preorderTraversalDfs(root);
    print_vector(res);
    res = preorderTraversalBfs(root);
    print_vector(res);
    cout << "_____" << endl;
}