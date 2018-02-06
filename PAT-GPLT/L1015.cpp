#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	char c;
	cin>>n>>c;
	for(int i=1;i<=floor(n/2.0+0.5);i++){//ËÄÉáÎåÈë£ºfloor(x+0.5)
		for(int j=1;j<=n;j++){
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}
