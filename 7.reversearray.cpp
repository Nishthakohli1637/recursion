#include<iostream>
using namespace std;
int rev_array(int a[], int n){
	if(n==1){
	return a[0];
	}
	cout<<a[n-1]<<endl;
	rev_array(a, n-1);
}
int main(){
	int a[]={1, 2, 3, 56, 78, 98, 45, 2};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<rev_array(a, n)<<endl;
	return 0;
}
