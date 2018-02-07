#include <iostream>
#define maxn 100005
#include <string.h>
using namespace std;
int main(){
	int n,k,m,t,a[maxn];
	memset(a,0,sizeof(a));
	cin>>n;
	while(n--){
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>t;
			a[t]++;
		}
		if(k==1) a[t]--;
	}
	int flag=0;
	cin>>m;
	while(m--){
		cin>>t;
		if(a[t]==0){
			if(flag){
				cout<<" ";
			}
			printf("%05d",t); //注意ID的前置0不能漏掉
			a[t]=1;
			flag=1;
		}
	}
	if(!flag) cout<<"No one is handsome";
	return 0;
}
