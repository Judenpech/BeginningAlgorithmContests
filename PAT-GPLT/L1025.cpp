#include <iostream>
#include <cstring>
#include <cmath>
#define maxn 2005
using namespace std;
int main(){
	char s[maxn];
	int a=0,b=0,sum,f1=1,f2=1;
	gets(s);
	int i;
	for(i=0;i<strlen(s);i++){//题目说B不是一个空串,但A可能是一个空串
		if(s[i]==' '){
			if(a==0) f1=0;
			break;
		} 
		if(isdigit(s[i])){
			a=a*10+(s[i]-48);
		}else{
			f1=0;
		}
	}
	for(++i;i<strlen(s);i++){
		if(isdigit(s[i])){
			b=b*10+(s[i]-48);
		}else{
			f2=0;
			break;
		}
	}
	if(a>1000 || a<1) f1=0;
	if(b>1000 || b<1) f2=0;

	if(f1) cout<<a<<" + ";
	else cout<<"? + ";
	if(f2) cout<<b<<" = ";
	else cout<<"? = ";

	if(f1 && f2) cout<<a+b;
	else cout<<"?";
	return 0;
}
