#include <iostream>
#include <algorithm>
using namespace std;
const int maxn=10004;

double b[maxn]={0};
int main(){
	int n,k,m;
	cin>>n>>k>>m;
	int a[10];
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin>>a[j];
		}
		sort(a,a+k);
		for(int j=1;j<k-1;j++){
			b[i]+=a[j];
		}
	}
	sort(b,b+n);
	for(int i=n-m;i<n;i++){
		printf("%.03f",b[i]/(k-2));
		if(i!=n-1) cout<<" ";
	}
	return 0;
}
