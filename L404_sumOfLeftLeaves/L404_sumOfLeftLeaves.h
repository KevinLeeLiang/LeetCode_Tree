//
// Created by garen-lee on 2025/6/15.
/**
  ******************************************************************************
  * @file           : L404_sumOfLeftLeaves.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/15
  ******************************************************************************
  */
//

#ifndef TREE_L404_SUMOFLEFTLEAVES_H
#define TREE_L404_SUMOFLEFTLEAVES_H

#include "util.h"
class L404_sumOfLeftLeaves : public LeetcodeTree {
private:
    int sumOfLeftLeaves(TreeNode* root);
    bool isLeafNode(TreeNode *node);
public:
    L404_sumOfLeftLeaves() {}
    void test();
};


#endif //TREE_L404_SUMOFLEFTLEAVES_H
