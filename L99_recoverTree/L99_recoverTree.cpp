//
// Created by garen-lee on 2025/2/23.
/**
  ******************************************************************************
  * @file           : L99_recoverTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/23
  ******************************************************************************
  */
//

#include "L99_recoverTree.h"

void L99_recoverTree::inorder(TreeNode *root, vector<int> &nums) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, nums);
    nums.push_back(root->val);
    inorder(root->right, nums);
}

pair<int, int>L99_recoverTree::findTwoSwapped(vector<int> &nums) {
    int n = nums.size();
    int index1 = -1, index2 = -1;
    for (int i = 0; i < n - 1; ++i) {
        if (nums[i] > nums[i + 1]) {
            index2 = i + 1;
            if (index1 == -1) {
                index1 = i;
            } else {
                break;
            }
        }
    }
    int x = nums[index1], y = nums[index2];
    return {x, y};
}

void L99_recoverTree::recover(TreeNode* r, int count, int x, int y){
    if (r == nullptr) {
        return;
    }
    if (r->val == x || r->val == y) {
        r->val = r->val == x ? y : x;
        if (--count == 0) {
            return;
        }
    }
    recover(r->left, count, x, y);
    recover(r->right, count, x, y);
}

void L99_recoverTree::recoverTree(TreeNode* root) {
    vector<int> nums;
    inorder(root, nums);
    pair<int, int> two_swapped = findTwoSwapped(nums);
    recover(root, 2, two_swapped.first, two_swapped.second);
}

void L99_recoverTree::test() {
    vector<int> nums = {1, 3, -1,-1,2};
    TreeNode* root = create_treenode(nums, true);
    recoverTree(root);
    cout << print_tree(root) << endl;
    nums = {3, 1, 4, -1, -1, 2};
    root = create_treenode(nums, true);
    recoverTree(root);
    cout << print_tree(root) << endl;
}