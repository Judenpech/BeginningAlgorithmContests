#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int m,w,n;
	cin>>m;
	while(m--){
		cin>>w;
		int t=w;
		string ans;
		while(t!=0){
			ans=(char)(t%10+48)+ans;
			t/=10;
		}
		cout<<w-(ans[0]-48)*pow(10,ans.length()-1)<<endl;
	}
	return 0;
}
