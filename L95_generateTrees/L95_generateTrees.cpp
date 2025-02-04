//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : L95_generateTrees.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#include "L95_generateTrees.h"
vector<TreeNode*> L95_generateTrees::generateTrees(int n){
    if (n == 0) {
        return {nullptr};
    }
    return generateTrees(1, n);
}
vector<TreeNode*> L95_generateTrees::generateTrees(int start, int end){
    if (start > end) {
        return {nullptr};
    }
    vector<TreeNode*> res;
    for (int i = start; i <= end; i++) {
        vector<TreeNode*> left_trees = generateTrees(start, i - 1);
        vector<TreeNode*> right_trees = generateTrees(i + 1, end);
        for (int j = 0; j < left_trees.size(); j++) {
            for (int k = 0; k < right_trees.size(); k++) {
                TreeNode *root = new TreeNode(i);
                root->left = left_trees[j];
                root->right = right_trees[k];
                res.push_back(root);
            }
        }
    }
    return res;
}
void L95_generateTrees::test(){
    int n = 3;
    vector<TreeNode*> res = generateTrees(n);
    for (int i = 0; i < res.size(); i++) {
        auto s = print_tree(res[i]);
        cout << s << endl;
    }
    cout << "=======" << endl;
    n = 1;
    res = generateTrees(n);
    for (int i = 0; i < res.size(); i++) {
        auto s = print_tree(res[i]);
        cout << s << endl;
    }
    cout << "=======" << endl;
}