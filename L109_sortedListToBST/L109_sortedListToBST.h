//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L109_sortedListToBST.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#ifndef TREE_L109_SORTEDLISTTOBST_H
#define TREE_L109_SORTEDLISTTOBST_H

#include "util.h"

class L109_sortedListToBST : public LeetcodeTree {
private:
    TreeNode* sortedListToBST(ListNode* head);
    TreeNode* buildTree(ListNode* left, ListNode* right);
    ListNode* getMedian(ListNode* left, ListNode* right);
public:
    L109_sortedListToBST() {};
    void test();
};


#endif //TREE_L109_SORTEDLISTTOBST_H
