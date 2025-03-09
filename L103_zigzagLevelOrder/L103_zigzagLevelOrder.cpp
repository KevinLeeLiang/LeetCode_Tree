//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#include "L103_zigzagLevelOrder.h"

vector<vector<int>> L103_zigzagLevelOrder::zigzagLevelOrder(TreeNode *root) {
    if (!root) {
        return {};
    }
    queue<TreeNode *> q;
    q.push(root);
    vector<vector<int>> res;
    bool flag = false;
    while (!q.empty()) {
        deque<int> level;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            if (flag) {
                level.push_front(q.front()->val);
            } else {
                level.push_back(q.front()->val);
            }
            if (q.front()->left) {
                q.push(q.front()->left);
            }
            if (q.front()->right) {
                q.push(q.front()->right);
            }
            q.pop();
        }
        flag = !flag;
        res.push_back(vector<int>(level.begin(), level.end()));
    }
    return res;
}

void L103_zigzagLevelOrder::test() {
    vector<int>nums = {3,9,20,-1,-1,15,7};
    TreeNode* root = create_treenode(nums, true);
    vector<vector<int>> res = zigzagLevelOrder(root);
    print_vector_vector(res);
    nums = {1};
    root = create_treenode(nums, true);
    res = zigzagLevelOrder(root);
    print_vector_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res = zigzagLevelOrder(root);
    print_vector_vector(res);
}