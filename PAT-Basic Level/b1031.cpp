#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	int n,flag=1,idZ;
	char idM;
	int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	string id;
	cin>>n;
	while(n--){
		cin>>id;
		idZ=0;
		for(int i=0;i<17;i++){
	        idZ=idZ+(id[i]-'0')*quan[i];			
		}
		switch(idZ%11){
			case 0:idM='1';break;
			case 1:idM='0';break;
			case 2:idM='X';break;
			case 3:idM='9';break;
			case 4:idM='8';break;
			case 5:idM='7';break;
			case 6:idM='6';break;
			case 7:idM='5';break;
			case 8:idM='4';break;
			case 9:idM='3';break;
			case 10:idM='2';break;
		}
		if(id[17]!=idM){
				cout<<id<<endl;
				flag=0;				
		}
	}
	if(flag){
		cout<<"All passed";
	}
}
