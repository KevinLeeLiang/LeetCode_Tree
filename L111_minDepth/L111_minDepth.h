//
// Created by garen-lee on 2025/4/6.
/**
  ******************************************************************************
  * @file           : L111_minDepth.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/6
  ******************************************************************************
  */
//

#ifndef TREE_L111_MINDEPTH_H
#define TREE_L111_MINDEPTH_H

#include "util.h"
class L111_minDepth : public LeetcodeTree{
private:
    int minDepth_dfs(TreeNode* root);
    int minDepth_bfs(TreeNode* root);
public:
    L111_minDepth() {}
    void test();
};


#endif //TREE_L111_MINDEPTH_H
