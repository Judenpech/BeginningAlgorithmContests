#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,a[10005];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1;i<n;i++){
		a[i]=(a[i-1]+a[i])/2;
	}
	cout<<a[n-1]<<endl;
	return 0;
}
