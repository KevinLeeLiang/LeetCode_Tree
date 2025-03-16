//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L105_buildTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#include "L105_buildTree.h"

TreeNode* L105_buildTree::myBuildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right) {
    if (preorder_left > preorder_right) {
        return nullptr;
    }
    int root_val = preorder[preorder_left];
    int inorder_root = idx_map_[root_val];
    TreeNode *root = new TreeNode(root_val);
    int left_size = inorder_root - inorder_left;
    root->left = myBuildTree(preorder, inorder, preorder_left + 1, preorder_left + left_size, inorder_left, inorder_root - 1);
    root->right = myBuildTree(preorder, inorder, preorder_left + left_size + 1, preorder_right, inorder_root + 1, inorder_right);
    return root;
}

TreeNode *L105_buildTree::buildTree(vector<int> &preorder, vector<int> &inorder) {
    idx_map_.clear();
    int n = preorder.size();
    for (int i = 0; i < n; i++) {
        idx_map_[inorder[i]] = i;
    }
    return myBuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
}

void L105_buildTree::test() {
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    TreeNode *root = buildTree(preorder, inorder);
    cout << print_tree(root) << endl;
    preorder = {-1};
    inorder = {-1};
    root = buildTree(preorder, inorder);
    cout << print_tree(root) << endl;
}