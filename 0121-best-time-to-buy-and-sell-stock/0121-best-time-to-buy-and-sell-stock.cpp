class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max1=-100;
        for( int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++)
            {
                max1=max(max1,prices[j]-prices[i]);
            }
        }
        return max1>0?max1:0;
    }
};