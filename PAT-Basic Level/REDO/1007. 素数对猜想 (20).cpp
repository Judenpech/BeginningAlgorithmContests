#include <iostream>
#include <cmath>
using namespace std;

const int maxn=10005;
int p[maxn];

int isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n,cnt=0;
	cin>>n;
	for(int i=2,j=0;i<=n;i++){
		if(isPrime(i)){
			p[j++]=i;
			if(j!=1 && p[j-1]-p[j-2]==2) cnt++;
		} 
	}
	cout<<cnt<<endl;
	return 0;
}
