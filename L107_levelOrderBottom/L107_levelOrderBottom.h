//
// Created by garen-lee on 2025/3/23.
/**
  ******************************************************************************
  * @file           : L107_levelOrderBottom.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/23
  ******************************************************************************
  */
//

#ifndef TREE_L107_LEVELORDERBOTTOM_H
#define TREE_L107_LEVELORDERBOTTOM_H

#include "util.h"
class L107_levelOrderBottom : public LeetcodeTree {
private:
    vector<vector<int>> levelOrderBottom(TreeNode* root);
public:
    L107_levelOrderBottom() {}
    void test();
};


#endif //TREE_L107_LEVELORDERBOTTOM_H
