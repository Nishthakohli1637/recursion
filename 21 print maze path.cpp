#include<iostream>
using namespace std;
void print_mazepath(int n, int m, int i, int j, string ans){
	if(i==n-1||j==m-1){
		cout<<ans<<" ";
		return;
	}
	if(i<n){
		print_mazepath(n, m, i+1, j, ans+"v");
	}
	if(j<n){
		print_mazepath(n, m, i, j+1, ans+"h");
	}
}
int main(){
	int n, m;
	cin>>n>>m;
	print_mazepath(n, m, 0, 0, "");
	return 0;
}
