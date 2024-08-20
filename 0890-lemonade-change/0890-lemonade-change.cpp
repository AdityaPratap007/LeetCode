class Solution {  
public:  
    bool lemonadeChange(vector<int>& bills) {  
        int five = 0;  // Counter for $5 bills  
        int ten = 0;   // Counter for $10 bills  
        
        for (int i = 0; i < bills.size(); i++) {  
            if (bills[i] == 5) {  
                five++;  // Accept $5 bill  
            } else if (bills[i] == 10) {  
                if (five > 0) {  
                    five--;  // Give $5 back  
                    ten++;    // Accept $10 bill  
                } else {  
                    return false;  // Can't provide change  
                }  
            } else {  // bills[i] == 20  
                if (ten > 0 && five > 0) {  
                    ten--;  // Give one $10 bill and one $5 bill back  
                    five--;  
                } else if (five >= 3) {  
                    five -= 3;  // Give three $5 bills back  
                } else {  
                    return false;  // Can't provide change  
                }  
            }  
        }  
        
        return true;  // Successfully handled all transactions  
    }  
};