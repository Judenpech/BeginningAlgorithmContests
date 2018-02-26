#include <iostream>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i+=2){
			if(i!=1) cout<<" ";
			cout<<i;
		} 
		cout<<endl;
		for(int i=2;i<=n;i+=2){
			if(i!=2) cout<<" ";
			cout<<i;
		} 
		cout<<endl;
	}
	return 0;
}
