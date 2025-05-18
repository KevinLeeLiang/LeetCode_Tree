//
// Created by garen-lee on 2025/5/18.
/**
  ******************************************************************************
  * @file           : L226_invertTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/18
  ******************************************************************************
  */
//

#include "L226_invertTree.h"

TreeNode* L226_invertTree::invertTree(TreeNode* root) {
    if (root == nullptr) {
        return nullptr;
    }
    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);
    root->left = right;
    root->right = left;
    return root;
}

void L226_invertTree::test() {
    vector<int> input = {4, 2, 7, 1, 3, 6, 9};
    TreeNode* root = create_treenode(input, true);
    TreeNode* result = invertTree(root);
    cout << print_tree(result) << endl;
    input = {2, 1, 3};
    root = create_treenode(input, true);
    result = invertTree(root);
    cout << print_tree(result) << endl;
    input = {};
    root = create_treenode(input, true);
    result = invertTree(root);
    cout << print_tree(result) << endl;
}