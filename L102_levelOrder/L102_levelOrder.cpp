//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#include "L102_levelOrder.h"

vector<vector<int>> L102_levelOrder::levelOrder(TreeNode* root) {
    vector <vector <int>> ret;
    if (!root) {
        return ret;
    }

    queue <TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        int currentLevelSize = q.size();
        ret.push_back(vector <int> ());
        for (int i = 1; i <= currentLevelSize; ++i) {
            auto node = q.front(); q.pop();
            ret.back().push_back(node->val);
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
}

void L102_levelOrder::test() {
    vector<int>vals = {3,9,20, -1, -1, 15,7};
    TreeNode* node = create_treenode(vals, true);
    vector<vector<int>> res = levelOrder(node);
    print_vector_vector(res);
    vals = {1};
    node = create_treenode(vals, true);
    res = levelOrder(node);
    print_vector_vector(res);
    vals = {};
    node = create_treenode(vals, true);
    res = levelOrder(node);
    print_vector_vector(res);
}