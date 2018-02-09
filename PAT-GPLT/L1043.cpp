#include <iostream>
#include <cstring>
#include <cmath>
#define maxn 1005
using namespace std;
int main(){
	int n,t,a,b,book[maxn]={0};
	int sh[maxn],sm[maxn];
	char c;
	int cnt,time;
	cin>>n;
	while(n--){
		memset(book,0,sizeof(book));
		memset(sh,0,sizeof(sh));
		memset(sm,0,sizeof(sm));
		cnt=0;
		time=0;
		while(scanf("%d %c %d:%d",&t,&c,&a,&b) && t!=0){
			if(c=='S'){
				book[t]=1;
				sh[t]=a;
				sm[t]=b;
			}else{
				if(book[t]==1){
					book[t]=0;
					cnt++;
					time+=a*60+b-(sh[t]*60+sm[t]);
				}
			}
		}
		if(cnt==0) cout<<"0 0"<<endl;
		else cout<<cnt<<" "<<floor(time/(double)cnt+0.5)<<endl;
	}
	return 0;
}
