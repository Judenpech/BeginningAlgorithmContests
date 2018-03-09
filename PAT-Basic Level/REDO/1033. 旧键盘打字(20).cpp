//最后一个测试点超时

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int maxn=100000;
int main(){
	char s1[maxn],s2[maxn];
	string s;
	int b[123];
	memset(b,0,sizeof(b));
	gets(s1); //不能用cin，第一行可能为空,即没有坏键
	gets(s2);
	for(int i=0;i<strlen(s1);i++){
		b[s1[i]]=1;
		if(isupper(s1[i])) b[tolower(s1[i])]=1;
	}
	for(int i=0;i<strlen(s2);i++){
		if(isupper(s2[i]) && b[43]==1) continue;
		if(b[s2[i]]==0){
			s+=s2[i];
		}
	}
	cout<<s<<endl;
	return 0;
}
