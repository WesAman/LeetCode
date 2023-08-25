class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int> M;

        for(int i = 0; i < nums.size(); i++){
            int x = M[nums[i] + k]; //
            int y = M[nums[i] - k]; //
            //if x-y = k, then 
            // x = k + y  AND y = x - k

            count += x + y;
            //update map M count 
            M[nums[i]]++;
        }
        return count;
    }
  //O(n)  
};
