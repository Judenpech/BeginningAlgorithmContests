#include <iostream>
#include <stdio.h>
//#include <cstring>
//#define maxn 100000005
using namespace std;

int main(){
	//string n;
	double a,b,c,n;
	while(cin>>a>>b>>c){
		//n="0";
		for(int i=3;i<=99;i++){
			//cout<<a<<" "<<b<<" "<<c<<endl;
			n=a+b+c;
			a=b;
			b=c;
			c=n;
		}
		//cout<<n<<endl;
		printf("%.0lf\n",n);
	}
	return 0;
}
