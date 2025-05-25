//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L235_lowestCommonAncestor.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#ifndef TREE_L235_LOWESTCOMMONANCESTOR_H
#define TREE_L235_LOWESTCOMMONANCESTOR_H

#include "util.h"
class L235_lowestCommonAncestor : public LeetcodeTree {
private:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q);
public:
    L235_lowestCommonAncestor() {}
    void test();

};


#endif //TREE_L235_LOWESTCOMMONANCESTOR_H
