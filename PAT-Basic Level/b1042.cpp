#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int alp[26]={0},max;
	char s[1001],tmp;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		tmp=s[i];
		if(tmp>='A' && tmp<='Z'){
			tmp=s[i]+32;
		}
		if(tmp>='a' && tmp<='z'){
			alp[tmp-97]++;  
		}
	}
	max=25;
	for(int i=24;i>=0;i--){
		if(alp[i]>=alp[max]) max=i;
	}
	cout<<char(max+97)<<" "<<alp[max];
	return 0;
}
