//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L108_sortedArrayToBST.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#ifndef TREE_L108_SORTEDARRAYTOBST_H
#define TREE_L108_SORTEDARRAYTOBST_H

#include "util.h"
class L108_sortedArrayToBST : public LeetcodeTree {
private:
    TreeNode *sortedArrayToBST(vector<int> &nums);
    TreeNode *sortedArrayToBST(vector<int> &nums, int left, int right);
public:
    L108_sortedArrayToBST() {}
    void test();
};


#endif //TREE_L108_SORTEDARRAYTOBST_H
