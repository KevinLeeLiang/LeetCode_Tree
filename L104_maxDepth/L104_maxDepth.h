//
// Created by garen-lee on 2025/3/9.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/9
  ******************************************************************************
  */
//

#ifndef TREE_L104_MAXDEPTH_H
#define TREE_L104_MAXDEPTH_H

#include "util.h"
class L104_maxDepth : public LeetcodeTree {
private:
    int maxDepth(TreeNode *root);
public:
    L104_maxDepth() {}
    void test();
};


#endif //TREE_L104_MAXDEPTH_H
