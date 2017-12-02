#include <iostream>
#include <cstring>
#define maxn 85
using namespace std;
int main(){
	int n,flag;
	char a[maxn];
	cin>>n;
	while(n--){
		cin>>a;
		for(int i=1;i<=strlen(a);i++){
			if(strlen(a)%i==0){
				flag=1;
				for(int j=i;j<strlen(a);j++){
					if(a[j]!=a[j%i]){
						flag=0;
						break;
					}
				}
				if(flag){
					cout<<i<<endl;
					if(n) cout<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
