#include <iostream>
#include <cmath>
using namespace std;
int isPrime(int n){
	if(n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int m,n;
	cin>>m>>n;
	for(int i=2,j=1,k=1;k<=n;i++){
		if(isPrime(i)){
			if(k>=m && k<=n){
				cout<<i;
				if(j++!=10 && k!=n) cout<<" ";
				else{
					cout<<endl;
					j=1;
				}
			}
			k++;
		} 
	}
	return 0;
}
