class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> valid;
        int count=0;;
        for(int i = 0; i < nums.size(); i++){
            
            for(int j = 0; j<nums.size(); j++ ){
                if(nums[j] < nums[i]){
                    count++;
                    
                }
            }
            valid.push_back(count);
            count=0;
        }
        return valid;
    }
};
