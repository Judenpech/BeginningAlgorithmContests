#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int input(string a[]){
	string str;
	getline(cin,str);
	int len=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='['){
			while(str[++i]!=']'){
				a[len]+=str[i];
			}
			len++;
		}
	}
	return len;
}
int main(){
	string shou[15],yan[15],kou[15];
	int p[5];
	int lens=0,leny=0,lenk=0;
	lens=input(shou);
	leny=input(yan);
	lenk=input(kou);
	int k;
	cin>>k;
	while(k--){
		for(int i=0;i<5;i++) cin>>p[i];
		if(p[0]>lens || p[4]>lens){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		if(p[1]>leny || p[3]>leny){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		if(p[2]>lenk){
			cout<<"Are you kidding me? @\\/@"<<endl;
			continue;
		}
		cout<<shou[p[0]-1]<<yan[p[1]-1]<<kou[p[2]-1]<<yan[p[3]-1]<<shou[p[4]-1]<<endl;
	}
	return 0;
}
