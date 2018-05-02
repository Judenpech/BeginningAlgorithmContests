#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n && n!=0){
		int t=n,m=0;
		while(t!=0){
			m=(t%10)*(t%10)*(t%10)+m;
			t/=10;
		}
		if(m==n) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
