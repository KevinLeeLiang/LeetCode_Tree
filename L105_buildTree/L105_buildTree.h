//
// Created by garen-lee on 2025/3/16.
/**
  ******************************************************************************
  * @file           : L105_buildTree.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/16
  ******************************************************************************
  */
//

#ifndef TREE_L105_BUILDTREE_H
#define TREE_L105_BUILDTREE_H

#include "util.h"
class L105_buildTree : public LeetcodeTree {
private:
    unordered_map<int, int>idx_map_;
private:
    TreeNode* myBuildTree(const vector<int>& preorder, const vector<int>& inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right);
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder);
public:
    L105_buildTree() {}
    void test();
};


#endif //TREE_L105_BUILDTREE_H
