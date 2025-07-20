//
// Created by garen-lee on 2025/7/13.
/**
  ******************************************************************************
  * @file           : L508_findFrequentTreeSum.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/13
  ******************************************************************************
  */
//

#include "L508_findFrequentTreeSum.h"

int L508_findFrequentTreeSum::dfs(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    int sum = root->val + dfs(root->left) + dfs(root->right);
    maxCnt = max(maxCnt, ++cnt[sum]);
    return sum;
}

vector<int> L508_findFrequentTreeSum::findFrequentTreeSum(TreeNode* root) {
    cnt.clear();
    maxCnt = 0;
    dfs(root);
    vector<int> ans;
    for (auto &[s, c]: cnt) {
        if (c == maxCnt) {
            ans.push_back(s);
        }
    }
    return ans;
}

void L508_findFrequentTreeSum::test() {
    vector<int> nums = {5,2,-3};
    TreeNode* root = create_treenode(nums, false);
    vector<int> ans = findFrequentTreeSum(root);
    print_vector(ans);
    nums = {5,2,-5};
    root = create_treenode(nums, false);
    ans = findFrequentTreeSum(root);
    print_vector(ans);
}