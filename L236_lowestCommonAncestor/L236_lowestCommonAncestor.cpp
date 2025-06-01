//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L236_lowestCommonAncestor.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#include "L236_lowestCommonAncestor.h"

bool L236_lowestCommonAncestor::dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root) return false;
    bool left = dfs(root->left, p, q);
    bool right = dfs(root->right, p, q);
    if ((left && right) || ((root->val == p->val || root->val == q->val) && (left || right))) {
        res = root;
    }
    return left || right || (root->val == p->val || root->val == q->val);
}

TreeNode* L236_lowestCommonAncestor::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    dfs(root, p, q);
    return res;
}
void L236_lowestCommonAncestor::test() {
    vector<int> nums = {3,5,1,6,2,0,8,-1,-1,7,4};
    TreeNode* root = create_treenode(nums, true);
    vector<int> ps = {5,6,2,-1,-1,7,4};
    TreeNode* p = create_treenode(ps, true);
    vector<int> qs = {1, 0, 8};
    TreeNode* q = create_treenode(qs, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    nums = {3,5,1,6,2,0,8,-1,-1,7,4};
    root = create_treenode(nums, true);
    ps = {5,6,2,-1,-1,7,4};
    p = create_treenode(ps, true);
    qs = {4};
    q = create_treenode(qs, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    nums = {1,2};
    root = create_treenode(nums, true);
    ps = {1, 2};
    p = create_treenode(ps, true);
    qs = {2};
    q = create_treenode(qs, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
}