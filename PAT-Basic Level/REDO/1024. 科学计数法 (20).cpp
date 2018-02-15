
//超时+部分答案错误

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
	int cntxs=0,p=3,e=0,flag;
	string s,ans;
	cin>>s;
	while(s[p++]!='E'){
		cntxs++;
	}
	flag=s[p++]=='-'?1:0;
	for(int i=p;i<s.length();i++){
		e=e*10+(s[i]-'0');
	}
	if(flag){
		ans=s[1]+ans;
		while(e--){
			ans='0'+ans;
		}
		ans+=s.substr(3,cntxs);
		ans.insert(1,".");
	}else{
		ans=s.substr(0,2);
		p=3;
		e-=cntxs;
		while(cntxs--){
			ans+=s[p++];
		}
		while(e--){
			ans+='0';
		}
	}
	cout<<ans;
	return 0;
}
