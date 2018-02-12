#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a,q;
	int b,r=0;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		if((r*10+(a[i]-48))/b==0){
			if(r==0 && i!=0) q+='0';
			r=r*10+(a[i]-48);
			
		}else{
			q+=((r*10+(a[i]-48))/b)+48;
			r=(r*10+(a[i]-48))%b;
		}
	}
	if(q!="") cout<<q<<" "<<r<<endl;
	else cout<<"0 "<<r<<endl;
	return 0;
}
