#include <iostream>
using namespace std;
int main(){
	int n,t,ji=0,ou=0;
	cin>>n;
	while(n--){
		cin>>t;
		if(t%2==0) ou++;
		else ji++;
	}
	cout<<ji<<" "<<ou;
	return 0;
}
