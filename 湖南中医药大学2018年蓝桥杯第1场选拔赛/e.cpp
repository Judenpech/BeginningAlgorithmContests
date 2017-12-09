//B
#include <iostream>
using namespace std;
char a[]={"1000101021"};
int main(){
	int t,n,x,sum=0;
	cin>>t;
	while(t--){
		sum=0;
		cin>>n;
		while(n){
			x=n%10;
			sum+=(a[x]-48);//cout<<a[x];
			n/=10;
		}
		
		cout<<sum<<endl;
	}
	
	return 0;
}
