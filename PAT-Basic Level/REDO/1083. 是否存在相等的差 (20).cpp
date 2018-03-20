#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int a[10005];
int main(){
	int n,t;
	cin>>n;
	memset(a,0,sizeof(int)*n);
	for(int i=0;i<n;i++){
		cin>>t;
		a[abs(t-i-1)]++;
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]>1){
			printf("%d %d\n",i,a[i]);
		}
	}
	return 0;
}
