#include <iostream>
#include <cstring>
#include <ctype.h>
#define maxn 105
using namespace std;
double f(char a,int b){
	double cnt=0;
	switch(a){
				case 'C':{
					cnt+=12.01*b;
					break;
				}
				case 'H':{
					cnt+=1.008*b;
					break;
				}
				case 'O':{
					cnt+=16.00*b;
					break;
				}
				case 'N':{
					cnt+=14.01*b;
					break;
				}
			}
	return cnt;
}
int main(){
	char a[maxn];
	double cnt=0;
	char m;
	int n,cntn;
	gets(a);
	for(int i=0;i<strlen(a);){		
		n=0,cntn=1;
		if(isalpha(a[i])){
			m=a[i];
			for(int j=i+1;j<strlen(a);j++){
				if(isalpha(a[j]) || a[j]=='\0'){
					break;
				}
				if(isdigit(a[j]) && isdigit(a[j+1])){
					n=(n+(a[j]-48))*10;
					cntn++;
				}else if(isdigit(a[j]) && isalpha(a[j+1])){
					n+=(a[j]-48);
					cntn++;
					break;
				}else if(isdigit(a[j]) && a[j+1]=='\0'){
					n+=(a[j]-48);
					cntn++;
					break;
				}
			}
			if(cntn>1){
				cnt+=f(m,n);
				i=i+cntn;
			}else{
				cnt+=f(m,1);
				i++;
			} cout<<i<<endl;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
