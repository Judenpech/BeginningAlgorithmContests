#include <iostream>
#include <cstring>
#define maxn 10005
using namespace std;
int main(){
	char a[maxn],b[maxn];
	gets(a);
	gets(b);
	int flag;
	for(int i=0;i<strlen(a);i++){
		flag=1;
		for(int j=0;j<strlen(b);j++){
			if(a[i]==b[j]){
				flag=0;
				break;
			} 
		}
		if(flag) cout<<a[i];
	}
	return 0;
}
