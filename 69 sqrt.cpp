class Solution {
    public int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;  // Return x if it is 0 or 1
        }

        int left = 1;
        int right = x;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (mid == x / mid) {
                return mid;  // Return mid if it is the integer square root
            } else if (mid < x / mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;  // Return right as the integer square root approximation
    }
}

