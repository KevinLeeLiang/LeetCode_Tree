//
// Created by garen-lee on 2025/5/11.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/11
  ******************************************************************************
  */
//

#ifndef TREE_L199_RIGHTSIDEVIEW_H
#define TREE_L199_RIGHTSIDEVIEW_H

#include "util.h"
class L199_rightSideView : public LeetcodeTree {
private:
    vector<int> rightSideView(TreeNode* root);
public:
    L199_rightSideView() {}
    void test();
};


#endif //TREE_L199_RIGHTSIDEVIEW_H
