class Solution {
public:
   vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    bool carry = true;

    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((digits[i] + 1) == 10) {
            digits[i] = 0;

        } else {
            digits[i] += 1;
            carry = false;
            break;
        }
    }
    if (carry) {
        digits.insert(digits.begin(), 1);
    }

    return digits;
}

};
