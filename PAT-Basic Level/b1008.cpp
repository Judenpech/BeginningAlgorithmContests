#include <iostream>

using namespace std;

int main(){
	int n,m,s[100];
	cin>>n>>m;
	if(m!=0){
	for(int i=m%n;i<n;i++){   //注意m>n的情况 
		cin>>s[i];
	}
	for(int i=0;i<m%n;i++){
		cin>>s[i];
	}
}else{
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
}
	for(int i=0;i<n;i++){
		cout<<s[i];
		if(i!=n-1) cout<<" ";
	}
	return 0;
}
