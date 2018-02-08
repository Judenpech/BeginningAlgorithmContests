//J
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,s,h,vx,vy;
	double t1=0;
	cin>>t;
	while(t--){
		cin>>s>>h>>vx>>vy;
		t1=vy*(s/vx)-0.5*10.0*(s/vx)*(s/vx);  
		if(t1>=h) cout<<"good done!"<<endl;
		else cout<<"poor Merida!"<<endl;
	}
	return 0;
}
