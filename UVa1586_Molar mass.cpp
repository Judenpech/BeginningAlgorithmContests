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
			if(isalpha(a[i])){
				if(isdigit(a[i+1])){
					if(isdigit(a[i+2])){
						p=(a[i+1]-48)*10+(a[i+2]-48);
					}
					else{
						p=(a[i+1]-48);
					}
				}else if(isalpha(a[i+1]) || a[i+1]=='\0'){
					p=1;
				}
				cnt+=f(a[i],p);
			}
		}
		printf("%.3f\n",cnt);
	}
	return 0;
}
