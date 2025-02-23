//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L99_recoverTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#ifndef TREE_L99_RECOVERTREE_H
#define TREE_L99_RECOVERTREE_H

#include "util.h"
class L99_recoverTree : public LeetcodeTree{
private:
    void recoverTree(TreeNode* root);
    void inorder(TreeNode* root, vector<int>& nums);
    pair<int, int> findTwoSwapped(vector<int>& nums);
    void recover(TreeNode* r, int count, int x, int y);
public:
    L99_recoverTree() {}
    void test();

};


#endif //TREE_L99_RECOVERTREE_H
