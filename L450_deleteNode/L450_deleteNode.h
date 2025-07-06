//
// Created by garen-lee on 2025/7/6.
/**
  ******************************************************************************
  * @file           : L450_deleteNode.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/6
  ******************************************************************************
  */
//

#ifndef TREE_L450_DELETENODE_H
#define TREE_L450_DELETENODE_H

#include "util.h"
class L450_deleteNode : public LeetcodeTree {
private:
    TreeNode *deleteNode(TreeNode *root, int key);
public:
    L450_deleteNode() {}
    void test();
};


#endif //TREE_L450_DELETENODE_H
