#include <iostream>
#include <string>
using namespace std;//���������Ե�𰸴���
int main(){
	int m,n,s;
	cin>>m>>n>>s;
	string t,a[1005];
	int len=0,f2=0;//lenΪ��¼���н����鳤�ȣ�f2������й���
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
