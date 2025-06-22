//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L427_construct.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#ifndef TREE_L427_CONSTRUCT_H
#define TREE_L427_CONSTRUCT_H

#include "util.h"
namespace L427 {
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
}
class L427_construct : public LeetcodeTree {
private:
    L427::Node* construct(vector<vector<int>>& grid);
public:
    L427_construct() {}
    void test();
};


#endif //TREE_L427_CONSTRUCT_H
