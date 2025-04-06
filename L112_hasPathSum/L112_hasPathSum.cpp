//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#include "L112_hasPathSum.h"

bool L112_hasPathSum::hasPathSum(TreeNode* root, int targetSum) {
    if (!root) {
        return false;
    }
    if (!root->left && !root->right) {
        return root->val == targetSum;
    }
    return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
}

void L112_hasPathSum::test() {
    vector<int> nums = {5,4,8,11,-1,13,4,7,2,-1,-1,-1,1};
    int target = 22;
    TreeNode* root = create_treenode(nums, true);
    cout << hasPathSum(root, target) << endl;
    nums = {1, 2, 3};
    target = 5;
    root = create_treenode(nums, true);
    cout << hasPathSum(root, target) << endl;
    nums = {};
    target = 0;
    root = create_treenode(nums, true);
    cout << hasPathSum(root, target) << endl;
}