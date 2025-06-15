//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L404_sumOfLeftLeaves.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#include "L404_sumOfLeftLeaves.h"

bool L404_sumOfLeftLeaves::isLeafNode(TreeNode *node) {
    if (!node->left && !node->right)
        return true;
    return false;
}

int L404_sumOfLeftLeaves::sumOfLeftLeaves(TreeNode* root) {
    if (!root)
        return 0;
    queue<TreeNode *> q;
    q.push(root);
    int sum = 0;
    while (!q.empty()) {
        TreeNode *node = q.front();
        q.pop();
        if (node->left) {
            if (!node->left->left && !node->left->right)
                sum += node->left->val;
            else
                q.push(node->left);
        }
        if (node->right) {
            if (!isLeafNode(node->right)) {
                q.push(node->right);
            }
        }
    }
    return sum;
}

void L404_sumOfLeftLeaves::test() {
    vector<int> vec = {3,9,20,-1,-1,15,7};
    TreeNode *root = create_treenode(vec, true);
    cout << sumOfLeftLeaves(root) << endl;
    vec = {1};
    root = create_treenode(vec, true);
    cout << sumOfLeftLeaves(root) << endl;
}