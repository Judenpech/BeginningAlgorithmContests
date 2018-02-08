#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n,m,x,y,z;
	double dist;
	cin>>n;
	while(n--){
		cin>>m>>x>>y>>z;
		dist=(x*m/(double)(y-x))*z;
		cout<<setprecision(2)<<fixed<<dist<<endl;
	}
	return 0;
}
