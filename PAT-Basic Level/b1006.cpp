#include <iostream>
using namespace std;

int main(){
	int n,bai=0,shi=0,ge=0;
	cin>>n;
	bai=n/100;
	shi=(n%100)/10;
	ge=n%100%10;
	while(bai--){
		cout<<"B";
	}
	while(shi--){
		cout<<"S";
	}
	for(int i=1;i<=ge;i++){
		cout<<i;
	}
	return 0;
}
