class Solution {
public:
    int numWaterBottles(int nB, int nE) {
        int c=0;
        int rem=0;
        while(nB>0){
            c+=nB;
            nB=nB+rem;
            rem=nB%nE;
            nB/=nE;
        }
        return c;
    }
};