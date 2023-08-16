class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int max;
        for(int i=0; i< s.size(); i++){
            if(s[i]!=' '){
                count+=1;
                max=count;
            }
            if(s[i]==' '){
                
                count=0;
            }
    
        }
        return max;
    }
};
