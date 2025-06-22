//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L429_levelOrder.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#ifndef TREE_L429_LEVELORDER_H
#define TREE_L429_LEVELORDER_H

#include "util.h"

namespace L429 {
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

inline L429::Node* createNode(vector<int> vals) {
    if (vals.empty()) return nullptr;

    queue<Node*> q;
    Node* root = new Node(vals[0]);
    q.push(root);

    int index = 1;
    while (index < vals.size()) {
        Node* parent = q.front();
        q.pop();

        while (index < vals.size() && vals[index] != -1) {
            Node* child = new Node(vals[index]);
            parent->children.push_back(child);
            q.push(child);
            index++;
        }
        // 跳过 -1
        index++;
    }

    return root;
};
}

class L429_levelOrder : public LeetcodeTree {
private:
    vector<vector<int>> levelOrder(L429::Node* root);
public:
    L429_levelOrder() {}
    void test();
};


#endif //TREE_L429_LEVELORDER_H
