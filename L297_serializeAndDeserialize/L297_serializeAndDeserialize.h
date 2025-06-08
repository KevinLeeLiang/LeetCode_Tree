//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L297_serializeAndDeserialize.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#ifndef TREE_L297_SERIALIZEANDDESERIALIZE_H
#define TREE_L297_SERIALIZEANDDESERIALIZE_H

#include "util.h"
class L297_serializeAndDeserialize : public LeetcodeTree {
private:
    string serialize(TreeNode* root);
    void rserialize(TreeNode* root, string& str);
    TreeNode* rdeserialize(list<string>& dataArray);
    TreeNode* deserialize(string data);
public:
    L297_serializeAndDeserialize() {}
    void test();
};


#endif //TREE_L297_SERIALIZEANDDESERIALIZE_H
