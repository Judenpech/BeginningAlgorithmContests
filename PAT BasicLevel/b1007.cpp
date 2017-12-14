#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,last=3,flag,cnt=0;
	cin>>n;
	for(int i=5;i<=n;i++){
		flag=1;
		for(int j=2;j<=sqrt(i);j++){ //ÇóËØÊý 
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag){
			if(i-last==2) cnt++;
			last=i;
		}
	}
	if(n<=3) cout<<0;
	else cout<<cnt;
	return 0;
}
