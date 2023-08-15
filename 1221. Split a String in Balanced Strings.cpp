class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int leftCount = 0;
        int rightCount = 0; //initialize values

        for (int i=0; i< s.length(); i++){ //setup 1 scan for-loop
            if (s[i]=='R'){ //inspect for an R
                rightCount += 1;        //if an R exists, increment the count for 'R' by one.

            }
            else if(s[i]=='L'){         //if an L exists, incremeent the count for 'L' by one
                leftCount += 1;
            }
            if(leftCount == rightCount){ //on the SAME iteration, if left and right are equal (a split!)        
                count+=1;               //increment the count for a string split!
            }
        }
        return count;
    }

};
