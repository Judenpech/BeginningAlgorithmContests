#include <iostream>

using namespace std;

int main(){
	int n,count=0,ge=0,shi=0,bai=0;
	cin>>n;
	while(n!=0){
		if(count==0){
			ge=n%10;
			n=n/10;
			count++;
		}
		else if(count==1){
			shi=n%10;
			n=n/10;
			count++;
		}
		else{
			bai=n;
			n=n/10;
		}	
	}
	while(bai--) cout<<'B';
	while(shi--) cout<<'S';
	for(int i=1;i<=ge;i++){
		cout<<i;
	}
	return 0;
}
