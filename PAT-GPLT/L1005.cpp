#include <iostream>
#define maxn 1005
using namespace std;
int main(){
	int n,m,t,b[maxn],c[maxn];
	string a[maxn];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
	}
	cin>>m;
	while(m--){
		cin>>t;
		for(int i=0;i<n;i++){
			if(b[i]==t) cout<<a[i]<<" "<<c[i]<<endl;
		}
	}
	return 0;
}
