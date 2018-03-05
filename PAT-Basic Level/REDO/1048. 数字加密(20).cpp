#include <iostream>
#include <string>
using namespace std;
char d[]={"JQK"};
int main(){
	string a,b,c="";
	cin>>a>>b;
	int len=a.length()-b.length();
	if(len<0){
		for(int i=0;i<-len;i++) a="0"+a;
	}else{
		for(int i=0;i<len;i++) b="0"+b;
	}
	int flag=1;
	int t;
	for(int i=a.length()-1;i>=0;i--){
		if(flag){
			t=(a[i]+b[i]-96)%13;
			if(t<10){
				c=(char)(t+'0')+c;
			}else{
				c=d[t-10]+c;
			}
			flag=0;
		}else{
			t=b[i]-a[i];
			if(t<0) t+=10;
			c=(char)(t+'0')+c;
			flag=1;
		}
	}
	cout<<c<<endl;
	return 0;
}
