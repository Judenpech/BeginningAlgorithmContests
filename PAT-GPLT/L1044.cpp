#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int k,i=0;
	char s[10];
	cin>>k;
	while(cin>>s && strcmp(s,"End")!=0){
		if(i==k){
			i=0;
			cout<<s<<endl;
		}else{
			if(strcmp(s,"ChuiZi")==0){
				cout<<"Bu"<<endl;
			}else if(strcmp(s,"JianDao")==0){
				cout<<"ChuiZi"<<endl;
			}else{
				cout<<"JianDao"<<endl;
			}
			i++;
		}
	}
	return 0;
}
