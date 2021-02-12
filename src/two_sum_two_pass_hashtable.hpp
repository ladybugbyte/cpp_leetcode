// Solution with O(n) time complexitiy and O(n) space complexity
// Time complexity is calculated so ...
// Space complexitiy is calculated so ... 

#ifndef TWO_SUM_TWO_PASS_HASH_TABLE_H
#define TWO_SUM_TWO_PASS_HASH_TABLE_H

#include <vector>
#include <map>
using namespace std; 

class SolutionTwoPass {

  public: 
  std::vector<int> twoSum(vector<int>& nums, int target) {
    
      std::map<int,int> hashmap;
      vector<int> result; 
      for (int i=0; i< nums.size(); i++) {
        int complement = target - nums[i];
        if(hashmap.find(complement) != hashmap.end()&&hashmap(complement)->second!=i) {
          result.push_back(i);
          result.push_back(hashmap(complement)->second);
        }
        hasmap.insert(pair<int,int>(nums[i],i));
      }
     
      return result;  
  }
};
#endif