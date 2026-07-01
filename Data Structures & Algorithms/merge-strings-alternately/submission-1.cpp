class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        int w1 = 0 ;
        int w2 = 0 ;
        while(w1 < word1.length() || w2 < word2.length()){
            if(w1 < word1.length()){
                word3 += word1[w1];
                w1++;
            }
            if(w2 < word2.length()){
                word3 += word2[w2];
                w2++;
            }
        }
        return word3;
    }
};