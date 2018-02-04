#include <iostream>

using namespace std;

void p(int a,int n){   //µİ¹éÊä³öÓàÊı 
	if(a/n==0) cout<<a;
	else{
		p(a/n,n);
		cout<<(a%n); 
	}
}
int main(){
	int a,b,n;
	cin>>a>>b>>n;
	p(a+b,n);
} 
