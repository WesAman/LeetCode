class Solution {
public:
bool canConstruct(string s, int k) {
    int frequency[26] = {0};  // Array to store the frequencies of characters in alphabet
//In order to form a palindrome, a string can have MAXIMUM one character with an odd frequency. 
//All other characters must occur an even number of times.
// This is because a palindrome has the same characters mirrored from its center


    // Count the frequency of each character in string s
    for (char ch : s) {
        frequency[ch - 'a']++;
    }

    int countOdd = 0;  // Counter for odd frequencies

    // Iterate over the frequency array
    for (int i = 0; i < 26; i++) {
        if (frequency[i] % 2 != 0) {
            countOdd++;  // Increment the counter for odd frequencies
        }
    }

    // Check if it is possible to construct the string based on the conditions
    if (k >= countOdd && s.length() >= k) {
        return true;  
        // Return true if there are enough odd frequencies and the string length is at least k
        //it indicates that there are enough characters available to form pairs 
    } else {
        return false; 
        //Return false as it means there are more characters that cant be paired with another character of same type
    }
}
};
