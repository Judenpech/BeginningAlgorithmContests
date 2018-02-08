//B
#include <iostream>
#include <cstring>
#define inf 10000005
using namespace std;
int main(){
	int n,max=inf,min=-inf;
	char s[15];
	while(cin>>n && n!=0){
		getchar();
		gets(s);
		if(strcmp(s,"too high")==0){
			if(n<max) max=n;
		}else if(strcmp(s,"too low")==0){
			if(n>min) min=n;
		}else if(strcmp(s,"right on")==0){
			if(n>min && n<max){
				cout<<"The guy may be honest"<<endl;
				max=inf;min=-inf;
			}else{
				cout<<"The guy is dishonest"<<endl;
				max=inf;min=-inf;
			}
		}
		
	}
	return 0;
}
