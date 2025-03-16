//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L106_buildTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#include "L106_buildTree.h"

TreeNode* L106_buildTree::buildTree(vector<int> &inorder, vector<int> &postorder, int in_left, int in_right) {
    if (in_left > in_right) {
        return nullptr;
    }
    int root_val = postorder[post_idx_];
    TreeNode *root = new TreeNode(root_val);
    int in_root = idx_map_[root_val];
    post_idx_--;
    root->right = buildTree(inorder, postorder, in_root + 1, in_right);
    root->left = buildTree(inorder, postorder, in_left, in_root - 1);
    return root;
}

TreeNode* L106_buildTree::buildTree(vector<int> &inorder, vector<int> &postorder) {
    post_idx_ = int(postorder.size()) - 1;
    for (int i = 0; i < inorder.size(); i++) {
        idx_map_[inorder[i]] = i;
    }
    return buildTree(inorder, postorder, 0, int(inorder.size()) - 1);
}

void L106_buildTree::test() {
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    TreeNode *root = buildTree(inorder, postorder);
    cout << print_tree(root) << endl;
    inorder = {-1};
    postorder = {-1};
    root = buildTree(inorder, postorder);
    cout << print_tree(root) << endl;
}