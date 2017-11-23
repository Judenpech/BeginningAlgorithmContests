#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[]={'1','S','E','0','Z','0','0','8','0','A','0','0','0','3','0','0','H','I','L','0','J','M','0','O','0','0','0','2','T','U','V','W','X','Y','5'};

	int f1,f2;
	while(1){
		char s[1000];
		f1=1;f2=1;
		gets(s);
		for(int i=0,j=strlen(s)-1;i<strlen(s)/2;i++,j--){
			if(s[i]!=s[j]){
				f1=0;
			}
			if(s[i]>'0' && s[i]<='9'){
				if(a[s[i]-49]!=s[j]) f2=0;
			}else{
				if(a[s[i]-56]!=s[j]) f2=0;
			}
			if(!f1 && !f2) break;
		}
		if(f1 && f2) cout<<s<<" -- is a mirrored palindrome."<<endl;
		if(f1 && !f2) cout<<s<<" -- is a regular palindrome."<<endl;
		if(f2 && !f1) cout<<s<<" -- is a mirrored string."<<endl;
		if(!f1 && !f2) cout<<s<<" -- is not a palindrome."<<endl;
	}
	return 0;
}
