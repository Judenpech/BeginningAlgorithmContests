#include <iostream>
using namespace std;
int main(){
	int t,a[10]={0};
	for(int i=0;i<10;i++){
		cin>>t;
		a[i]=t;
	}
	for(int i=1;i<10;i++){
		if(a[i]!=0){
			cout<<i;
			a[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		while(a[i]--!=0) cout<<i;
	}
	return 0;
}
