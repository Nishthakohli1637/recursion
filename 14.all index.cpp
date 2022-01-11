#include<bits/stdc++.h>
using namespace std;
vector<int> all_index(int a[], int n, int key, int idx, int count){
	if(idx==n){
		vector<int> base(count);
		return base;
	}
	vector<int> ans;
	if(a[idx]==key){
		ans=all_index(a, n, key, idx+1, count+1);
		ans[count]=idx;
	}
	else{
		ans=all_index(a, n, key, idx+1, count);
	}
	return ans;
}
int main()
{
	int a[]={1, 1, 2, 45, 67, 1, 89, 1};
	int n=sizeof(a)/sizeof(a[0]);
	int key;
	cin>>key;
	vector<int> v=all_index(a, n, key, 0, 0);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
