#include<bits/stdc++.h>
using namespace std;
vector<int> gl(int a[], int n){
	stack<int> s;
	vector<int> v;
	for(int i=0;i<n;i++){
		if(s.empty()){
			v.push_back(-1);
		}
		else if(!s.empty() && s.top()>a[i]){
			v.push_back(s.top());
		}
		else if(!s.empty() && s.top()<a[i]){
			while(!s.empty() && s.top()<=a[i]){
				s.pop();
			}
			if(s.empty()){
				v.push_back(-1);
			}
			else{
				v.push_back(s.top());
			}
		}
		s.push(a[i]);
	}
	return v;
}
int main(){
	int n, a[25];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> v=gl(a, n);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
