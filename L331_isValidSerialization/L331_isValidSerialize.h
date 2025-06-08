//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L331_isValidSerialize.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#ifndef TREE_L331_ISVALIDSERIALIZE_H
#define TREE_L331_ISVALIDSERIALIZE_H

#include "util.h"
class L331_isValidSerialize : public LeetcodeTree {
private:
    bool isValidSerialization(string preorder);
public:
    L331_isValidSerialize() {}
    void test();
};


#endif //TREE_L331_ISVALIDSERIALIZE_H
