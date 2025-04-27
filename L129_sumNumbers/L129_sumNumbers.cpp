//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L129_sumNumbers.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#include "L129_sumNumbers.h"

int L129_sumNumbers::dfs(TreeNode* root, int val){
    if (root == nullptr)
        return 0;
    val = val* 10 + root->val;
    if (root->left == nullptr && root->right == nullptr)
        return val;
    return dfs(root->left, val) + dfs(root->right, val);
}

int L129_sumNumbers::sumNumbers(TreeNode* root) {
    return dfs(root, 0);
}

void L129_sumNumbers::test() {
    vector<int> nums = {1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    cout << sumNumbers(root) << endl;
    nums = {4, 9, 0, 5, 1};
    root = create_treenode(nums, true);
    cout << sumNumbers(root) << endl;

}