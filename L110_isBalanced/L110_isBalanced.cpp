//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L110_isBalanced.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#include "L110_isBalanced.h"

int L110_isBalanced::height(TreeNode* root) {
    if (root == NULL) {
        return 0;
    } else {
        return max(height(root->left), height(root->right)) + 1;
    }
}

bool L110_isBalanced::isBalanced(TreeNode* root) {
    if (root == NULL) {
        return true;
    } else {
        return abs(height(root->left) - height(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
}

void L110_isBalanced::test() {
    vector<int> nums = {3,9,20,-1,-1,15,7};
    TreeNode* root = create_treenode(nums, true);
    cout << isBalanced(root) << endl;
    nums = {1,2,2,3,3,-1,-1,4,4};
    root = create_treenode(nums, true);
    cout << isBalanced(root) << endl;
}