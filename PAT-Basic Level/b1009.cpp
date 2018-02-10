#include <iostream>
#include <string>
using namespace std;

int main(){
	string t,s;
	getline(cin,s);
	s=" "+s;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]!=' '){
			t=s[i]+t; 	
		}else{
			cout<<t;
			t="";
			if(i!=0) cout<<" ";
		}
		
	}
	return 0;
} 
