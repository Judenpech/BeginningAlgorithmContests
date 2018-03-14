#include <iostream>
using namespace std;
int main(){//筛选法
	int k,t;
	cin>>k;
	int a[105]={0};
	for(int i=0;i<k;i++){
		cin>>t;
		a[t]=1;
	}
	for(int i=1;i<=100;i++){
		if(a[i]==1){
			t=i;
			while(t!=1){
				if(t%2==0){
					t/=2;
				}else{
					t=(3*t+1)/2;
				}
				if(t<101) a[t]=-1;//避免数组越界
			}
		}
	}
	int flag=0;
	for(int i=100;i>0;i--){
		if(a[i]==1){
			if(flag) cout<<" ";
			cout<<i;
			flag=1;
		}
	}
	return 0;
}
