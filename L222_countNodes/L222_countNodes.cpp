//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L222_countNodes.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#include "L222_countNodes.h"

int L222_countNodes::countNodes(TreeNode* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void L222_countNodes::test() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    TreeNode* root = create_treenode(nums, true);
    cout << countNodes(root) << endl;
    nums = {};
    root = create_treenode(nums, true);
    cout << countNodes(root) << endl;
    nums = {1};
    root = create_treenode(nums, true);
    cout << countNodes(root) << endl;
}