// Solution with O(n) time complexitiy and O(n) space complexity
// Time complexity O(n) - two separated for loops through N elements
// Space complexitiy O(n) - storing N elements in hash table 

#ifndef TWO_SUM_TWO_PASS_HASH_TABLE_H
#define TWO_SUM_TWO_PASS_HASH_TABLE_H

#include <vector>
#include <map> 

class SolutionTwoPass {

  public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int,int> hashtable;

    std::vector<int> result;

   // this init is not necessary
    for(int i=0; i < nums.size(); i++) {
      hashtable[nums[i]] = i;
    }

    for(int i=0; i < nums.size(); i++) {
      int complement = target-nums[i];
      if((hashtable.find(complement) != hashtable.end()) && (hashtable[complement] != i)){
        result.push_back(i);
        result.push_back(hashtable[complement]);
        break;
      }

    }
    return result; 
  }
};

#endif