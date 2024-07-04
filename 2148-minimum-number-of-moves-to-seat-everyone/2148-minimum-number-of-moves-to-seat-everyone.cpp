class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        sort(students.begin(),students.end());
        sort(seats.begin(),seats.end());
        int x=0;
        for(int i=0;i<students.size();i++){
            x+=abs(seats[i]-students[i]);
        }
        return x;
    }
};