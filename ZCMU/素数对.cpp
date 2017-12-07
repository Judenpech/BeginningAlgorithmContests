#include <iostream>
#include <cmath>
#include <cstring>
#define maxn 32800
int arr[maxn];
using namespace std;

bool isPrime(int a){
	if(a==1) return false;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
int main(){
	int n,cnt;
	memset(arr,0,sizeof(arr));
	for(int i=2;i<32768;i++){
		if(isPrime(i)) arr[i]=1;
	}
	while(cin>>n && n!=0){
		cnt=0;
		for(int i=2;i<=n/2;i++){
			if(arr[i]==1 && arr[n-i]==1) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
