class Solution {
public:
    bool halvesAreAlike(string s) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int n=s.size();
        int a=0;
        int b=0;
        for(int i=0;i<n/2;i++){
            
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]      =='o'||s[i]=='u'){
                a++;
            }

        }
        for(int i=n/2;i<n;i++){
             if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]      =='o'||s[i]=='u'){
                b++;
            }
        }
        return a==b;
    }
};