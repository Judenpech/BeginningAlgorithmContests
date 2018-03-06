#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int sum=0;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			sum+=tolower(s[i])-96;
		}
	}
	int t,zero=0,one=0;
	while(sum!=0){
		t=sum%2;
		sum/=2;
		if(t==0){
			zero++;
		}else if(t==1){
			one++;
		}
	}
	cout<<zero<<" "<<one<<endl;
	return 0;
}
