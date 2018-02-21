#include <iostream>
using namespace std;

const int maxn=100000;
int a[maxn]={0};
int main(){
	int n,t,s,max;
	cin>>n;
	while(n--){
		cin>>t>>s;
		a[t]+=s;
	}
	max=0;
	for(int i=1;i<maxn;i++){
		if(a[i]>a[max]) max=i;
	}
	cout<<max<<" "<<a[max]<<endl;
	return 0;
}
