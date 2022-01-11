#include<bits/stdc++.h>
using namespace std;
vector<string> get_sequence(string s){
	if(s.size()==0){
		vector<string> base;
		base.push_back("");
		return base;
	}
	char ch=s[0];
	string rem=s.substr(1);
	vector<string> subans=get_sequence(rem);
	vector<string> ans;
	for(int i=0;i<subans.size();i++){
		string add=ch+subans[i];
		ans.push_back(add);
		ans.push_back(subans[i]+"");
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	vector<string> v=get_sequence(s);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
