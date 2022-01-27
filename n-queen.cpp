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
