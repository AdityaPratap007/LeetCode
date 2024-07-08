class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int r=0;
        for(int i=0;i<sentences.size();i++){
            int len=0;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    len++;
                }
                r=max(r,len);
            }
        }
        return r+1;
    }
};