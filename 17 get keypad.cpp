#include<bits/stdc++.h>
using namespace std;
vector<string> get_keypad(string s, string codes[]){
	if(s.size()==0){
		vector<string> base;
		base.push_back("");
		return base;
	}
	char ch=s[0];
	string rem=s.substr(1);
	string target=codes[ch-'0'];
	vector<string> smallans=get_keypad(rem, codes);
	vector<string> ans;
	for(int i=0;i<target.size();i++){
		char x=target[i];
		for(int i=0;i<smallans.size();i++){
			ans.push_back(x+smallans[i]);
		}
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	string codes[]={" ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuvw", "xyz", ",.;"};
	vector<string> v=get_keypad(s, codes);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}
