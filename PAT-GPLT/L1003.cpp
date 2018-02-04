#include <iostream>
#include <cstring>
#define maxn 1005
using namespace std;
int main(){
	char a[maxn];
	int cnt[10]={0};
	cin>>a;
	for(int i=0;i<strlen(a);i++){
		cnt[a[i]-48]++;
	}
	for(int i=0;i<10;i++){
		if(cnt[i]!=0){
			cout<<i<<":"<<cnt[i]<<endl;
		}
	}
	return 0;
}
