#include <iostream>

using namespace std;

int main(){
	long long a[10],b[10],c[10];
	int n,flag[10]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
		if(a[i]+b[i]>c[i]) flag[i]=1;
	}
	for(int i=0;i<n;i++){
		cout<<"Case #"<<(i+1)<<": ";
		if(flag[i]) cout<<"true"<<endl;
		else cout<<"false"<<endl;
	}
	return 0;
}
