#include <iostream>
#include <cstring>
#define maxn 100005
using namespace std;
int a[maxn];
int main(){
	memset(a,0,sizeof(a));
	int n,q,r,flag=1;
	cin>>n;
	for(int i=1;i<=100000;i++){
		q=i;
		do{
			r=q%10;
			q=q/10;
			a[i]=a[i]+r;
		}while(q!=0);
		a[i]+=i;
		if(a[i]==n){
			cout<<i<<endl;
			flag=0;
			break;
		}
	}
	if(flag) cout<<'0'<<endl;
	return 0;
}
