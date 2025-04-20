//
// Created by garen-lee on 2025/4/20.
/**
  ******************************************************************************
  * @file           : L117_connect.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/20
  ******************************************************************************
  */
//

#ifndef TREE_L117_CONNECT_H
#define TREE_L117_CONNECT_H

#include "util.h"
class L117_connect : public LeetcodeTree {
private:
    Node* connect(Node* root);
public:
    L117_connect() {}
    void test();
};


#endif //TREE_L117_CONNECT_H
