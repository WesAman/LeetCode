class Solution {
public:
    int climbStairs(int n) { // looks like fibbonacci (kind of)
        if(n <= 2){
        return n;
        }
        int count1=1;
        int count2=2;
        int possibilities;
        for(int i = 3; i <= n; i++){
            possibilities = count1+count2;
            count1=count2;
            count2=possibilities;
        }       
        return possibilities;

    }
};
