#include<bits/stdc++.h>
using namespace std;
void display_path(vector<vector<int>> v, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void maze_path(vector<vector<int>> v, int n, int i, int j, vector<vector<int>> solution){
    if(i<0 || j<0 || i>=n || j>=n || v[i][j]==0 || solution[i][j]==1){
        return;
    }
    if(i==n-1 && j==n-1){
        solution[i][j]=1;
        display_path(solution, n);
        solution[i][j]=0;
        return;
    }
    solution[i][j]=1;
    maze_path(v, n, i+1, j, solution);
    maze_path(v, n, i, j+1, solution);
    maze_path(v, n, i-1, j, solution);
    maze_path(v, n, i, j-1, solution);
}
int main(){
    vector<vector<int>> v={
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 1},
        {0, 1, 1, 1},
    };
    int n=4;
    vector<vector<int>> solution(n, vector<int> (n));
    maze_path(v, n, 0, 0, solution);
    return 0;
}
