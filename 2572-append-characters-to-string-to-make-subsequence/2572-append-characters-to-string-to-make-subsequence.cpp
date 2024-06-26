class Solution {
public:
    int appendCharacters(string s, string t) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        int i=0 ,j=0;
        int n=s.size();
        while(n>0){
            if(s[i]==t[j]){
                j++;
            }
            n--;
            i++;
        }
        
        return (t.size()-j);
    }
};