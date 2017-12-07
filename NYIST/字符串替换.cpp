#include <iostream>
#include <stdio.h>
#include <cstring>
#define maxn 1005
char s[maxn];
using namespace std;
int main(){
	int i;
	while(gets(s)){
		i=0;
		while(i<strlen(s)){
			if(s[i]=='y' && s[i+1]=='o' && s[i+2]=='u'){
				cout<<"we";
				i+=3;
			}else{
				cout<<s[i];
				i++;
			}
		}
		cout<<endl;
	}
	return 0;
}
