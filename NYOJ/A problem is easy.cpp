#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,n,cnt;
	cin>>t;
	while(t--){
		cin>>n;
		cnt=0;
		for(int i=2;i<=sqrt(n+1);i++){
			if((n+1)%i==0) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
/*
i*j+i+j =N 经过观察，可以变形为i*j+i+j+1=N+1,也就是说，可以进一步变形为(i+1)*(j+1)=N+1
所以i从2判断到sqrt(n+1)即可 
*/
