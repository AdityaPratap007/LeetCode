class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int totalFuel = 0, currentFuel = 0, startStation = 0;
        
        // for (int i = 0; i < gas.size(); i++) {
        //     totalFuel += gas[i] - cost[i];
        //     currentFuel += gas[i] - cost[i];
            
        //     // If at any point, current fuel is negative, reset the start station
        //     // to the next one and reset currentFuel.
        //     if (currentFuel < 0) {
        //         startStation = i + 1;
        //         currentFuel = 0;
        //     }
        // }
        
        // // If total fuel is negative, it's impossible to complete the circuit
        // return totalFuel >= 0 ? startStation : -1;
        int total=0,current=0,st=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i]-cost[i];
            current+=gas[i]-cost[i];
            if(current<0){
                current=0;
                st=i+1;
            }
        }
        return total>=0?st:-1;
    }
};
