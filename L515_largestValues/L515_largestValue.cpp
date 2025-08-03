//
// Created by garen-lee on 2025/8/3.
/**
  ******************************************************************************
  * @file           : L515_largestValue.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/3
  ******************************************************************************
  */
//

#include "L515_largestValue.h"

void L515_largestValue::dfs(vector<int>& res, TreeNode* root, int curHeight) {
    if (curHeight == res.size()) {
        res.push_back(root->val);
    } else {
        res[curHeight] = max(res[curHeight], root->val);
    }
    if (root->left) {
        dfs(res, root->left, curHeight + 1);
    }
    if (root->right) {
        dfs(res, root->right, curHeight + 1);
    }
}

vector<int> L515_largestValue::largestValues(TreeNode* root) {
    if (!root) {
        return {};
    }
    vector<int> res;
    dfs(res, root, 0);
    return res;
}

void L515_largestValue::test() {
    vector<int> vec = {1, 3, 2, 5, 3, -1, 9};
    TreeNode* root = create_treenode(vec, true);
    vector<int> res = largestValues(root);
    print_vector(res);
    vec = {1, 2, 3};
    root = create_treenode(vec, true);
    res = largestValues(root);
    print_vector(res);
}
