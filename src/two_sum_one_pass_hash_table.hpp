// One pass hash table solution - as we pass through the table we perform lookup for a complement at return immediately 
// Time complexitiy is O(n) - we traverse the list of n elements only once, and each lookup is O(1)
// Space complexity is O(n) - we store most n elements in the table
#ifndef TWO_SUM_ONE_PASS_HASH_TABLE_H
#define TWO_SUM_ONE_PASS_HASH_TABLE_H

#include <vector>
#include <unordered_map>
using namespace std; 

class SoulutionHash {
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int,int> hashmap{std::make_pair(nums[0],0)};
    
    vector<int> result;
    for(int i=0; i<nums.size(); i++) {
      auto complement = hasmap.find(target-nums[i]);
      if(complement != hasmap.end() && complement->second != i){
        result = {complement->second,i};
      }
      hashmap[nums[i]=i;
    
    }
    return result; 
};

#endif
