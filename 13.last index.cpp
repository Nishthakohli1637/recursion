#include<iostream>
using namespace std;
int last_index(int a[], int n, int key, int idx){
	if(idx==n){
		return -1;
	}
	if(a[idx]==key){
		return idx;
	}
	return last_index(a, n, key, idx-1);
}

int main(){
	int a[]={1, 34, 67, 98, 7, 7, 8, 7};
	int n=sizeof(a)/sizeof(a[0]);
	int key;
	cin>>key;
	cout<<last_index(a, n, key, n-1)<<endl;
	return 0;
}
