#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	getchar();
	while(n--){
		getline(cin,s);//虽然题目保证非空字符串，但是用cin的话第2个测试点过不了
		if(s.length()<6){
			cout<<"Your password is tai duan le."<<endl;
			continue;
		}
		int f1=0,f2=0,f3=0; //f1:标记字母;f2:标记数字;f3:标记其它字符
		for(int i=0;i<s.length();i++){
			if(isalnum(s[i]) || s[i]=='.'){
				if(isalpha(s[i])) f1=1;
				else if(isdigit(s[i])) f2=1;
			}else{
				f3=1;
				break;
			}
		}
		if(f3){
			cout<<"Your password is tai luan le."<<endl;
		}else{
			if(f1 && f2) cout<<"Your password is wan mei."<<endl;
			else if(!f2) cout<<"Your password needs shu zi."<<endl;
			else if(!f1) cout<<"Your password needs zi mu."<<endl;
		}
	}
	return 0;
}
