//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L106_buildTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#ifndef TREE_L106_BUILDTREE_H
#define TREE_L106_BUILDTREE_H

#include "util.h"
class L106_buildTree : public LeetcodeTree {
private:
    unordered_map<int, int> idx_map_;
    int post_idx_;
private:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder, int in_left, int in_right);
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
public:
    L106_buildTree() {}
    void test();
};


#endif //TREE_L106_BUILDTREE_H
