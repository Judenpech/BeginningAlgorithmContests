#include <iostream>
#include <string>
using namespace std;
int main(){
	int a[26]={0};
	string s;
	char t;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		t=tolower(s[i]);
		if(isalpha(t)){
			a[t-'a']++;
		} 
	}
	int max=25;
	for(int i=24;i>=0;i--){
		if(a[i]>=a[max]) max=i;
	}
	cout<<(char)(max+'a')<<" "<<a[max]<<endl;
	return 0;
}
