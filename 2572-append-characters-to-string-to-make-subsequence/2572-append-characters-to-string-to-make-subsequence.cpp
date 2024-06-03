class Solution {
public:
    int appendCharacters(string s, string t) {
        int m=0;
        
        int i=0 ,j=0;
        int n=s.size();
        while(n>0){
            if(s[i]==t[j]){
                j++;
                m++;
            }
            n--;
            i++;
        }
        
        return (t.size()-m);
    }
};