#include <iostream>
using namespace std;

const int maxn=105;

int main(){
	int n,m,a[maxn];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t;
	while(m--){
		t=a[n-1];
		for(int i=n-1;i>0;i--){
			a[i]=a[i-1];
		}
		a[0]=t;
	}
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<a[i];
	}
	return 0;
}
