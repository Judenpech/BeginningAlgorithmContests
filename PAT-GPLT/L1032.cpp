#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n;
	char c;
	string s;
	cin>>n>>c;
	getchar();
	getline(cin,s);
	if(n-(int)s.length()>0){
		for(int i=0;i<n-s.length();i++){
			cout<<c;
		}
		for(int i=0;i<n;i++){
			cout<<s[i];
		}
	}else{
		for(int i=s.length()-n;i<s.length();i++){
			cout<<s[i];
		}
	}
	
	return 0;
}
