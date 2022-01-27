#include<bits/stdc++.h>
using namespace std;
void combination(vector<vector<int>> v, int n, int row, string ans) {
    if(row == n) {
        cout<<ans<<endl;
        return;
    }
    for(int col=0;col<n;col++) {
        v[row][col] = 1;
        combination(v, n, row+1, ans + to_string(row) + "-" + to_string(col) + ",");
        v[row][col] = 0;
    }    
}
int main() {
    int n;
    cin>>n;
    int a[n][n];
    vector<vector<int>> v(n, vector<int> (n));
    combination(v, n, 0, "");
    return 0;
}
