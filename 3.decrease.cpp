#include<iostream>
using namespace std;
void decrease(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	cout<<n<<endl;
	decrease(n-1);
	
}
int main(){
	int n;
	cin>>n;
	decrease(n);
	return 0;
}
