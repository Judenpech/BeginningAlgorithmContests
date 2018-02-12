#include <iostream>
using namespace std;
typedef long long ll;
int main(){
	int t,cnt=1;
	ll a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		if(a+b>c){
			printf("Case #%d: true\n",cnt++);
		}else{
			printf("Case #%d: false\n",cnt++);
		}
	}
	return 0;
}
