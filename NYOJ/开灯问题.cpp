#include <iostream>
#include <cstring>
using namespace std;
int a[1005];
int main(){
	memset(a,-1,sizeof(a));
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		for(int j=i;j<=n;j+=i){
			a[j]*=-1;
		}
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			if(flag) cout<<" ";
			cout<<i;
			flag=1;
		} 
	}
	return 0;
}
