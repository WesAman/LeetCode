class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        const int max = 101; //setting the maximum size of nums to the constraints to 101
        vector <int> count(max, 0); //create a vector that is the max size, filled with zeros.
        
        
        //O(n)
        //try to count the frequency of each value within nums
        for(int each : nums){
            count[each]++; //this line will increment the frequency of a value if detected within nums
        }
        

        //create a running sum of repeated values --> keep track of count
        //O(m)
        for(int i = 1; i < max; i++){
            count[i] += count[ i - 1 ];
             //this is so we can keep track of the count of numbers LESS than the current value of 'nums'
             //ex: the number 6: [6,5,4,8] --> 6 has 2 numbers (5 and 4 as they're less than 6)
        }

        vector<int>result(nums.size()); //this nteracts with the 'count' vector
        //O(k)
        for (int i = 0; i < nums.size(); i++) { //iterate thru the array
        if (nums[i] == 0) { //if the value is zero, call it quits
            result[i] = 0;
        } else {
            result[i] = count[nums[i] - 1];

            //nums[i] represents the given vector, count[nums[i]-1] represents that running sum 
            //so: results[i] retrieves the count of repeated values SMALLER than the requested nums[i]
        }
    }
    //O(n+m+k) < O(n^2)
    //looks familiar to bucket-sort

    return result;
}


};
