//
// Created by garen-lee on 2025/5/25.
/**
  ******************************************************************************
  * @file           : L235_lowestCommonAncestor.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/25
  ******************************************************************************
  */
//

#include "L235_lowestCommonAncestor.h"

TreeNode *L235_lowestCommonAncestor::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    TreeNode* ancestor = root;
    while (true) {
        if (p->val < ancestor->val && q->val < ancestor->val) {
            ancestor = ancestor->left;
        } else if (p->val > ancestor->val && q->val > ancestor->val) {
            ancestor = ancestor->right;
        } else {
            break;
        }
    }
    return ancestor;
}

void L235_lowestCommonAncestor::test() {
    vector<int> vec = {6,2,8,0,4,7,9,-1,-1,3,5};
    TreeNode* root = create_treenode(vec, true);
    vector<int> vec_p = {2,0,4,9,-1,3,5};
    vector<int> vec_q = {8,7,9};
    TreeNode* p = create_treenode(vec_p, true);
    TreeNode* q = create_treenode(vec_q, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    vec = {6,2,8,0,4,7,9,-1,-1,3,5};
    vec_p = {2,0,4,9,-1,3,5};
    vec_q = {4,3,5};
    root = create_treenode(vec, true);
    p = create_treenode(vec_p, true);
    q = create_treenode(vec_q, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    vec = {2,1};
    vec_p = {2, 1};
    vec_q = {1};
    root = create_treenode(vec, true);
    p = create_treenode(vec_p, true);
    q = create_treenode(vec_q, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;

}