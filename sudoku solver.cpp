#include<bits/stdc++.h>
using namespace std;
#define n 9
bool issafe(vector<vector<int>> v, int val, int row, int col){
    for(int i=0;i<n;i++){
        if(v[i][col]==val){
            return false;
        }
    }
    for(int j=0;j<n;j++){
        if(v[row][j]==val){
            return false;
        }
    }
    int row_start=3*(row/3);
    int col_start=3*(col/3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(v[i+row_start][j+col_start]==val){
                return false;
            }
        }
    }
    return true;
}
bool iscomplete(vector<vector<int>> v){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==0){
                return false;
            }
        }
    }
    return true;
}
void display_sudoku(vector<vector<int>> v){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void sudoku_solver(vector<vector<int>> v, int i, int j){
    if(iscomplete(v)){
        display_sudoku(v);
        return;
    }
    if(j==n-1){
        i++;
        j=0;
    }
    else{
        j++;
    }
    if(v[i][j]!=0){
        sudoku_solver(v, i, j);
    }
    else{
        for(int val=1;val<=n;val++){
            if(issafe(v, val, i, j)){
                v[i][j]=val;
                sudoku_solver(v, i, j);
                v[i][j]=0;
            }
        }
    }
}
int main(){
    vector<vector<int>> v={
        {6,5,0,8,7,3,0,9,0},
        {0,0,3,2,5,0,0,0,8},
        {9,8,0,1,0,4,3,5,7},
        {1,0,5,0,0,0,0,0,0},
        {4,0,0,0,0,0,0,0,2},
        {0,0,0,0,0,0,5,0,3},
        {5,7,8,3,0,1,0,2,6},
        {2,0,0,0,4,8,9,0,0},
        {0,9,0,6,2,5,0,8,1}
    };
    sudoku_solver(v, 0, 0);
    return 0;
}


APPROACH 2
    class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>> &board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(board, i, j, c)){
                            board[i][j]=c;
                        
                        if(solve(board)==true){
                            return true;
                        }
                        else{
                            board[i][j]='.';
                        }
                    }
                }
                return false;
            }  
        }
        }
        return true;
    }
    bool isvalid(vector<vector<char>> &board, int row, int col, char c){
        for(int i=0;i<9;i++){
            if(board[i][col]==c){
                return false;
            }
            if(board[row][i]==c){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c){
                return false;
            }
            
        }
        return true;
    }
};
