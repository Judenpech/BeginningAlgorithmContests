#include <iostream>
using namespace std;
int main(){
	int c,n,flag=0;
	while(cin>>c>>n){
		if(c*n!=0){
			if(flag) cout<<" ";
			cout<<c*n<<" "<<n-1;
			flag=1;
		}
	}
	if(!flag) cout<<"0 0";
	return 0;
}
