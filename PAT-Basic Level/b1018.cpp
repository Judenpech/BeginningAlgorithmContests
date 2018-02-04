#include <iostream>
using namespace std;

int main(){
	char jia,yi;
	int n,x;
	int jiaW=0,jiaD=0,jiaL=0; //W=wins,D=draws,L=losses
	int yiW=0,yiD=0,yiL=0;
	int jiaB=0,jiaC=0,jiaJ=0;
	int yiB=0,yiC=0,yiJ=0;
	cin>>n;
	while(n--){
		cin>>jia>>yi;
		switch(jia-yi){  //¿˚”√ASCII¬Î≤Ó÷µ 
			case(-1):jiaW++;yiL++;jiaB++;break;
			case(1):jiaL++;yiW++;yiB++;break;
			case(-8):jiaL++;yiW++;yiJ++;break;
			case(8):jiaW++;yiL++;jiaJ++;break;
			case(-7):jiaW++;yiL++;jiaC++;break;
			case(7):jiaL++;yiW++;yiC++;break;
			default:jiaD++;yiD++;break;
		}
	}
	cout<<jiaW<<" "<<jiaD<<" "<<jiaL<<endl;
	cout<<yiW<<" "<<yiD<<" "<<yiL<<endl;
	
	if(jiaJ>jiaC && jiaJ>jiaB) cout<<"J ";
	else if(jiaC>jiaB) cout<<"C ";
	else cout<<"B ";
	
	if(yiJ>yiC && yiJ>yiB) cout<<"J";
	else if(yiC>yiB) cout<<"C";
	else cout<<"B";
	return 0; 
} 
