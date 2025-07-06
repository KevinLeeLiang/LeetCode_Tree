//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L501_findMode.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#include "L501_findMode.h"

void L501_findMode::update(int x) {
    if (x == base) {
        ++count;
    } else {
        count = 1;
        base = x;
    }
    if (count == maxCount) {
        answer.push_back(base);
    }
    if (count > maxCount) {
        maxCount = count;
        answer = vector<int> {base};
    }
}

void L501_findMode::dfs(TreeNode *o) {
    if (!o) {
        return;
    }
    dfs(o->left);
    update(o->val);
    dfs(o->right);
}

vector<int> L501_findMode::findMode(TreeNode *root) {
    answer.clear();
    base = 0;
    maxCount = 0;
    count = 0;
    dfs(root);
    return answer;
}

void L501_findMode::test() {
    vector<int> vec = {1, -1, 2, 2};
    TreeNode *root = create_treenode(vec, true);
    vector<int> res = findMode(root);
    print_vector(res);
    vec = {0};
    root = create_treenode(vec, true);
    res = findMode(root);
    print_vector(res);
}