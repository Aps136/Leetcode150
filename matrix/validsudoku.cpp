class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //rule: no repeated digits (1-9) in any row, column or 3x3 sub-box, ignore empty cells
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j]=='.')
                    continue;
                char num = board[i][j];
                if(rows[i].count(num)) return false;
                rows[i].insert(num);
                if(cols[j].count(num)) return false;
                cols[j].insert(num);

                int boxindex = (i/3)* 3+j /3;
                if(boxes[boxindex].count(num)) return false;
                boxes[boxindex].insert(num);
            }
        }return true;

    }
};
