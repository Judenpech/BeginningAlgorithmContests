#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a,int b){
	if(b>a){
		b=a+b;
		a=b-a;
		b=b-a;
	}
	int r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

void add(int a1,b1,a2,b2){
	int a3,b3,r,c;
	a3=a1*b2+a2*b1;
	b3=b1*b2;
	r=abs(gcd(a3,b3));
	a3/=r;
	b3/=r;
	if(abs(a3)>b3){
		c=a3/b3;
		a3=abs(a3)%b3;
	}
	if(a1<0){
		if(b1==1){
			printf("(%d) + ",a1);
		}else{
			printf("(%d/%d) + ",a1,b1);
		}
	}else{
		if(b1==1){
			printf("%d + ",a1);
		}else{
			printf("%d/%d + ",a1,b1);
		}
	}
}

void subtract(int a1,b1,a2,b2){
	int a3,b3,r,c;
	a3=a1*b2-a2*b1;
	b3=b1*b2;
	r=abs(gcd(a3,b3));
	a3/=r;
	b3/=r;
	if(abs(a3)>b3){
		c=a3/b3;
		a3=abs(a3)%b3;
	}
	if(a1<0){
		if(b1==1){
			printf("(%d) + ",a1);
		}else{
			printf("(%d/%d) + ",a1,b1);
		}
	}else{
		if(b1==1){
			printf("%d - ",a1);
		}else{
			printf("%d/%d - ",a1,b1);
		}
	}
}

void multiply(int a1,b1,a2,b2){
	
}

void divide(int a1,b1,a2,b2){
	
}

int main(){
	int a1,b1,a2,b2;
	int d1,d2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	d1=gcd(abs(a1),abs(b1));
	a1/=d1;
	b1/=d1;   cout<<a1<<"/"<<b1<<endl;
	d2=gcd(abs(a2),abs(b2));
	a2/=d2;
	b2/=d2;   cout<<a2<<"/"<<b2;
	add(a1,b1,a2,b2);
	subtract(a1,b1,a2,b2);
	multiply(a1,b1,a2,b2);
	divide(a1,b1,a2,b2);
	return 0;
}
