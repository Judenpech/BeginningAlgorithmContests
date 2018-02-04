#include <iostream>
#include <string>

using namespace std;

int main(){
	string a,q;
	int b,r=0;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		q+=(r*10+(a[i]-'0'))/b+'0'; //不能用q[i]进行赋值 
		r=(r*10+a[i]-'0')%b;
	}
	if(q[0]=='0' && q[1]!=0){
		for(int i=1;i<q.length();i++){
			cout<<q[i];
		}
	} 
	else cout<<q;
	cout<<" "<<r;
	return 0;
}
