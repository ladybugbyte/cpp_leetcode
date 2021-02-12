#include "gtest/gtest.h"

#include "../src/two_sum_my_initial_solution.hpp"

TEST(TwoSumTest, TestMyFirstSolution) {
    Solution s{}; 
    std::vector<int> nums = {1,4,5,6};
    int target = 5;
    std::vector<int> expected = {0,1};
    std::vector<int> result = s.twoSum(nums,target);
    ASSERT_EQ(expected,result);
} 

TEST(TwoSumTest, TestMiddleOfArray) {
    Solution s{}; 
    std::vector<int> nums = {1,4,5,6};
    int target = 9;
    std::vector<int> expected = {1,2};
    std::vector<int> result = s.twoSum(nums,target);
    ASSERT_EQ(expected,result);
} 