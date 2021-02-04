// One pass hash table solution - as we pass through the table we perform lookup for a complement at return immediately 
// Time complexitiy is O(n) - we traverse the list of n elements only once, and each lookup is O(1)
// Space complexity is O(n) - we store most n elements in the table

class Soulution {
  public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hashmap{std::make_pair(nums[0],0)};
    
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
