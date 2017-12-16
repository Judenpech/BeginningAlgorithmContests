#include <iostream>
using namespace std;
int main(){
	int n,k,d[1000]={0};
	cin>>n>>k;
	for(int i=2;i<=k;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0){
				if(d[j]==0) d[j]=1;
				else d[j]=0;
			} 
		}
	}
	for(int i=1;i<=n;i++){
		if(d[i]==0){
			if(i!=1) cout<<" ";
			cout<<i;
			//if(i!=n) cout<<" ";
		} 
	}
	return 0;
}
