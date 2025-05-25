//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L230_kthSmallest.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#include "L230_kthSmallest.h"

int L230_kthSmallest::kthSmallest(TreeNode* root, int k) {
    stack<TreeNode*>stk;
    while (root || !stk.empty()) {
        while (root) {
            stk.push(root);
            root = root->left;
        }
        root = stk.top();
        stk.pop();
        --k;
        if (k == 0) {
            return root->val;
        }
        root = root->right;
    }
    return root->val;
}

void L230_kthSmallest::test()  {
    vector<int> nums = {3,1,4,-1,2};
    TreeNode*  root = create_treenode(nums, true);
    cout << kthSmallest(root, 1) << endl;
    nums = {5,3,6,2,4,-1,-1,1};
    root = create_treenode(nums, true);
    cout << kthSmallest(root, 3) << endl;
}