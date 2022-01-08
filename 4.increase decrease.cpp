#include<iostream>
using namespace std;
void inc_dec(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	cout<<n<<endl;
	inc_dec(n-1);
	cout<<n<<endl;
	
}
int main(){
	int n;
	cin>>n;
	inc_dec(n);
	return 0;
}
