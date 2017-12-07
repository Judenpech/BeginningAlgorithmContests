#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[]={"1SE0Z0080A000300HIL0JM0O0002TUVWXY5"};
	int f1,f2;
	char s[25];
	while(scanf("%s", s)==1){
		f1=1;f2=1;
		for(int i=0,j=strlen(s)-1;i<=strlen(s)/2;i++,j--){
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
		cout<<endl;
	}
	return 0;
}
