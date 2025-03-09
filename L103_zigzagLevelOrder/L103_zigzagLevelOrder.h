//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L103_zigzagLevelOrder.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#ifndef TREE_L103_ZIGZAGLEVELORDER_H
#define TREE_L103_ZIGZAGLEVELORDER_H

#include "util.h"
class L103_zigzagLevelOrder : public LeetcodeTree {
    vector<vector<int>> zigzagLevelOrder(TreeNode *root);
public:
    L103_zigzagLevelOrder() {}
    void test();
};


#endif //TREE_L103_ZIGZAGLEVELORDER_H
