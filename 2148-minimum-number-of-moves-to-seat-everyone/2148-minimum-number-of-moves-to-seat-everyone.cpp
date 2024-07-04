class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        
        sort(students.begin(),students.end());
        sort(seats.begin(),seats.end());
        int x=0;
        for(int i=0;i<students.size();i++){
            x+=abs(seats[i]-students[i]);
        }
        return x;
    }
};