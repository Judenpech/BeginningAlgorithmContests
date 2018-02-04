#include <iostream>
using namespace std;

int main(){
	int count[6]={0};
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'P':count[0]++;break;
			case 'A':count[1]++;break;
			case 'T':count[2]++;break;
			case 'e':count[3]++;break;
			case 's':count[4]++;break;
			case 't':count[5]++;break;
		}
	}
	while(count[0] || count[1] || count[2] || count[3] || count[4] || count[5]){
		if(count[0]!=0){
			cout<<"P";
			count[0]--;
		} 
		if(count[1]!=0){
			cout<<"A";
			count[1]--;
		} 
		if(count[2]!=0){
			cout<<"T";
			count[2]--;
		} 
		if(count[3]!=0){
			cout<<"e";
			count[3]--;
		} 
		if(count[4]!=0){
			cout<<"s";
			count[4]--;
		} 
		if(count[5]!=0){
			cout<<"t";
			count[5]--;
		} 
	}
	return 0;
}
