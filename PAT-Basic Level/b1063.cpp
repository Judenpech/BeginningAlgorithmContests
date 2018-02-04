#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n,a,b;
	double c,max=0;
	cin>>n;
	while(n--){
		cin>>a>>b;
		c=sqrt(a*a+b*b);
		max=c>max?c:max;
	}
	printf("%.2f",max);
	return 0;
}
