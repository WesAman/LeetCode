class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;

        for(int i = 0; i < nums.size(); i++){

            for(int p = 0; p < nums.size(); p++){
                if(abs(nums[i] - nums[p] == k)){
                    count +=1;
                
                }
            }
        }
        return count;
    }
    // O(n^2)
};
