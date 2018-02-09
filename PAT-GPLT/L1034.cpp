#include <iostream>
#include <cstring>
#define maxn 1005
using namespace std;
int main(){
	int n,m,t,a[maxn];
	memset(a,0,sizeof(a));
	cin>>n;
	while(n--){
		cin>>m;
		while(m--){
			cin>>t;
			a[t]++;
		}
	}
	int indx=0,max=a[0];
	for(int i=1;i<maxn;i++){
		if(a[i]>=max){
			max=a[i];
			indx=i;
		} 
	}
	cout<<indx<<" "<<max<<endl;
	return 0;
}
