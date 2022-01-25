#include<bits/stdc++.h>
using namespace std;
vector<string> get_permutation(string s){
	if(s.size()==0){
		vector<string> base;
		base.push_back("");
		return base;
	}
	vector<string> ans;
	for(int i=0;i<s.size();i++){
		char ch=s[i];
		string rem=s.substr(0,i)+s.substr(i+1);
		vector<string> smallans=get_permutation(rem);
		for(int i=0;i<smallans.size();i++){
		
		ans.push_back(ch+smallans[i]);
	}
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	vector<string> v=get_permutation(s);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
