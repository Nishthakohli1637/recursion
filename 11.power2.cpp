#include<bits/stdc++.h>
using namespace std;
int  power(int n, int m){
	if(m==0){
		return 0;
	}
	int ans=pow(n, m/2);
	ans=ans*ans;
	if(m%2!=0){
		ans=ans*n;
	}
	return ans;
}
int main(){
	int n, m;
	cin>>n>>m;
	cout<<power(n, m)<<endl;
	return 0;
}
