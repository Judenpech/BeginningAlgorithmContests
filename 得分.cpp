#include <iostream>
#include <cstring>
#define maxn 85
using namespace std;

int main(){
	int cnt=0,flag=0,cnto=0;
	char a[maxn];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if(i!=0) cout<<'+';
		if(a[i]=='O'){
			if(flag){
				cnto++;
				cout<<cnto;
				cnt+=cnto;
			}else{
				flag=1;
				cnto=1;
				cout<<cnto;
				cnt+=cnto;
			}
		}else{
			flag=0;
			cout<<"0";
		}	
	}
	cout<<"="<<cnt<<endl;
	return 0;
}
