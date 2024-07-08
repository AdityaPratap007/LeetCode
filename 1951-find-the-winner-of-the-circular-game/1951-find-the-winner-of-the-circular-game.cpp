class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> a;
        for(int i=1;i<=n;i++){
            a.push(i);
        }
        
        while(a.size()!=1){
           int x=k;
           while(x>1){
            int r=a.front();
            a.pop();
            a.push(r);
            x--;
           }
            a.pop();
        }
        return a.front();
    }
};