//
// Created by garen-lee on 2025/6/1.
/**
  ******************************************************************************
  * @file           : L236_lowestCommonAncestor.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/1
  ******************************************************************************
  */
//

#ifndef TREE_L236_LOWESTCOMMONANCESTOR_H
#define TREE_L236_LOWESTCOMMONANCESTOR_H

#include "util.h"
class L236_lowestCommonAncestor : public LeetcodeTree {
private:
    TreeNode* res;
    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q);
    TreeNode * lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
public:
    L236_lowestCommonAncestor() {}
    void test();
};


#endif //TREE_L236_LOWESTCOMMONANCESTOR_H
