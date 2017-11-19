#include <iostream>
using namespace std;
int f(int a){
	if(a/100==(a%100)/10 || a/100==a%10 || (a%100)/10==a%10) return 1;
	else return 0;
}
int cmp(int m,int n){
	int a=m/100,b=(m%100)/10,c=m%10,d=n/100,e=(n%100)/10,f=n%10;
	if(a==d||a==e||a==f||b==d||b==e||b==f||c==d||c==e||c==f) return 1;
	else return 0;
}
int main(){
	int a,b,c;
	for(int i=123;i<=987/3;i++){
		a=i;
		b=2*i;
		c=3*i;
		if(f(a)||f(b)||f(c)) continue;
		if(cmp(a,b)||cmp(a,c)||cmp(b,c)) continue;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
} 
