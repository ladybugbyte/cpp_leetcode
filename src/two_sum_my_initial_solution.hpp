// My first attempt to solve this problem - working
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> result;
        
        for (int i = 0; i < nums.size() -1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                  if (nums[i] + nums[j] == target) {
                    result = {i, j};
                  }   
          
            }
        }
        
        return result;
        
    }
};
