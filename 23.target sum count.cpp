#include<bits/stdc++.h>
using namespace std;
int target_sum_set_count(int a[], int n, int idx, int sum, int target, int count){
	if(idx==n){
		if(sum==target){
			count++;
		}
		return count;
	}
	count=target_sum_set_count(a, n, idx+1, sum+a[idx], target, count);
	count=target_sum_set_count(a, n, idx+1, sum, target, count);
}
int main(){
	int a[]={1, 2, 3, 4, 5, 7};
	int n=sizeof(a)/sizeof(a[0]);
	int target;
	cin>>target;
	cout<<target_sum_set_count(a, n, 0, 0, target, 0)<<endl;
}
