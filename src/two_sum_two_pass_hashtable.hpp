// Solution with O(n) time complexitiy and O(n) space complexity
// Time complexity is calculated so ...
// Space complexitiy is calculated so ... 

#include<map>
#include<vector>

Class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    
      map<int,int> hashmap;
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
