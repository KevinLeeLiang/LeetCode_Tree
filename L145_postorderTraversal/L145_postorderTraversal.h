//
// Created by garen-lee on 2025/5/4.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/4
  ******************************************************************************
  */
//

#ifndef TREE_L145_POSTORDERTRAVERSAL_H
#define TREE_L145_POSTORDERTRAVERSAL_H

#include "util.h"
class L145_postorderTraversal : public LeetcodeTree {
private:
    vector<int> postorderTraversal(TreeNode *root);
    void postorder(TreeNode *root, vector<int> &res);
public:
    L145_postorderTraversal() {}
    void test();
};


#endif //TREE_L145_POSTORDERTRAVERSAL_H
