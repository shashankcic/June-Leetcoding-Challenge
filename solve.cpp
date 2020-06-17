class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()==0){ 
            return;
        }
        for(int c=0;c<board[0].size();c++){
            if(board[0][c]=='O'){ 
                fillWithU(board,0,c);
            }
            if(board[board.size()-1][c]=='O'){ 
                fillWithU(board,board.size()-1,c);
            }
        }
        for(int r=0;r<board.size();r++){
            if(board[r][0]=='O'){ 
                fillWithU(board,r,0);
            }
            if(board[r][board[0].size()-1]=='O'){ 
                fillWithU(board,r,board[0].size()-1); 
            }
        }
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[0].size();c++){
                if(board[r][c]=='O'){ 
                    board[r][c]='X';
                }
                else if(board[r][c]=='U'){ 
                    board[r][c] = 'O';
                }
            }
        }
    }
    void fillWithU(vector<vector<char>> &board, int r, int c){
        if(r<0 || c<0 || r>=board.size() || c>=board[0].size() || board[r][c]=='X' || board[r][c]=='U'){
            return;
        }
        board[r][c]='U';
        fillWithU(board,r+1,c);
        fillWithU(board,r,c+1);
        fillWithU(board,r-1,c);
        fillWithU(board,r,c-1);
    }
};
