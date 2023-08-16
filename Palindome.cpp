class Solution {
public:
    bool isPalindrome(string s) {
    int k=0;
    int i=s.size()-1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

            // if(s[i]<='a' && s[i]>= 'z')
    //  s.erase( std::remove_if(s.begin(), s.end(), ::ispunct), s.end());

    while(i>k){
        if (!isalnum(s[k])) {
            k++;
            continue;
        }
        if(!isalnum(s[i])){
            i--;
            continue;
        }
        if(s[i]!=s[k]){
            return false;
        }
              i--;
              k++;
    }
    
    return true;
    }
};
