class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    // auto low=lower_bound(nums.begin(),nums.end(),target); //find tatget
    //     int magicNum =low-nums.begin(); //return value
    //     return magicNum;
    // }

        // int magicNum; 
         if(target<nums[0]){
                    return 0;
                }

        for(int i=0; i<nums.size(); i++){

            if(nums[i] == target){

                return i;
            }
        }
    
      for(int i=0; i<nums.size()-1; i++){

            if(nums[i] < target && nums[i+1]>=target){

                return i+1;
            }
            
        }

        return nums.size();
        //  return magicNum;
    }
   
};
/* other solution!
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    auto low=lower_bound(nums.begin(),nums.end(),target); //find tatget
        int magicNum =low-nums.begin(); //return value
        return magicNum;
    }
*/
