#include<iostream>
using namespace std;
void print_subsequence(string s, string psf){
	if(s.size()==0){
		cout<<psf<<" ";
		return;
	}
	char ch=s[0];
	string rem=s.substr(1);
	print_subsequence(rem, psf+"");
	print_subsequence(rem, psf+ch);
}
int main(){
	string s;
	cin>>s;
	print_subsequence(s, "");
	return 0;
}
