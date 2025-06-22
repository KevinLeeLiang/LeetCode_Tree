//
// Created by garen-lee on 2025/6/22.
/**
  ******************************************************************************
  * @file           : L427_construct.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/22
  ******************************************************************************
  */
//

#include "L427_construct.h"

L427::Node* L427_construct::construct(vector<vector<int>>& grid) {
    function<L427::Node*(int, int, int, int)> dfs = [&](int r0, int c0, int r1, int c1) {
        for (int i = r0; i < r1; ++i) {
            for (int j = c0; j < c1; ++j) {
                if (grid[i][j] != grid[r0][c0]) { // 不是叶节点
                    return new L427::Node(
                            true,
                            false,
                            dfs(r0, c0, (r0 + r1) / 2, (c0 + c1) / 2),
                            dfs(r0, (c0 + c1) / 2, (r0 + r1) / 2, c1),
                            dfs((r0 + r1) / 2, c0, r1, (c0 + c1) / 2),
                            dfs((r0 + r1) / 2, (c0 + c1) / 2, r1, c1)
                    );
                }
            }
        }
        // 是叶节点
        return new L427::Node(grid[r0][c0], true);
    };
    return dfs(0, 0, grid.size(), grid.size());

}

void L427_construct::test() {
    vector<vector<int>> grid = {{0,1}, {1, 0}};
    L427::Node* root = construct(grid);
    cout << root->val << endl;
}