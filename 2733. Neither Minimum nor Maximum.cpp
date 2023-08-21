class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() <= 2) {
            return -1; // no number that is neither the minimum nor the maximum
        }
        return nums[1]; // Return the element thats not the minimum or maximum

        //  LMFAO troll solution
    }
};

