class Solution {
public:
    int countDigits(int num) {
        string str = to_string(num); //parse as a string
        int count = 0;              //initialize count
        int interest = 0;           //initialize number of interest

        for(int i=0; i< str.size(); i++){
            interest = str[i] - 48;       //as we parse the string, we extract our number of 'interest'
            if( num % interest == 0){     //if the number of interest is divisable, increment the count
                count +=1;
            }
        }
     return count;   
    }
};
