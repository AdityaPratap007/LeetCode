class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check rows for duplicates
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(isdigit(board[i][j])){
                    for(int k = j + 1; k < 9; k++){
                        if(isdigit(board[i][k]) && board[i][j] == board[i][k]){
                            return false;
                        }
                    }
                }
            }
        }

        // Check columns for duplicates
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(isdigit(board[j][i])){
                    for(int k = j + 1; k < 9; k++){
                        if(isdigit(board[k][i]) && board[j][i] == board[k][i]){
                            return false;
                        }
                    }
                }
            }
        }

        // Check 3x3 sub-boxes for duplicates
        for(int boxRow = 0; boxRow < 3; boxRow++) {
            for(int boxCol = 0; boxCol < 3; boxCol++) {
                vector<int> arr;
                for(int i = boxRow * 3; i < boxRow * 3 + 3; i++) {
                    for(int j = boxCol * 3; j < boxCol * 3 + 3; j++) {
                        if(isdigit(board[i][j])) {
                            arr.push_back(board[i][j]);
                        }
                    }
                }
                unordered_set<int> op(arr.begin(), arr.end());
                if (arr.size() != op.size()) {
                    return false;
                }
            }
        }

        return true;
    }
};
