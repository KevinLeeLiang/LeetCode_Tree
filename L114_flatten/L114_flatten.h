//
// Created by garen-lee on 2025/4/13.
/**
  ******************************************************************************
  * @file           : L114_flatten.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/13
  ******************************************************************************
  */
//

#ifndef TREE_L114_FLATTEN_H
#define TREE_L114_FLATTEN_H

#include "util.h"
class L114_flatten : public LeetcodeTree {
private:
    void flatten(TreeNode *root);
public:
    L114_flatten() {}
    void test();
};


#endif //TREE_L114_FLATTEN_H
