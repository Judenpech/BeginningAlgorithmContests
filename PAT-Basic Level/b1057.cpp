#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char s[100000];
	int count[2]={0};
	gets(s);
	int n=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='A' && s[i]<='Z'){
			n+=s[i]-'A'+1;
		}else if(s[i]>='a' && s[i]<='z'){
			n+=s[i]-'a'+1;
		}
	}
	int tmp;
	while(n!=0){
		tmp=n%2;
		count[tmp]++; 
		n/=2;
	}
	cout<<count[0]<<" "<<count[1];
	return 0;
}
