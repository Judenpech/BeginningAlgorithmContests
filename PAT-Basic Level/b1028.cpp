#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n,validCount=0;
	char name[6],date[11],maxName[6],minName[6];
	char tmpd[][11]={"2014/09/06","1814/09/06"};
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>name>>date;
		if(strcmp(date,"1814/09/06")<0||strcmp(date,"2014/09/06")>0){
			continue;
		}
		validCount++;
		if(strcmp(tmpd[0],date)>0){
			strcpy(maxName,name);
			strcpy(tmpd[0],date);
		}
		if(strcmp(date,tmpd[1])>0){
			strcpy(minName,name);
			strcpy(tmpd[1],date);
		}
	}
	if(validCount!=0){
		cout<<validCount<<" "<<maxName<<" "<<minName;
	}else{
		cout<<"0";
	}
	return 0;
} 
