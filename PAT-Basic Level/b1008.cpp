#include <iostream>
using namespace std;

int main(){
	int n,m,num[101];
	cin>>n>>m;
	m%=n; //注意m>n的情况 
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=n-m;i<2*n-m;i++){
		cout<<num[i%n];
		if(i%n!=n-m-1) cout<<" ";
	}
	return 0;
}
