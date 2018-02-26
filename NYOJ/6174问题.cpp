#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
	int n,t,a=0,b=0,cnt;
	char s[8];
	cin>>n;
	while(n--){
		cin>>s;
		cnt=1;
		while(1){
			a=0;b=0;
			sort(s,s+4);
			for(int i=0;i<strlen(s);i++){
				a=a*10+s[i]-'0';
				b=b*10+s[strlen(s)-i-1]-'0';
			}
			t=b-a;
			for(int i=strlen(s)-1;i>=0;i--){
				s[i]=t%10+'0';
				t/=10;
			}
			cnt++;
			if(strcmp(s,"6174")==0) break;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
