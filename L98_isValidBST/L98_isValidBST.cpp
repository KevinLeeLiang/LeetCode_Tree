//
// Created by garen-lee on 2025/2/16.
/**
  ******************************************************************************
  * @file           : L98_isValidBST.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/16
  ******************************************************************************
  */
//

#include "L98_isValidBST.h"

bool L98_isValidBST::isValidBST(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }
    stack<TreeNode*> stack;
    long long pre = LLONG_MIN;
    while (!stack.empty() || root != nullptr) {
        while (root != nullptr) {
            stack.push(root);
            root = root->left;
        }
        root = stack.top();
        stack.pop();
        if (root->val <= pre) {
            return false;
        }
        pre = root->val;
        root = root->right;
    }
    return true;
}

void L98_isValidBST::test() {
    vector<int> nums = {2, 1, 3};
    TreeNode* root;
    root = create_treenode(nums, true);
    cout << isValidBST(root) << endl;
    nums = {5, 1, 4, -1, -1, 3, 6};
    root = create_treenode(nums, true);
    cout << isValidBST(root) << endl;
}