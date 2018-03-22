#include <iostream>
#include <string>
using namespace std;
int main(){
	string n,a,b;
	cin>>n>>a>>b;
	int len=a.length()>b.length()?a.length()+1:b.length()+1;
	for(int i=20-a.length();i>=0;i--){//前导置0
		a='0'+a;
	}
	for(int i=20-b.length();i>=0;i--){//前导置0
		b='0'+b;
	}
	int t=0;
	int f2=0;//标记0+0的情况
	for(int i=20,j=n.length()-1;20-i<len;i--,j--){
		if(a[i]!='0') f2=1;
		if(n[j]=='0') n[j]+=10;
		a[i]=a[i]+b[i]+t-'0';
		t=(a[i]-'0')/(n[j]-'0');
		a[i]=(a[i]-'0')%(n[j]-'0')+'0';
	}
	int flag=0;
	for(int i=0;i<21;i++){
		if(a[i]!='0') flag=1;
		if(flag) cout<<a[i];
	}
	if(f2==0) cout<<0;
	return 0;
}
