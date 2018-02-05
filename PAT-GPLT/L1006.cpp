#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=12;i>=1;i--){
		for(int j=2;j<=sqrt(n);j++){
			long long ans=1;
			for(int k=j;k-j<=i-1;k++){
				ans*=k;
			}
			if(n%ans==0){
				cout<<i<<endl;
				for(int q=j;q-j<=i-1;q++){
					if(q-j!=0) cout<<"*";
					cout<<q;
				}
				return 0;
			}
		}
	}
	cout<<1<<endl<<n;
	return 0;
}
