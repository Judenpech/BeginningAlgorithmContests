#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	char maxSName[10],maxSId[10],minSName[10],minSId[10],name[10],id[10];
	int grade,maxG=0,minG=100;
	while(n--){
		cin>>name>>id>>grade;
		if(grade>maxG){
			maxG=grade;
			strcpy(maxSName,name);
			strcpy(maxSId,id);
		} 
		if(grade<minG){
			minG=grade;
			strcpy(minSName,name);
			strcpy(minSId,id);
		} 
	}
	cout<<maxSName<<" "<<maxSId<<endl;
	cout<<minSName<<" "<<minSId<<endl;
	return 0;
} 
