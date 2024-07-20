class Solution {
public:
    bool findAns(int row,int col,vector<vector<char>>& board, string word,int index){
        if(index==word.size()){
            return true;
        }
        if(row>board.size()-1 || row<0 || col<0 || col>board[0].size()-1 || board[row][col]!=word[index])
        return false;
        char ch = board[row][col];
        board[row][col]='#';
        bool op1 = findAns(row,col+1,board,word,index+1);
        bool op2 = findAns(row+1,col,board,word,index+1);
        bool op3 = findAns(row,col-1,board,word,index+1);
        bool op4 = findAns(row-1,col,board,word,index+1);
        board[row][col]=ch;
        return op1||op2||op3||op4;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(findAns(i,j,board,word,0)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};