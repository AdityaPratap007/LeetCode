class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j=0,k=0,i=0;
        vector<char> s;
        while(j<word1.size() && k<word2.size()){
            s.push_back(word1[j]);
            j++;
            s.push_back(word2[k]);
            k++;
        }
        while(j<word1.size()){
            s.push_back(word1[j++]);
        }
        while(k<word2.size()) s.push_back(word2[k++]);
        string str(s.begin(), s.end());
        return str;
    }
};