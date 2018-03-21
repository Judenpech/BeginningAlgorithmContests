#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
const int maxn=1005;
int a[maxn]={0},b[maxn];
int main(){
	int x,cnt;
	cin>>x;
	a[0]=1;
	for(int i=0;i<maxn;i++){
		b[i]=a[i]/x;
		a[i+1]=(a[i]%x)*10+1;
		if(a[i]%x==0){
			cnt=i+1;
			break;
		}
	}
	int flag=0;
	for(int i=0;i<cnt;i++){
		if(b[i]!=0) flag=1;
		if(flag) cout<<b[i];
	}
	cout<<" "<<cnt;
	return 0;
}
