#include <iostream>
using namespace std;
int main(){
	int n,m,k,t;
	cin>>n>>m;
	int num[10000]={0};
	for(int i=0;i<m;i++){
		cin>>t;
		num[t]++;
	}
	char s[5];
	int flag,sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		flag=0;
		cin>>s>>k;
		for(int j=0;j<k;j++){
			cin>>t;
			if(num[t]){
				if(!flag){
					cout<<s<<":";
					flag=1;
					sum1++;
				}
				printf(" %04d",t);
				sum2++;
			}
		}
		if(flag) cout<<endl;
	}
	cout<<sum1<<" "<<sum2<<endl;
	return 0;
}
