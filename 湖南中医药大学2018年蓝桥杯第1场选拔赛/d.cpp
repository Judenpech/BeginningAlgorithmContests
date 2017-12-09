//d
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <algorithm>
#include <string>
using namespace std;
//char s1[105],s2[105],s3[//maxn];
int main(){
	string s1,s2,s3;
	while(getline(cin,s1)){
		getline(cin,s2);
		getline(cin,s3);
		int flag;
		for(int i=0;i<s1.length();i++){
			if(isupper(s1[i])) s1[i]=tolower(s1[i]);
		}
		for(int i=0;i<s3.length();i++){
			if(isupper(s3[i])) s3[i]=tolower(s3[i]);
		}
		flag = s3.find(s1,0);
		while(flag != string::npos){
			s3.replace(flag,s2.length(),s2);
			flag = s3.find(s1, flag + 1);
		}
		cout<<s3<<endl;
	}
	return 0;
}
