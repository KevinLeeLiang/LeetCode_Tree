//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L297_serializeAndDeserialize.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#include "L297_serializeAndDeserialize.h"
void L297_serializeAndDeserialize::rserialize(TreeNode *root, string &ret) {
    if (root == nullptr) {
        ret += "None,";
    } else {
        ret += to_string(root->val) + ",";
        rserialize(root->left, ret);
        rserialize(root->right, ret);
    }
}

string L297_serializeAndDeserialize::serialize(TreeNode *root) {
    string ret;
    rserialize(root, ret);
    return ret;
}

TreeNode *L297_serializeAndDeserialize::rdeserialize(list<string>& dataArray) {
    if (dataArray.front() == "None") {
        dataArray.erase(dataArray.begin());
        return nullptr;
    }

    TreeNode* root = new TreeNode(stoi(dataArray.front()));
    dataArray.erase(dataArray.begin());
    root->left = rdeserialize(dataArray);
    root->right = rdeserialize(dataArray);
    return root;
}

TreeNode *L297_serializeAndDeserialize::deserialize(string data) {
    list<string> dataArray;
    string str;
    for (auto& ch : data) {
        if (ch == ',') {
            dataArray.push_back(str);
            str.clear();
        } else {
            str.push_back(ch);
        }
    }
    if (!str.empty()) {
        dataArray.push_back(str);
        str.clear();
    }
    return rdeserialize(dataArray);
}

void L297_serializeAndDeserialize::test() {
    vector<int> nums = {1, 2, 3, -1, -1, 4, 5};
    TreeNode *root = create_treenode(nums, true);
    cout << serialize(root) << endl;
    nums = {};
    root = create_treenode(nums, true);
    cout << serialize(root) << endl;
    nums = {1};
    root = create_treenode(nums, true);
    cout << serialize(root) << endl;
    nums = {1, 2};
    root = create_treenode(nums, true);
    cout << serialize(root) << endl;
}