#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n,m,t;
	cin>>n>>m;
	int a[105];
	for(int i=0;i<n;i++){
		memset(a,-1,sizeof(a));
		for(int j=0;j<n;j++){
			cin>>t;
			if(t>=0 && t<=m) a[j]=t;
		}
		sort(a+1,a+n);
		a[n-1]=-1;
		for(int j=1;j<n;j++){
			if(a[j]!=-1){
				a[j]=-1;
				break;
			}
		}
		int G1=0,cnt=0;
		for(int j=1;j<n;j++){
			if(a[j]!=-1){
				cnt++;
				G1+=a[j];
			} 
		}
		int ans=floor((a[0]+(double)G1/cnt)/2.0+0.5);
		cout<<ans<<endl;
	}
	return 0;
}
