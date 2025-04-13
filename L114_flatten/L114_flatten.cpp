//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L114_flatten.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#include "L114_flatten.h"

void L114_flatten::flatten(TreeNode *root) {
    TreeNode* curr = root;
    while (curr) {
        if (curr->left) {
            TreeNode* next = curr->left;
            TreeNode* pred = next;
            while (pred->right) {
                pred = pred->right;
            }
            pred->right = curr->right;
            curr->left = nullptr;
            curr->right = next;
        }
        curr = curr->right;
    }
}

void L114_flatten::test() {
    vector<int>nums = {1, 2, 5, 3, 4, -1, 6};
    TreeNode* root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
    nums = {};
    root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
    nums = {0};
    root = create_treenode(nums, true);
    flatten(root);
    cout << print_tree(root) << endl;
}