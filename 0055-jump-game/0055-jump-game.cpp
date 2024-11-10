class Solution {
public:
    bool canJump(vector<int>& ns) {
        int n=ns.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(j<i) return false;
            j=max(j,i+ns[i]);
        }
        return true;
    }
};