//
// Created by garen-lee on 2025/5/11.
/**
  ******************************************************************************
  * @file           : L173_BSTIterator.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/11
  ******************************************************************************
  */
//

#ifndef TREE_L173_BSTITERATOR_H
#define TREE_L173_BSTITERATOR_H

#include "util.h"

namespace L173 {
    class BSTIterator {
    public:
        BSTIterator(TreeNode* root) : cur(root) {}
        int next();
        bool hasNext();
    private:
        TreeNode *cur;
        stack<TreeNode *> st;
    };
}

class L173_BSTIterator : public LeetcodeTree {
public:
    L173_BSTIterator() {}
    void test();
};


#endif //TREE_L173_BSTITERATOR_H
