class Solution {
public:
    string defangIPaddr(string address) {
            string check;
            int size=address.size();
        
            // cout<<size;
            for(int i=0; i<size; i++){
                if(address[i]=='.'){
                    check+="[.]";
                    cout<<"[.]";
                    continue;
                }
                check+=address[i];
                cout<<address[i];
            }
          
              return check;
    }

};
