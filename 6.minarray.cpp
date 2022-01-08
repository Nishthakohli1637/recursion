#include<iostream>
using namespace std;
int min_array(int a[], int n){
	if(n==1){
	return a[0];
	}
	int ans1=min_array(a, n-1);
	int ans2=a[n-1];
	return min(ans1, ans2);
}
int main(){
	int a[]={1, 2, 3, 56, 78, 98, 45, 2};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<min_array(a, n)<<endl;
	return 0;
}
