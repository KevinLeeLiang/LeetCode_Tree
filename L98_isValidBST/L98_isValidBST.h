//
// Created by garen-lee on 2025/2/16.
/**
  ******************************************************************************
  * @file           : L98_isValidBST.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/16
  ******************************************************************************
  */
//

#ifndef TREE_L98_ISVALIDBST_H
#define TREE_L98_ISVALIDBST_H

#include "util.h"
class L98_isValidBST : public LeetcodeTree{
private:
    bool isValidBST(TreeNode *root);

public:
    L98_isValidBST(){}
    void test();
};


#endif //TREE_L98_ISVALIDBST_H
