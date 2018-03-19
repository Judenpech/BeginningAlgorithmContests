#include <iostream>
using namespace std;
int main(){
	int p,a;
	int a1,a2,a3,b1,b2,b3;
	scanf("%d.%d.%d %d.%d.%d",&a1,&a2,&a3,&b1,&b2,&b3);
	p=a1*17*29+a2*29+a3;
	a=b1*17*29+b2*29+b3;
	int flag=1;
	if(p>a){
		flag=0;
		p=p+a;
		a=p-a;
		p=p-a;
	}
	int change=a-p;
	int c1=0,c2=0,c3=0;
	c1=change/(17*29);
	change-=c1*(17*29);
	c2=change/29;
	change-=c2*29;
	c3=change;
	if(flag) printf("%d.%d.%d\n",c1,c2,c3);
	else printf("-%d.%d.%d\n",c1,c2,c3);
	return 0;
}
