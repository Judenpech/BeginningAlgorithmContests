#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int isPrime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b && i<9989899;i++){
		string stri="";
		int t=i;
		while(t!=0){
			stri=char((t%10)+48)+stri;
			t/=10;
		}
		int flag=1;
		for(int j=0,k=stri.length()-1;j<stri.length();j++,k--){
			if(stri[j]!=stri[k]){
				flag=0;
				break;
			}
		}
		if(flag){
			if(isPrime(i)){
				cout<<i<<endl;
			}
		}
	}
}
