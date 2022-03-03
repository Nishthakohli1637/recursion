#include<bits/stdc++.h>
using namespace std;
vector<int> gr(int a[], int n){
	stack<int> s;
	vector<int> v;
	for(int i=(n-1);i>=0;i--){
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
			if(!s.empty()){
				v.push_back(s.top());
			}
		
		else{
			v.push_back(-1);
		}
		
		}
		s.push(a[i]);
	}
	reverse(v.begin(), v.end());
	return v;
}
int main(){
	int n, a[25];
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
}
vector<int> v=gr(a, n);{
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
}
