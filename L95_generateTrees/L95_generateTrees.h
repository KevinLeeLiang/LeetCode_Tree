//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L95_generateTrees.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#ifndef TREE_L95_GENERATETREES_H
#define TREE_L95_GENERATETREES_H

#include "util.h"
class L95_generateTrees : public LeetcodeTree{
private:
    vector<TreeNode*> generateTrees(int n);
    vector<TreeNode*> generateTrees(int start, int end);
public:
    L95_generateTrees(){}
    void test();
};


#endif //TREE_L95_GENERATETREES_H
