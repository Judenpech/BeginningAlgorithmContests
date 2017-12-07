#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int a){
	if(a==1) return false;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int main(){
	int m,n,t,sum=0;
	cin>>m;
	while(m--){
		sum=0;
		cin>>n;
		while(n--){
			cin>>t;
			if(isPrime(t)) sum+=t;
		}
		cout<<sum<<endl;
	}
}
