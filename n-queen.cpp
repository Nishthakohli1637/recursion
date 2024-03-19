#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int>> v, int row, int col, int n){
    for(int i=row-1,j=col;i>=0;i--){
        if(v[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(v[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(v[i][j]==1){
            return false;
        }
    }
    return true;
}
void n_queen(vector<vector<int>> v, int n, int row, string ans){
    if(row==n){
        cout<<ans<<endl;
        return;
    }
    for(int col=0;col<n;col++){
        if(issafe(v, row, col, n)){
            v[row][col] = 1;
            n_queen(v, n, row+1, ans + to_string(row)+"-"+to_string(col)+",");
            v[row][col] = 0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v (n, vector<int> (n));
    n_queen(v, n, 0, "");
    return 0;
}


APPROACH 2
    class Solution {
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n, vector<int> &left_row, vector<int> &upp_diag, vector<int> &low_diag){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(left_row[row]==0 && upp_diag[n-1+col-row]==0 && low_diag[row+col]==0){
                board[row][col]='Q';
                left_row[row]=1;
                upp_diag[n-1+col-row]=1;
                low_diag[row+col]=1;
                solve(col+1, board, ans, n, left_row, upp_diag, low_diag);
                board[row][col]='.';
                left_row[row]=0;
                upp_diag[n-1+col-row]=0;
                low_diag[row+col]=0;

            }
        }
        
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> left_row(n, 0);
        vector<int> upp_diag(2*n-1, 0);
        vector<int> low_diag(2*n-1, 0);
        solve(0, board, ans, n, left_row, upp_diag, low_diag);
        return ans;
    }
};
