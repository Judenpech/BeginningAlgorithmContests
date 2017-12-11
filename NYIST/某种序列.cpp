#include <iostream>
#include <cstring>
#define maxn 1005
using namespace std;
int a[maxn],b[maxn],c[maxn],sum[maxn];

void init(int x,int a[maxn]){
	int i=maxn-1;
	while(x){
		a[i--]=x%10;
		x/=10;
	}
}
int main(){
	int ta,tb,tc;
	while(cin>>ta>>tb>>tc){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		init(ta,a);init(tb,b);init(tc,c);
		for(int i=3;i<100;i++){
			memset(sum,0,sizeof(sum));
			for(int j=maxn-1;j>=0;j--){
				sum[j]+=(a[j]+b[j]+c[j]);
				if(sum[j]>9){
					sum[j-1]=sum[j]/10;
					sum[j]=sum[j]%10;
				}
			}
			memcpy(a,b,sizeof(b));			
			memcpy(b,c,sizeof(c));
			memcpy(c,sum,sizeof(sum));
		}
		int flag=0;
		for(int i=0;i<maxn;i++){
			if(sum[i]!=0){
				flag=1;
			}
			if(flag){
				cout<<sum[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
