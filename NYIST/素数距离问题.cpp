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
	int n,m,a,b;
	cin>>n;
	while(n--){
		a=0;
		b=0;
		cin>>m;
		if(isPrime(m)){
			a=m;
			b=0;
		}else{
			for(int i=m-1;i>1;i--){
				if(isPrime(i)){
					a=i;
					b=m-i;
					break;
				}
			}
			for(int i=m+1;;i++){
				if(isPrime(i)){
					if(b==0 || i-m<b){
						a=i;
						b=i-m;
						break;
					}else{
						break;
					}
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}
