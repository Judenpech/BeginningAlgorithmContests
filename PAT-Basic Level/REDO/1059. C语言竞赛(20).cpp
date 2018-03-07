#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
const int maxn=10005;
int a[maxn];

int isPrime(int n){
	if(n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	memset(a,0,sizeof(a));
	int n,t;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t;
		if(i==1) a[t]=1;
		else if(isPrime(i)){
			a[t]=2;
		}else a[t]=3;
	}
	int k;
	cin>>k;
	while(k--){
		cin>>t;
		if(a[t]==1) printf("%04d: Mystery Award\n",t);
		else if(a[t]==2) printf("%04d: Minion\n",t);
		else if(a[t]==3) printf("%04d: Chocolate\n",t);
		else if(a[t]==0) printf("%04d: Are you kidding?\n",t);
		else if(a[t]==4) printf("%04d: Checked\n",t);
		if(a[t]!=0) a[t]=4;
	}
	return 0;
}
