#include <iostream>
#include <string>

using namespace std;

int main(){
	string n;
	cin>>n;
	int d[10]={0};
	for(int i=0;i<n.length();i++){
		d[n[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(d[i]!=0){
			printf("%d:%d\n",i,d[i]);
		}	
	}
	return 0;
}
