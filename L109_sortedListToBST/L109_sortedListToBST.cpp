//
// Created by garen-lee on 2025/3/30.
/**
  ******************************************************************************
  * @file           : L109_sortedListToBST.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/30
  ******************************************************************************
  */
//

#include "L109_sortedListToBST.h"

ListNode* L109_sortedListToBST::getMedian(ListNode *left, ListNode *right) {
    ListNode *fast = left;
    ListNode *slow = left;
    while (fast != right && fast->next != right) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

TreeNode *L109_sortedListToBST::buildTree(ListNode *left, ListNode *right) {
    if (left == right) {
        return nullptr;
    }
    ListNode *mid = getMedian(left, right);
    TreeNode *root = new TreeNode(mid->val);
    root->left = buildTree(left, mid);
    root->right = buildTree(mid->next, right);
    return root;
}

TreeNode *L109_sortedListToBST::sortedListToBST(ListNode *head) {
    return buildTree(head, nullptr);
}

void L109_sortedListToBST::test() {
    vector<int> nums = {-10, -3, 0, 5, 9};
    ListNode *head = create_list(nums);
    TreeNode *root = sortedListToBST(head);
    cout << print_tree(root) << endl;
    nums = {};
    head = create_list(nums);
    root = sortedListToBST(head);
    cout << print_tree(root) << endl;
}