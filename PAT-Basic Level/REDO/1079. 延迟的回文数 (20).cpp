#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string s){
	int len=s.length();
	for(int i=0,j=len-1;i<len/2;i++,j--){
		if(s[i]!=s[j]) return 0;
	}
	return 1;
}
int main(){
	string a,b,c;
	cin>>c;
	int flag=1;
	for(int i=0;i<10;i++){
		if(isPalindrome(c)){
			cout<<c<<" is a palindromic number."<<endl;
			flag=0;
			break;
		}else{
			a=c;
			b="";
			c="";
			for(int j=a.length()-1;j>=0;j--){
				b+=a[j];
			}
			int t=0;
			for(int j=a.length()-1;j>=0;j--){
				t=t+(a[j]+b[j]-96);
				c=(char)(t%10+'0')+c;
				t/=10;
			}
			if(t!=0) c='1'+c;
			cout<<a<<" + "<<b<<" = "<<c<<endl;
		}
	}
	if(flag) cout<<"Not found in 10 iterations."<<endl;
	return 0;
}
