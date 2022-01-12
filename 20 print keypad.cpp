#include<iostream>
using namespace std;
void print_keypad(string s, string ans, string codes[]){
	if(s.size()==0){
		cout<<ans<<" ";
		return;
	}
	char ch=s[0];
	string rem=s.substr(1);
	string code=codes[ch - '0'];
	for(int i=0;i<code.size();i++)
	print_keypad(rem, ans+code[i], codes);
}
int main(){
	string s;
	cin>>s;
	string codes[]={".;","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	print_keypad(s, "", codes);
	return 0;
}
