class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool row[9][9]={false},column[9][9]={false},box[9][9]={false};
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                int key=(i/3)+(j/3)*3;
                int num=board[i][j]-'1';
                if(row[i][num]||column[j][num]||box[key][num])return false;
                row[i][num]=column[j][num]=box[key][num]=true;
            }
        }
        return true;
    }
};
