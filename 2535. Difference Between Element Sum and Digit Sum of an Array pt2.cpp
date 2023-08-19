class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        int digit = 0;
        vector <string> ofSum;
        string converted; //initialize variables


        for(int i = 0; i < nums.size(); i++){
            elementSum += nums[i]; //straight forward: just find the sum of elements

        }

        for(int i=0; i< nums.size(); i++ ){
            int value = nums[i]; //take each array value
        
            while(value > 0){
                digit = value % 10;  //this while operation takes the last value: ex 15--> im taking 5,then divides by 10, then takes the 1
                digitSum += digit;
                value /= 10;
            }
      
        }

        int result = abs(elementSum - digitSum); // calculate the result (using absolute val function)
        return result;
    }

//grabbing digits numerically without using a string.
};
