#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
	string s1,s2,s;
	int b[123];
	memset(b,0,sizeof(b));
	getline(cin,s1); //不能用cin，第一行可能为空,即没有坏键
	getline(cin,s2);
	if(s1.length()!=0){
		for(int i=0;i<s1.length();i++){
			b[s1[i]]=1;
			if(isupper(s1[i])) b[tolower(s1[i])]=1;
		}
	}
	for(int i=0;i<s2.length();i++){
		if(isupper(s2[i]) && b[43]==1) continue;
		if(b[s2[i]]==0){
			s+=s2[i];
		}
	}
	cout<<s<<endl;
	return 0;
}
