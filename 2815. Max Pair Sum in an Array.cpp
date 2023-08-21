
 class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxSum = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            int value1 = nums[i];
            int maxDigit1 = findMaxDigit(value1);

            for (int j = i + 1; j < nums.size(); j++) {
                int value2 = nums[j];
                int maxDigit2 = findMaxDigit(value2);

                if (maxDigit1 == maxDigit2) { //compare matched digits
                    maxSum = max(maxSum, nums[i] + nums[j]);
                }
            }
        }

        return maxSum;
    }

    int findMaxDigit(int num) {
        int maxDigit = 0;

        while (num > 0) { // preserve each index individually
            int digit = num % 10;
            maxDigit = max(maxDigit, digit); //keep the biggest one
            num /= 10; //update num
        }

        return maxDigit;
    }
};
