#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string t;
	int a[50]={0};
	while(n--){
		cin>>t;
		int sum=0;
		for(int i=0;i<t.length();i++){
			sum+=t[i]-'0';
		}
		a[sum]++;
	}
	int cnt=0;
	for(int i=0;i<50;i++){
		if(a[i]!=0) cnt++;
	}
	cout<<cnt<<endl;
	int flag=0;
	for(int i=0;i<50;i++){
		if(a[i]!=0){
			if(flag) cout<<" ";
			cout<<i;
			flag=1;
		} 
	}
	return 0;
}
