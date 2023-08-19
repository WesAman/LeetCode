class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        vector <string> ofSum;
        string converted; //initialize variables


        for(int i = 0; i < nums.size(); i++){
            elementSum += nums[i]; //straight forward: just find the sum of elements

        }
        for(int i = 0; i < nums.size(); i++){
                ofSum.push_back( to_string(nums[i]) ); // here I pushed each value to a string vector
                                                       //this makes it easier for me to parse each number
        }
        

        for(int i=0; i < ofSum.size(); i++){
            converted += ofSum[i];  // I then take the string vector & have it all in 1 contiguous array
        }                           // i deem this as needed because of the next step.

        for(int i=0; i < converted.size(); i++){
            digitSum += (converted[i] - '0'); //this step i individually parsed each index as a char value
                                             // this allows me to add each individual number to digit sum
        }

        int result = abs(elementSum - digitSum); // calculate the result (using absolute val function)
        return result;
    }
};
