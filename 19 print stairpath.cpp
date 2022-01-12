#include<iostream>
using namespace std;
void print_stairpath(int n, string ans){
	if(n==0){
		cout<<ans<<" ";
		return;
	}
	if(n<0){
		return;
	}
	print_stairpath(n-1, ans+"1");
	print_stairpath(n-2, ans+"2");
	print_stairpath(n-3, ans+"3");
}
int main(){
	int n;
	cin>>n;
	print_stairpath(n, "");
	return 0;
}
