#include<iostream>
using namespace std;
void array(int a[], int n){
	if(n==1){
		cout<<a[0]<<endl;
		return;
	}
	array(a, n-1);
	cout<<a[n-1]<<endl;
}
int main(){
	int a[]={1, 2, 3, 56, 78, 98, 2};
	int n=sizeof(a)/sizeof(a[0]);
	array(a, n);
	return 0;
}
