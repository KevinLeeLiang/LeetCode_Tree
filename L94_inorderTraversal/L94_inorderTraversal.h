//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#ifndef TREE_L94_INORDERTRAVERSAL_H
#define TREE_L94_INORDERTRAVERSAL_H

#include "util.h"
class L94_inorderTraversal : public LeetcodeTree{
    void dfs(TreeNode* root, vector<int>& res);
    vector<int> inorderTraversal(TreeNode* root);
public:
    L94_inorderTraversal(){};
    void test();
};


#endif //TREE_L94_INORDERTRAVERSAL_H
