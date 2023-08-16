class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count =0;
        bool sign = false;
        for (const string& operation : operations) {
            int counter = checker(operation);
            count+=counter;
        }
        return count/2;
    }
    int checker(const string & check){
        int count = 0;
        for (char c : check){
            if( c == '+'){
                count+=1;
            }
            if(c == '-'){
                count -=1;
            }
            // cout << c << endl;
            // cout << count <<endl;
        }
        // cout<<count<<endl;
  return count;

    }
};
