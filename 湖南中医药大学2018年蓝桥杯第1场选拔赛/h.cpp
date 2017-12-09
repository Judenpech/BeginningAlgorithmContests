//h
#include <iostream>
#include <cmath>
#define maxn 65536
using namespace std;
int a[maxn];
bool isPrime(int a){
	if(a==1) return false;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int main(){
	int j;
	for(int i=2,j=0;i<=maxn;i++){
		if(isPrime(i)){
			a[j++]=i;
		} 
	}
	int len=j;
	int k,x;
	cin>>k;
	while(k--){
		cin>>x;
		for(int i=0;a[i]<=x;){
			if(x==1){	
				break;
			} 
			if(x%a[i]==0){
				cout<<a[i];
				x/=a[i];
				if(x!=1) cout<<"*";
			}
			else{
				i++;
			}
		}
		cout<<endl;

		
	}
	return 0;
}
