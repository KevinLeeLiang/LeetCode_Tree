//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L124_maxPathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#include "L124_maxPathSum.h"

int L124_maxPathSum::maxGain(TreeNode* node) {
    if (!node) return 0;
    int leftGain = max(maxGain(node->left), 0);
    int rightGain = max(maxGain(node->right), 0);
    int priceNewPath = node->val + leftGain + rightGain;
    max_sum = max(max_sum, priceNewPath);
    return node->val + max(leftGain, rightGain);
}

int L124_maxPathSum::maxPathSum(TreeNode* root) {
    max_sum = INT_MIN;
    maxGain(root);
    return max_sum;
}

void L124_maxPathSum::test() {
    vector<int>nums = {1,2,3};
    TreeNode* root = create_treenode(nums, true);
    cout << maxPathSum(root) << endl;
    nums = {-10,9,20,0,0,15,7};
    root = create_treenode(nums, false);
    cout << maxPathSum(root) << endl;
}