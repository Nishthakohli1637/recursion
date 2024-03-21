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


APPROACH 2
    class Solution{
    void solve(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, string move, vector<vector<int>> &vis){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
            vis[i+1][j]=1;
            solve(i+1, j, m, n, ans, move+"D", vis);
            vis[i+1][j]=0;
        }
        if(j-1>=0 && !vis[i][j-1] && m[i][j-1]==1){
            vis[i][j-1]=1;
            solve(i, j-1, m, n, ans, move+"L", vis);
            vis[i][j-1]=0;
        }
        if(j+1<n && !vis[i][j+1] && m[i][j+1]==1){
            vis[i][j+1]=1;
            solve(i, j+1, m, n, ans, move+"R", vis);
            vis[i][j+1]=0;
        }
        if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1){
            vis[i-1][j]=1;
            solve(i-1, j, m, n, ans, move+"U", vis);
            vis[i-1][j]=0;
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        if(m[0][0]==1){
            vis[0][0]=1;
            solve(0, 0, m, n, ans, "", vis);
        }
        return ans;
    }
};
