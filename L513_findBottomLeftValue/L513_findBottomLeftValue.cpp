//
// Created by garen-lee on 2025/7/20.
/**
  ******************************************************************************
  * @file           : L513_findBottomLeftValue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/20
  ******************************************************************************
  */
//

#include "L513_findBottomLeftValue.h"

int L513_findBottomLeftValue::findBottomLeftValue(TreeNode* root) {
    if (!root) return 0;
    queue<TreeNode*> q;
    q.push(root);
    int ans = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            if (i == 0) ans = node->val;
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return ans;
}

void L513_findBottomLeftValue::test() {
    vector<int> vec = {2,1,3};
    TreeNode* root = create_treenode(vec, true);
    cout << findBottomLeftValue(root) << endl;
    vec = {1,2,3,4,-1,5,6,-1,-1,7};
    root = create_treenode(vec, true);
    cout << findBottomLeftValue(root) << endl;
}