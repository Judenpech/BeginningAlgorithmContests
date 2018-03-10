#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	double t,max=-1;
	while(n--){
		cin>>a>>b;
		t=sqrt(a*a+b*b);
		if(t>max) max=t;
	}
	printf("%.2f",max);
	return 0;
}
