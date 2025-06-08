//
// Created by garen-lee on 2025/6/8.
/**
  ******************************************************************************
  * @file           : L331_isValidSerialize.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/8
  ******************************************************************************
  */
//

#include "L331_isValidSerialize.h"

bool L331_isValidSerialize::isValidSerialization(string preorder) {
    int n = preorder.size();
    int i = 0;
    stack<int>stk;
    stk.push(1);
    while (i < n) {
        if (stk.empty()) {
            return false;
        }
        if (preorder[i] == ',') {
            i++;
        }else if (preorder[i] == '#') {
            stk.top() -= 1;
            if (stk.top() == 0) {
                stk.pop();
            }
            i++;
        } else {
            while (i < n && preorder[i] != ',') {
                i++;
            }
            stk.top() -= 1;
            if (stk.top() == 0) {
                stk.pop();
            }
            stk.push(2);
        }
    }
    return stk.empty();
}

void L331_isValidSerialize::test() {
    string preorder = "9,3,4,#,#,1,#,#,2,#,6,#,#";
    cout << isValidSerialization(preorder) << endl;
    preorder = "1,#";
    cout << isValidSerialization(preorder) << endl;
    preorder = "9,#,#,1";
    cout << isValidSerialization(preorder) << endl;
}