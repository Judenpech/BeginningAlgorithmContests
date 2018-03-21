#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
struct Book{
	int f1=0;
	int stime;
	int etime;
}bk[1005];
int main(){
	int n;
	cin>>n;
	int sumTime=0,cnt=0;
	for(int i=0;i<n;){
		int t,h,m;
		char c;
		scanf("%d %c %d:%d",&t,&c,&h,&m);
		if(t==0){
			int pj=floor((double)sumTime/cnt+0.5);
			if(cnt!=0) cout<<cnt<<" "<<pj<<endl;
			else cout<<0<<" "<<0<<endl;
			memset(bk,NULL,sizeof(bk));
			i++;
			sumTime=0;
			cnt=0;
			continue;
		}
		if(c=='S'){
			//if(bk[t].f1==0){
				bk[t].stime=h*60+m;
				bk[t].f1=1;
		//	}
		}else{
			if(bk[t].f1==1){
				bk[t].etime=h*60+m;
				sumTime+=bk[t].etime-bk[t].stime;
				cnt++;
				bk[t].f1=0;
			}
		}
	}
	return 0;
}
