#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int a[6]={0};
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i]=='P') a[0]++;
		if(s[i]=='A') a[1]++;
		if(s[i]=='T') a[2]++;
		if(s[i]=='e') a[3]++;
		if(s[i]=='s') a[4]++;
		if(s[i]=='t') a[5]++;
	}
	while(1){
		if(a[0]!=0){
			cout<<'P';
			a[0]--;
		}
		if(a[1]!=0){
			cout<<'A';
			a[1]--;
		}
		if(a[2]!=0){
			cout<<'T';
			a[2]--;
		}
		if(a[3]!=0){
			cout<<'e';
			a[3]--;
		}
		if(a[4]!=0){
			cout<<'s';
			a[4]--;
		}
		if(a[5]!=0){
			cout<<'t';
			a[5]--;
		}
		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0) break;
	}
	return 0;
}
