#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	int m,n,s;
	cin>>m>>n>>s;
	map<string,int> mapp;
	string t;
	int flag=1;
	for(int i=1;i<=m;i++){
		cin>>t;
		if(mapp[t]==1) s+=1;
		if(i==s && mapp[t]==0){
			mapp[t]=1;
			flag=0;
			cout<<t<<endl;
			s+=n;
		}
	}
	if(flag){
		cout<<"Keep going..."<<endl;
	}
	return 0;
}
