#include <iostream>
#include <string>
using namespace std;

int main(){
	string psw,tmp;
	int n,count=0;
	cin>>psw>>n;
	cin.get();
	while(getline(cin,tmp) && tmp!="#"){
		count++;
		if(tmp==psw && count<=n){
			cout<<"Welcome in"<<endl;
			return 0;
		}
		if(tmp!=psw){
			cout<<"Wrong password: "<<tmp<<endl;
			if(count==n){
				cout<<"Account locked"<<endl;
				return 0;
			}	
		}
		
	}
	return 0;
}
