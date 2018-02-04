#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b,c="";
	int tmp,flag=1;
	cin>>a>>b;
	int len=a.length()-b.length(); 
	if(b.length()>=a.length()){
		for(int i=1;i<=-len;i++){
			a="0"+a;
		}
	}else{
		for(int i=1;i<=len;i++){
			b="0"+b;
		}
	}
	for(int i=a.length()-1;i>=0;i--){
		if(flag){
			tmp=(b[i]-'0'+a[i]-'0')%13;
			if(tmp==10) c="J"+c;
			else if(tmp==11) c="Q"+c;
			else if(tmp==12) c="K"+c;
			else c=(char)(tmp+'0')+c;
			flag=0; 
		}else{
			tmp=b[i]-a[i]; 
			if(tmp<0){
				tmp+=10;
			}
			c=(char)(tmp+'0')+c;
			flag=1; 
	    }
	}
	cout<<c;
	return 0;
}
