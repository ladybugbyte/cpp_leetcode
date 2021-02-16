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
    std::map<int,int> hashtable{std::make_pair(nums[0],0)};

    std::vector<int> result;

    for(int i=0; i < nums.size(); i++) {
      hashtable[nums[i]] = i;
    }

    for(int i=0; i < nums.size(); i++) {
      int complement = target-nums[i];
      if(hashtable.find(complement)!= hashtable.end() && hashtable[complement] != i){
        result = {hashtable[complement],i};
 
      }
      hashtable[nums[i]]=i;

    }
    return result; 
  }
};

#endif