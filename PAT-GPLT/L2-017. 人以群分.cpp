#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=100005;
int a[maxn];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int out=0,in=0,diff;
	for(int i=0;i<n/2;i++) in+=a[i];
	if(n%2==1){
		for(int i=n-n/2-1;i<n;i++) out+=a[i];
	}	
	else{
		for(int i=n-n/2;i<n;i++) out+=a[i];
	} 
	diff=out-in;
	printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d",n-n/2,n/2,diff);
	return 0;
}
