class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map <int, bool> map;
        int count = 0;
    
        // Loop to populate the unordered_map with values from the input vector 
        for (int i = 0;  i < nums.size(); i++){
            map[nums[i]] = true; // Using key in the map to store presence of number
        }

        // Loop through the vector "nums" again to check for arithmetic triplets
        for(int i = 0; i < nums.size(); i++){
            // Check if there are two values in the map such that their difference and sum match
               if(map[nums[i]- diff] && map[nums[i]+diff]){
                count += 1;
                //Increment the count when an arithmetic triplet is found
            }
        }
        return count;
        //inspred from @VehicleOfPuzzle's approach
    }
};
