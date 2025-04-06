//
// Created by garen-lee on 2025/2/4.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/4
  ******************************************************************************
  */
//

#ifndef TREE_TEST_FACTORY_H
#define TREE_TEST_FACTORY_H
#include <memory>
#include "L94_inorderTraversal/L94_inorderTraversal.h"
#include "L95_generateTrees/L95_generateTrees.h"
#include "L96_numTree/L96_numTree.h"
#include "L98_isValidBST/L98_isValidBST.h"
#include "L99_recoverTree/L99_recoverTree.h"
#include "L100_isSameTree/L100_isSameTree.h"
#include "L101_isSymmetric/L101_isSymmetric.h"
#include "L102_levelOrder/L102_levelOrder.h"
#include "L103_zigzagLevelOrder/L103_zigzagLevelOrder.h"
#include "L104_maxDepth/L104_maxDepth.h"
#include "L105_buildTree/L105_buildTree.h"
#include "L106_buildTree/L106_buildTree.h"
#include "L107_levelOrderBottom/L107_levelOrderBottom.h"
#include "L108_sortedArrayToBST/L108_sortedArrayToBST.h"
#include "L109_sortedListToBST/L109_sortedListToBST.h"
#include "L110_isBalanced/L110_isBalanced.h"
#include "L111_minDepth/L111_minDepth.h"
#include "L112_hasPathSum/L112_hasPathSum.h"

using namespace std;
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L94") {
            std::shared_ptr<L94_inorderTraversal> tmp= std::make_shared<L94_inorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L95") {
            std::shared_ptr<L95_generateTrees> tmp= std::make_shared<L95_generateTrees>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L96") {
            std::shared_ptr<L96_numTree> tmp= std::make_shared<L96_numTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L98") {
            std::shared_ptr<L98_isValidBST> tmp= std::make_shared<L98_isValidBST>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L99") {
            std::shared_ptr<L99_recoverTree> tmp= std::make_shared<L99_recoverTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L100") {
            std::shared_ptr<L100_isSameTree> tmp= std::make_shared<L100_isSameTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L101") {
            std::shared_ptr<L101_isSymmetric> tmp= std::make_shared<L101_isSymmetric>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L102") {
            std::shared_ptr<L102_levelOrder> tmp= std::make_shared<L102_levelOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L103") {
            std::shared_ptr<L103_zigzagLevelOrder> tmp= std::make_shared<L103_zigzagLevelOrder>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L104") {
            std::shared_ptr<L104_maxDepth> tmp= std::make_shared<L104_maxDepth>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L105") {
            std::shared_ptr<L105_buildTree> tmp= std::make_shared<L105_buildTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L106") {
            std::shared_ptr<L106_buildTree> tmp= std::make_shared<L106_buildTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L107") {
            std::shared_ptr<L107_levelOrderBottom> tmp= std::make_shared<L107_levelOrderBottom>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L108") {
            std::shared_ptr<L108_sortedArrayToBST> tmp= std::make_shared<L108_sortedArrayToBST>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L109") {
            std::shared_ptr<L109_sortedListToBST> tmp= std::make_shared<L109_sortedListToBST>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L110") {
            std::shared_ptr<L110_isBalanced> tmp= std::make_shared<L110_isBalanced>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L111") {
            std::shared_ptr<L111_minDepth> tmp= std::make_shared<L111_minDepth>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L112") {
            std::shared_ptr<L112_hasPathSum> tmp= std::make_shared<L112_hasPathSum>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodeTree> solution_;
};
#endif //TREE_TEST_FACTORY_H
