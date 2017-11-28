#include <iostream>
#include <cstring>
#include <ctype.h>
#define maxn 85
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
	char a[maxn],m;
	double cnt=0;
	int t,p;
	cin>>t;
	getchar();
	while(t--){
		cnt=0,p=0;
		gets(a);
		for(int i=0;i<strlen(a);i++){
			if(isdigit(a[i])){
				if(p==0){
					p+=a[i]-48;
				}else{
					p=p*10+(a[i]-48);
				}
				if(a[i+1]=='\0'){
					cnt+=f(m,p);
				}
			}
			if(isalpha(a[i])){
				if(p!=0){
					cnt+=f(m,p);
					p=0;
					m=a[i];
					if(isalpha(a[i+1]) || a[i+1]=='\0'){
						cnt+=f(m,1);
					}
				}
				else{
					m=a[i];
					if(isalpha(a[i+1]) || a[i+1]=='\0'){
						cnt+=f(m,1);
					}
				} 
			}
		}
		printf("%.3lf\n",cnt);
	}
	return 0;
}
