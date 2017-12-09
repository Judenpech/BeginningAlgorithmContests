#include <iostream>
#include <stdio.h>
#include <cstring>
#include <ctype.h>
#define maxn 50005
char s1[105],s2[105],s3[maxn];
using namespace std;
int main(){
	int i;
	while(gets(s1)){
		getchar();
		gets(s2);
		getchar();
		gets(s3);
		int flag;
		for(int i=0;i<strlen(s3);){
			flag=1;
			for(int j=0,k=i;j<strlen(s1);j++,k++){
				if(tolower(s3[k])!=tolower(s1[j])){
					flag=0;
					break;
				}
			}
			if(flag){
				cout<<s2;
				i+=strlen(s2);
			}else{
				cout<<s3[i];
				i++;
			}	
		}
		cout<<endl;
	}
	return 0;
}
