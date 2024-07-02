class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int n=op.size();
        int r=0,i=0;
        while(n){
            if( op[i]=="++X") r++;
            if( op[i]=="X++") r++;
            if( op[i]=="--X") r--;
            if( op[i]=="X--") r--;
            n--;
            i++;
        }
        return r;
    }
};