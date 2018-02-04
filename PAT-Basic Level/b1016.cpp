#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string a,b;
	char dA,dB;
	int pA=0,pB=0,countA=0,countB=0;
	cin>>a>>dA>>b>>dB;
	for(int i=0;i<a.length();i++){
		if(a[i]==dA){
			pA=pA+(dA-'0')*pow(10,countA);	
		    countA++;
		} 
	}
	for(int i=0;i<b.length();i++){
		if(b[i]==dB){
			pB=pB+(dB-'0')*pow(10,countB);	
			countB++;
		} 
	}
	cout<<(pA+pB);
	return 0;
}
