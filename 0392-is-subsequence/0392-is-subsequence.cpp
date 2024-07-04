class Solution {
public:
    bool isSubsequence(string s, string t) {
        // Edge case: if s is empty, it is always a subsequence of t
        if (s.empty()) return true;
        
        // Edge case: if t is empty and s is not empty, s cannot be a subsequence of t
        // if (t.empty()) return false;
        
        int i = 0, j = 0;
        while (j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            if (i >= s.size()) return true;
            j++;
        }
        return i >= s.size();
    }
};
