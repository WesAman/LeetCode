class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>decompressed; // need to store values requested

        //question digestion:
        //  nums gives it to us as [value][times] -so-> [4][1] -so-> [print the 4 one time]

        for(int i = 0; i < nums.size(); i += 2 ){ // the value we want to print
            for(int k = 0; k < nums[i]; k++){
                decompressed.push_back(nums[i+1]); //(push it into a vector this many times)
            }
        }
    return decompressed;
        
    }
};
