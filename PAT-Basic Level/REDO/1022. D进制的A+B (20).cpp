#include <iostream>
#include <string>
using namespace std;
int main(){
	int a,b,d,n;
	cin>>a>>b>>d;
	n=a+b;
	if(n==0){  //ע��a+b==0�����
		cout<<0;
		return 0;
	}
	string s;
	while(n!=0){
		s+=n%d+'0';
		n/=d;
	}
	for(int i=s.length()-1;i>=0;i--){
		cout<<s[i];
	}
	return 0;
}
