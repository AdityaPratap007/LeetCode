class Solution {
public:
    bool isAnagram(string s, string t) { 
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        unordered_map<char,int> map;
        for(int i=0;i<n;i++){
            map[s[i]]++;
            map[t[i]]--;
        }
        for(auto i:map){
        if (i.second) return false;
        }
        return true;
    }
};