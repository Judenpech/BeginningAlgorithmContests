#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int b=n/100;
	while(b--) cout<<"B";
	int s=n%100/10;
	while(s--) cout<<"S";
	for(int i=1;i<=n%10;i++) cout<<i;
	return 0;
}
