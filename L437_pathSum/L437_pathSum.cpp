//
// Created by garen-lee on 2025/6/29.
/**
  ******************************************************************************
  * @file           : L437_pathSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/29
  ******************************************************************************
  */
//

#include "L437_pathSum.h"

int L437_pathSum::pathSum(TreeNode *root, int targetSum, long long sum) {
    if (!root) return 0;
    return (sum + root->val == targetSum) + pathSum(root->left, targetSum, sum + root->val) +
           pathSum(root->right, targetSum, sum + root->val);
}

int L437_pathSum::pathSum(TreeNode *root, int targetSum) {
    if (!root) return 0;
    return pathSum(root, targetSum, 0) + pathSum(root->left, targetSum) + pathSum(root->right, targetSum);
}

void L437_pathSum::test() {
    vector<int> val = {10, 5, -3, 3, 2, 0, 11, 3, -2, 0, 1};
    TreeNode *root = create_treenode(val, true);
    cout << "pathSum: " << pathSum(root, 8) << endl;
    val = {5, 4, 8, 11, 0, 13, 4, 7, 2, 0, 0, 5, 1};
    root = create_treenode(val, true);
    cout << "pathSum: " << pathSum(root, 22) << endl;
}