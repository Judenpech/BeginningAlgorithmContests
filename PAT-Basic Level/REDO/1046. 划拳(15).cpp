#include <iostream>
using namespace std;
int main(){
	int n,sum,a[4],b[2]={0};
	cin>>n;
	while(n--){
		for(int i=0;i<4;i++){
			cin>>a[i];
		}
		sum=a[0]+a[2];
		if(a[1]==sum && a[3]!=sum) b[1]++;
		if(a[1]!=sum && a[3]==sum) b[0]++;
	}
	cout<<b[0]<<" "<<b[1]<<endl;
	return 0;
}
