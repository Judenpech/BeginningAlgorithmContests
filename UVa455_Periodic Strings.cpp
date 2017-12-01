#include <iostream>
#include <cstring>
#include <string>
#define maxn 85
using namespace std;
int main(){
	int n,flag,j;
	char a[maxn];
	cin>>n;
	getchar();
	while(n--){
		memset(a,' ',sizeof(a));
		cin>>a;
		for(int i=1;i<strlen(a);i++){
			flag=0;
			if(strlen(a)%i==0){
				flag=1;
				for(j=0;i+j<strlen(a);j++){
					if(a[j]!=a[i+j]){
						flag=0;
						break;
					}
				}
				if(flag){
					cout<<i<<endl;
					break;
				}
			}
		}
		if(!flag) cout<<strlen(a)<<endl;
		if(n) cout<<endl;	
	}
	return 0;
}
