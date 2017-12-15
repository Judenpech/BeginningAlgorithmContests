#include <iostream>
using namespace std;
int main(){
	long long a,b,c;
	int n,cnt=1;
	cin>>n;
	while(n--){
		cin>>a>>b>>c;
		if(a+b>c) cout<<"Case #"<<cnt<<": true"<<endl;
		else cout<<"Case #"<<cnt<<": false"<<endl;
		cnt++;
	}
	return 0;
}
