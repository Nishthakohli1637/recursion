#include<iostream>
using namespace std;
int first_index(int a[], int n, int key, int idx){
	if(idx==n){
		return -1;
	}
	if(a[idx]==key){
		return idx;
	}
	return first_index(a, n, key, idx+1);
}

int main(){
	int a[]={1, 34, 67, 98, 7, 7, 8, 7};
	int n=sizeof(a)/sizeof(a[0]);
	int key;
	cin>>key;
	cout<<first_index(a, n, key, 0)<<endl;
	return 0;
}
