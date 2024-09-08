class Solution {
public:
    int hIndex(vector<int>& cit) {
        sort(cit.begin(),cit.end(),greater<int>());
        int j=0;
        for(int i=0;i<cit.size();i++){
            if(cit[i]>i) j++;
        }
        return j;
        
    }
};