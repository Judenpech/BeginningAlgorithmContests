#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int pG,pS,pK,aG,aS,aK,cG,cS,cK;
	scanf("%d.%d.%d %d.%d.%d",&pG,&pS,&pK,&aG,&aS,&aK);
	if(aG>=pG){
		while(aK<pK){
		aK+=29;
		aS--;
	    }
	    cK=aK-pK;
	    while(aS<pS){
		aS+=17;
		aG--;
	    }
	    cS=aS-pS;
	    cG=aG-pG;
		cout<<cG<<"."<<cS<<"."<<cK;
	}else{
		while(aK>pK){
		pK+=29;
		pS--;
	    }
	    cK=pK-aK;
	    while(aS>pS){
		pS+=17;
		pG--;
	    }
	    cS=pS-aS;
	    cG=pG-aG;
		cout<<"-"<<cG<<"."<<cS<<"."<<cK;
	}
	return 0;
}
