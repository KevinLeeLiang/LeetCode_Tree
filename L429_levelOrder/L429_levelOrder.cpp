//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L429_levelOrder.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#include "L429_levelOrder.h"

vector<vector<int>> L429_levelOrder::levelOrder(L429::Node* root) {
    if (!root) {
        return {};
    }
    vector<vector<int>> res;
    queue<L429::Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        vector<int>levels;
        for (int i = 0; i < size; ++i) {
            auto tmp = q.front();
            q.pop();
            levels.push_back(tmp->val);
            for (auto c : tmp->children) {
                q.push(c);
            }
        }
        res.push_back(levels);
    }
    return res;
}

void L429_levelOrder::test() {
    vector<int>nums = {1,3,2,4,-1,5,6};
    L429::Node* root = L429::createNode(nums);
    vector<vector<int>> res = levelOrder(root);
    print_vector_vector(res);
    nums = {1,2,3,4,5,-1,-1,6,7,-1,8,-1,9,10,-1,-1,11,-1,12,-1,13,-1,-1,14};
    root = L429::createNode(nums);
    res = levelOrder(root);
    print_vector_vector(res);
}