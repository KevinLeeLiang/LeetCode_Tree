//
// Created by garen-lee on 2025/2/16.
/**
  ******************************************************************************
  * @file           : L96_numTree.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/16
  ******************************************************************************
  */
//

#include "L96_numTree.h"

int L96_numTree::numTrees(int n) {
    vector<int>G(n+1, 0);
    G[0] = 1;
    G[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            G[i] += G[j-1] * G[i-j];
        }
    }
    return G[n];
}

void L96_numTree::test() {
    int n;
    n = 3;
    cout << numTrees(n) << endl;
    n = 1;
    cout << numTrees(n) << endl;
}