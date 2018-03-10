#include <iostream>
#include <string>
using namespace std;//第三个测试点答案错误
int main(){
	int m,n,s;
	cin>>m>>n>>s;
	string t,a[1005];
	int len=0,f2=0;//len为记录已中奖数组长度，f2标记已中过奖
	for(int i=1,j=s;i<=m;i++){
		cin>>t;
		if(i==j || f2){
			int flag=1;
			for(int k=0;k<len;k++){
				if(a[k]==t){
					flag=0;
					f2=1;
					break;
				}
			}
			if(flag){
				cout<<t<<endl;
				j+=n;
				f2=0;
				a[len++]=t;
			}
		}
	}
	if(s>m){
		cout<<"Keep going..."<<endl;
	}
	return 0;
}
