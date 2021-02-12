// My first attempt to solve this problem - working

#ifndef TWO_SUM_MY_INITIAL_SOLUTION_H
#define TWO_SUM_MY_INITIAL_SOLUTION_H

#include <vector>
 
class Solution {
public: 
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::vector<int> result;        
    for (int i = 0; i < nums.size() -1; i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
            result.push_back(i);
            result.push_back(j);
            }           
        }
    }
        
    return result;
        
    }
};

#endif
