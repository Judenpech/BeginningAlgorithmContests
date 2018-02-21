#include <iostream>
using namespace std;
int main(){
	int n,k,t,a[101]={0};
	cin>>n;
	while(n--){
		cin>>t;
		a[t]++;
	}
	cin>>k;
	while(k--){
		cin>>t;
		cout<<a[t];
		if(k!=0) cout<<" ";
	}
	return 0;
}
