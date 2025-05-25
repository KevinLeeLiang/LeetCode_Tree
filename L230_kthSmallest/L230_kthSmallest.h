//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L230_kthSmallest.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#ifndef TREE_L230_KTHSMALLEST_H
#define TREE_L230_KTHSMALLEST_H

#include "util.h"
class L230_kthSmallest : public LeetcodeTree {
private:
    int kthSmallest(TreeNode* root, int k);
public:
    L230_kthSmallest() {}
    void test();
};


#endif //TREE_L230_KTHSMALLEST_H
