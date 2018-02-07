#include <iostream>
#include <cstring>
#include <ctype.h>
#define maxn 10005
using namespace std;
int main(){
	int a[4]={0};
	char s[maxn],t;
	cin>>s;
	for(int i=0;i<strlen(s);i++){
		t=toupper(s[i]);
		if(t=='G') a[0]++;
		else if(t=='P') a[1]++;
		else if(t=='L') a[2]++;
		else if(t=='T') a[3]++;
	}
	while(1){
		if(a[0]){
			cout<<"G";
			a[0]--;
		}
		if(a[1]){
			cout<<"P";
			a[1]--;
		}
		if(a[2]){
			cout<<"L";
			a[2]--;
		}
		if(a[3]){
			cout<<"T";
			a[3]--;
		}
		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0) break;
	}
	return 0;
}
