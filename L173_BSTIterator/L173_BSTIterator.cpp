//
// Created by garen-lee on 2025/5/11.
/**
  ******************************************************************************
  * @file           : L173_BSTIterator.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/11
  ******************************************************************************
  */
//

#include "L173_BSTIterator.h"

using namespace L173;

int BSTIterator::next() {
    while (cur != nullptr || !st.empty()) {
        st.push(cur);
        cur = cur->left;
    }
    cur = st.top();
    st.pop();
    int val = cur->val;
    cur = cur->right;
    return val;
}

bool BSTIterator::hasNext() {
    return cur != nullptr || !st.empty();
}

void L173_BSTIterator::test() {
    vector<int>nums = {7, 3, 15, -1, -1, 9, 20};
    TreeNode* root = create_treenode(nums, true);
    BSTIterator* obj = new BSTIterator(root);
    cout << obj->next() << endl;
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
    cout << obj->next() << endl;
    cout << obj->hasNext() << endl;
}