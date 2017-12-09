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
	while(cin>>ta>>tb){
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		init(ta,a);init(tb,b);
	for(int i=3;i<=100;i++){
			memset(sum,0,sizeof(sum));
			for(int j=maxn-1;j>=0;j--){
				sum[j]+=a[j]+b[j]+c[j];
				if(sum[j]>9){
					sum[j-1]/=10;
					sum[j]%=10;
				}
			}
			memcpy(a,b,sizeof(b));
			memcpy(b,sum,sizeof(sum));
//			int flag=0;
//for(int i=0;i<maxn;i++){
//		if(b[i]!=0){
//			flag=1;
//			}
//		if(flag){
//			cout<<a[i]<<" "<<b[i]<<endl;
//		}
//	}
	}
	int flag=0;
	for(int i=0;i<maxn;i++){
		if(b[i]!=0){
			flag=1;
			}
		if(flag){
			cout<<b[i];
		}
	}

	return 0;
}
}
