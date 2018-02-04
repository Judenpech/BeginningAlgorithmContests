#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m,query;
	int test[1000],exam[1000];
	string id[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id[i]>>test[i]>>exam[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>query;
		for(int j=0;j<n;j++){
			if(test[j]==query) cout<<id[j]<<" "<<exam[j]<<endl;
		}
	}
	return 0;
}
