//
// Created by garen-lee on 2025/5/11.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/11
  ******************************************************************************
  */
//

#include "L199_rightSideView.h"

vector<int> L199_rightSideView::rightSideView(TreeNode* root) {
    vector<int>res;
    if (root == nullptr) {
        return res;
    }
    queue<TreeNode*>q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            if (i == size - 1) {
                res.push_back(node->val);
            }
            if (node->left != nullptr) {
                q.push(node->left);
            }
            if (node->right != nullptr) {
                q.push(node->right);
            }
        }
    }
    return res;
}

void L199_rightSideView::test() {
    vector<int> nums = {1,2,3,-1,5,-1,4};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res = rightSideView(root);
    print_vector(res);
    nums = {1,2,3,4,-1,-1,-1,5};
    root = create_treenode(nums, true);
    res = rightSideView(root);
    print_vector(res);
    nums = {1,-1,3};
    root = create_treenode(nums, true);
    res = rightSideView(root);
    print_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res = rightSideView(root);
    print_vector(res);
}