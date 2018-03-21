#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	int k,cnt=0;
	cin>>k;
	string s;
	while(cin>>s && s!="End"){
		if(cnt==k){
			cout<<s<<endl;
			cnt=0;
			continue;
		}
		if(s=="ChuiZi"){
			cout<<"Bu"<<endl;
		}else if(s=="JianDao"){
			cout<<"ChuiZi"<<endl;
		}else{
			cout<<"JianDao"<<endl;
		}
		cnt++;
	}
	return 0;
}
