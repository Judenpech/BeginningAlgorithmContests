#include <iostream>
using namespace std;
int main(){
	int n,b[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char a[18],m[11]={'1','0','X','9','8','7','6','5','4','3','2'};
	long long z;
	cin>>n;
	int flag=1;
	while(n--){
		cin>>a;
		z=0;
		for(int i=0;i<17;i++){
			z+=(a[i]-48)*b[i];
		}
		if(m[z%11]!=a[17]){
			cout<<a<<endl;
			flag=0;
		}
	}
	if(flag) cout<<"All passed"<<endl;
	return 0;
}
