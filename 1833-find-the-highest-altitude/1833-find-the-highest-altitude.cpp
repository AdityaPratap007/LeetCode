class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int h=0;
        int m=0;
        for(int i=0;i<gain.size();i++){
            h+=gain[i];
            if (h>m){
                m=h;;
            }
        }
        return m;
    }
};