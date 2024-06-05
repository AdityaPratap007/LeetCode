class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        vector<int> comm(26),curr(26);
        int n=words.size();
        vector<string> result;
        for(char &ch: words[0]){
            comm[ch-'a']++;
        }
        for(int i=0;i<n;i++){
            fill(curr.begin(),curr.end(),0);
            for(char &ch:words[i]){
                curr[ch-'a']++;
            }
            for(int j=0;j<26;j++){
                comm[j]=std::min(comm[j],curr[j]);
            }
        }
        for(int k=0;k<26;k++){
            for(int m=0;m<comm[k];m++){
                result.push_back(string(1,k+'a'));
            }
        }
        return result;        
    }
};