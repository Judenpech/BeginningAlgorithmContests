#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int t,n,tmp,num[10]={0};
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			tmp=i;
			while(tmp>=10){
				num[tmp%10]++;
				tmp/=10;
			}
			num[tmp]++;
		}
		for(int i=0;i<10;i++){
			if(i!=0) cout<<" ";
			cout<<num[i];
		}
		cout<<endl;
		memset(num,0,sizeof(num));
	}
	return 0;
}
