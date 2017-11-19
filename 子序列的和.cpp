#include <iostream>
using namespace std;

int main(){
	int cnt=1;
	long long n,m;
	double sum;
	while(cin>>n>>m && n!=0 && m!=0){
		sum=0.0;
		for(int i=n;i<=m;i++){
			sum=sum+1.0/i/i;
		}
		printf("Case %d: %.5f\n",cnt++,sum);
	}
	return 0;
}
