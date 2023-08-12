class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0; //init count
      for(int i = 0; i < nums.size(); i++){
    //setup first loop to iterate each value 
          for(int j= i + 1; j < nums.size(); j++){ //setup 2nd loop to compare each value from 1st loop
              if(nums[i] == nums[j]){ //check if match, if true:
                   count += 1; //update count 
              }
          }
      }
    
    return count;

    }
};
