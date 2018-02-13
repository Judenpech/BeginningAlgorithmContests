#include <iostream>
#include <cstring>
using namespace std;
const int maxn=1005;
int main(){
	char n[maxn],a[10]={0};
	cin>>n;
	for(int i=0;i<strlen(n);i++){
		a[n[i]-48]++;
	}
	for(int i=0;i<10;i++){
		if(a[i]!=0) printf("%d:%d\n",i,a[i]);
	}
	return 0;
}
