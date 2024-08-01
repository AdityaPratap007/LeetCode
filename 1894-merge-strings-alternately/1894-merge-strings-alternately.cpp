class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int j = 0, k = 0;
        string s;
        while (j < word1.size() || k < word2.size()) {
            if (j < word1.size()) {
                s += word1[j++];
            }
            if (k < word2.size()) {
                s += word2[k++];
            }
        }
        return s;
    }
};
