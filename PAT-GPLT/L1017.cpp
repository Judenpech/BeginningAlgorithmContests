#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int len,cntTwo=0,isFuShu=0,isOuShu=0;
	char n[55];
	cin>>n;
	for(int i=0;i<strlen(n);i++){
		if(n[i]=='2') cntTwo++;
	}
	
	if(n[0]=='-'){
		len=strlen(n)-1;
		isFuShu=1;
	} 
	else len=strlen(n);
	if((n[strlen(n)-1]-48)%2==0) isOuShu=1;

	double ans=cntTwo/(double)len*100;
	if(isFuShu) ans*=1.5;
	if(isOuShu) ans*=2;
	
	printf("%.2f%%",ans); //Êä³ö°Ù·ÖºÅ£º%%
	return 0;
}
