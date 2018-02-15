#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

char a[]={"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_"}; //  '_'空格键也有损坏的可能
int b[37]={0};
int main(){
	char t,s1[85],s2[85];
	cin>>s1>>s2;
	for(int i=0;i<strlen(s2);i++){
		t=toupper(s2[i]);
		for(int j=0;j<37;j++){
			if(t==a[j]){
				b[j]=1;
				break;
			}
		}
	}
	int flag;
	for(int i=0;i<strlen(s1);i++){
		t=toupper(s1[i]);
		flag=0;
		for(int j=0;j<37;j++){
			if(t==a[j] && b[j]==0){
				flag=1;
				b[j]=-1;//标记已输出
				break;
			}
		}
		if(flag) cout<<t;
	}
	return 0;
}
