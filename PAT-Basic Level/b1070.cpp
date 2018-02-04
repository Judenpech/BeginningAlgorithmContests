#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,s[10000],sum;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	sum=s[0];
	for(int i=1;i<n;i++){
		sum=(sum+s[i])/2;
	}
	cout<<sum;
	return 0;
}
