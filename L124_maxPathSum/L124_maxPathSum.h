//
// Created by garen_lee on 2025/4/27.
/**
  ******************************************************************************
  * @file           : L124_maxPathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/27
  ******************************************************************************
  */
//

#ifndef TREE_L124_MAXPATHSUM_H
#define TREE_L124_MAXPATHSUM_H

#include "util.h"
class L124_maxPathSum : public LeetcodeTree {
private:
    int maxPathSum(TreeNode* root);
    int maxGain(TreeNode* node);
    int max_sum = INT_MIN;
public:
    L124_maxPathSum() {}
    void test();
};


#endif //TREE_L124_MAXPATHSUM_H
