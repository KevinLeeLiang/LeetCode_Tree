//
// Created by garen-lee on 2025/4/20.
/**
  ******************************************************************************
  * @file           : L116_connect.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/20
  ******************************************************************************
  */
//

#include "L116_connect.h"

Node *L116_connect::connect(Node *root) {
    if (root == nullptr) {
        return root;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node *node = q.front();
            q.pop();
            if (i < size - 1) {
                node->next = q.front();
            }
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
    }
    return root;
}

void L116_connect::test() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    Node* root = create_node(nums, true);
    Node* res = connect(root);
    print_node(res);
    nums = {};
    root = create_node(nums, true);
    res = connect(root);
    print_node(res);
}