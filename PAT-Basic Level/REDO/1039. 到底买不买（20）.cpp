#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int cnt=0;
	for(int i=0;i<b.length();i++){
		for(int j=0;j<a.length();j++){
			if(b[i]==a[j]){
				cnt++;
				a[j]='#';
				break;
			}
		}
	}
	if(cnt==b.length()) cout<<"Yes"<<" "<<a.length()-cnt<<endl;
	else cout<<"No"<<" "<<b.length()-cnt<<endl;
	return 0;
}
