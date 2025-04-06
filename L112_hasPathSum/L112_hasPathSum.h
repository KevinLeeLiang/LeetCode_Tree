//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#ifndef TREE_L112_HASPATHSUM_H
#define TREE_L112_HASPATHSUM_H

#include "util.h"
class L112_hasPathSum : public LeetcodeTree {
private:
    bool hasPathSum(TreeNode *root, int targetSum);
public:
    L112_hasPathSum() {}
    void test();
};


#endif //TREE_L112_HASPATHSUM_H
