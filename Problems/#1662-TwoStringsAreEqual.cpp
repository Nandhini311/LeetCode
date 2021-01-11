//Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.
//A string is represented by an array if the array elements concatenated in order forms the string.

 

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        string s1,s2;
        for(int i = 0;i<len1;i++)
        {
            s1+=word1[i];
        }
        for(int i=0;i<len2;i++)
        {
            s2+=word2[i];
        }
         return s1==s2; 
    }
    
};
