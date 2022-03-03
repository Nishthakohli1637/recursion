#include<bits/stdc++.h>
using namespace std;
vector<int> prefix(string s){
	int i=0;
	int j=1;
	int n=s.size();
	vector<int> pie(n);
	while(j<n){
		if(s[i]==s[j]){
			pie[j]=i+1;
			j++;
			i++;
		}
		else if(i==0){
			pie[j]=0;
			j++;
		}
		else{
			i=pie[i-1];
		}
	}
	return pie;
}
int main(){
	string s="abcdaabcd";
	vector<int> pie=prefix(s);
	for(int i=0;i<pie.size();i++){
		cout<<pie[i]<<endl;
	}
}
