#include<iostream>
using namespace std;
void print_permutations(string s, string ans){
	if(s.size()==0){
		cout<<ans<<" ";
		return;
	}
	for(int i=0;i<s.size();i++){
		char ch=s[i];
	string rem=s.substr(0,i)+s.substr(i+1);
	print_permutations(rem, ans+ch);
	}
}
int main(){
	string s;
	cin>>s;
	print_permutations(s, "");
	return 0;
}
