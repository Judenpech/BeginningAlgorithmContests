#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;
	int pearl[123]={0},counta,countb=0;
	cin>>a>>b;
	counta=a.length();
	for(int i=0;i<a.length();i++){
		pearl[a[i]]++; 
	}
	for(int i=0;i<b.length();i++){
		if(pearl[b[i]]!=0){
			countb++;
			counta--;
			pearl[b[i]]--;   
		}
	}
	if(countb==b.length()) cout<<"Yes "<<counta;
	else cout<<"No "<<(b.length()-countb);
	return 0;
}
