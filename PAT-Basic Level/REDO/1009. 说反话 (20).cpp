#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s,t;
	getline(cin,s);
	s=' '+s;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]==' '){
			cout<<t;
			t="";
			if(i!=0) cout<<" ";
		}else{
			t=s[i]+t;
		}
	}
	return 0;
}
