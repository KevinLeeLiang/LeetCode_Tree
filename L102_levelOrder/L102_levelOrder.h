//
// Created by garen-lee on 2025/3/2.
/**
  ******************************************************************************
  * @file           : L102_levelOrder.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/2
  ******************************************************************************
  */
//

#ifndef TREE_L102_LEVELORDER_H
#define TREE_L102_LEVELORDER_H

#include "util.h"
class L102_levelOrder : public LeetcodeTree {
private:
    vector<vector<int>> levelOrder(TreeNode* root);
public:
    L102_levelOrder() {}
    void test();
};


#endif //TREE_L102_LEVELORDER_H
