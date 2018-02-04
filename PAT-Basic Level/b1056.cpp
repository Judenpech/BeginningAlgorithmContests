#include <iostream>
using namespace std;

int main(){
	int n,num[10],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	int tmp;
	for(int i=0;i<n;i++){
		tmp=num[i];
		for(int j=0;j<n;j++){
			if(num[j]==tmp) continue;  
			sum=sum+tmp*10+num[j];
		}
	}
	cout<<sum;
	return 0;
}
