#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	char c,t;
	cin>>c;
	getchar();
	string s,ans;
	getline(cin,s);
	int cnt;
	if(c=='C'){
		cnt=1;
		for(int i=0;i<s.length();i++){
			if(s[i]==s[i+1]){
				cnt++;
			}else{
				if(cnt!=1){
					cout<<cnt; //不能用ans+=(char)(cnt+'0'); 考虑cnt>9的情况
					cnt=1;
				}
				cout<<s[i];
			}
		}
	}else if(c=='D'){
		cnt=0;
		for(int i=0;i<s.length();i++){
			if(isdigit(s[i])){
				cnt=cnt*10+(s[i]-'0');
			}else{
				if(cnt!=0){
					for(int j=0;j<cnt;j++){
						cout<<s[i];
					}
				}else{
					cout<<s[i];
				}
				cnt=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
