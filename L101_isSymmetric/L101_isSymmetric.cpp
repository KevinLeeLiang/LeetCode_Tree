//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#include "L101_isSymmetric.h"
void L101_isSymmetric::test() {
    vector<int>vals = {1,2,2,3,4,4,3};
    TreeNode* root = create_treenode(vals, true);
    cout << isSymmetric(root) << endl;
    vals = {1,2,2,-1,3,-1,3};
    root = create_treenode(vals, true);
    cout << isSymmetric(root) << endl;
}

bool L101_isSymmetric::check(TreeNode* left, TreeNode* right) {
    if (left == nullptr && right == nullptr) {
        return true;
    }
    if (left == nullptr || right == nullptr) {
        return false;
    }
    return left->val == right->val && check(left->left, right->right) && check(left->right, right->left);
}

bool L101_isSymmetric::isSymmetric(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }
    return check(root->left, root->right);
}