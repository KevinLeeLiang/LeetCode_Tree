//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L100_isSameTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#include "L100_isSameTree.h"

bool L100_isSameTree::isSameTree(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr) {
        return true;
    } else if (p == nullptr || q == nullptr) {
        return false;
    } else if (p->val != q->val) {
        return false;
    } else {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}
void L100_isSameTree::test() {
    TreeNode* p, *q;
    vector<int>pl, ql;
    pl = {1,2,3};
    ql = {1,2,3};
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout << isSameTree(p, q) << endl;
    pl = {1,2};
    ql = {1,-1,2};
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout << isSameTree(p, q) << endl;
}