class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0; 
        for (const string& sentence : sentences) { //check each sentence from the vector sentences
        int wordCount = countWordsInSentence(sentence); //once returned, this will set the current string's wordcount
        if(wordCount > max){
            max=wordCount; //update max
        }
    }        
    return max; //will return the maximum num of words in 'single' sentence
       
}
 int countWordsInSentence(const string& sentence) {
    int wordCount = 0; //initially 0
    bool word = false; //initial word is not a word

    for (char c : sentence) { //inspect each character in sentence
        if (isspace(c)) { // look for a space ('  ')
            word = false; //if there is a space, a word has not been detected
        } else {
            if (!word) { //else update the word count until we detect another space 
                wordCount++; 
                word = true;
            }
        }
    }

    return wordCount; //return the count of words in sentence to be evaluated above
}

};
