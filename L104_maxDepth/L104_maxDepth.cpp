//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#include "L104_maxDepth.h"

int L104_maxDepth::maxDepth(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return max(left, right) + 1;
}

void L104_maxDepth::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root = create_treenode(nums, true);
    int res = maxDepth(root);
    cout << "res: " << res << endl;
    nums = {1,-1,2};
    root = create_treenode(nums, true);
    res = maxDepth(root);
    cout << "res: " << res << endl;
}