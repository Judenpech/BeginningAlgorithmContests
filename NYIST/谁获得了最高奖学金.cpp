#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n,x;
	char name[25],outN[25],ganbu,xibu;
	int qimo,banji,lunwen,sum,outs,tmps;
	cin>>n;
	while(n--){
		cin>>x;
		sum=0;
		outs=0;
		while(x--){
			tmps=0;
			cin>>name>>qimo>>banji>>ganbu>>xibu>>lunwen;
			if(qimo>80 && lunwen>=1){
				tmps+=8000;
			} 
			if(qimo>85 && banji>80){
				tmps+=4000;
			} 
			if(qimo>90){
				tmps+=2000;
			} 
			if(qimo>85 && xibu=='Y'){
				tmps+=1000;
			} 
			if(banji>80 && ganbu=='Y'){
				 tmps+=850;
			}
			sum+=tmps;
			if(tmps>outs){
				memcpy(outN,name,sizeof(name));
				outs=tmps;
			}
		}
		cout<<outN<<endl<<outs<<endl<<sum<<endl;
	}
	return 0;
}
