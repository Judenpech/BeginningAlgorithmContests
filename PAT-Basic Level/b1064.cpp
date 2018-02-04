#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n,frd[10000]={0};
	string s[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		for(int j=0;j<s[i].length();j++){
			frd[i]+=s[i].at(j)-'0';
		}
	}
	sort(frd,frd+n);
	int tmp=0,count=n;
	for(int i=0;i<n;i++){
		if(frd[i]!=tmp){
		    tmp=frd[i];
		}else count--;
	}
	cout<<count<<endl;
	tmp=0;
	for(int i=0;i<n;i++){
		if(frd[i]!=tmp){
			if(i!=0) cout<<" ";
		    cout<<frd[i];
		    tmp=frd[i];
		}
	}
	return 0;
}
