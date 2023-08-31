class Solution {
public:
    bool isValid(string s) {
         stack<char> pairs;
        unordered_map<char, char> bracketsMap = { {'(', ')'}, {'[', ']'}, {'{', '}'} };
        
        for(auto c: s){
            //using a map, iterate thru the string and find a bracket 
            if(bracketsMap.find(c) != bracketsMap.end()){
                pairs.push(c); //if not a match add it to the stack
            }
            else{
                if(pairs.empty() || bracketsMap[pairs.top()] != c){
                    //check whether the stack is empty 
                    //OR 
                    //if the particular bracket doesn't match the one on top of the stack:
                    
                    //I will know the string is not valid at this point. 
                    //I return false.
                    return false;
                }
                pairs.pop();//needed to keep cycling

            }
        }
       return pairs.empty();

    }
};
