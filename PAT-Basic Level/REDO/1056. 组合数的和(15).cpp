#include <iostream>
using namespace std;
int main(){
	int n,a[15],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j) continue;
			sum+=a[i]*10+a[j];
		}
	}
	cout<<sum<<endl;
	return 0;
}
