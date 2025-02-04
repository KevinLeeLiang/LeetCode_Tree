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
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L94") {
            std::shared_ptr<L94_inorderTraversal> tmp= std::make_shared<L94_inorderTraversal>();
            solution_ = std::dynamic_pointer_cast<LeetcodeTree>(tmp);
        } else if (title == "L95") {
            std::shared_ptr<L95_generateTrees> tmp= std::make_shared<L95_generateTrees>();
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
