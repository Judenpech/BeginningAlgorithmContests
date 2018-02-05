#include <iostream>
#include <cmath>
#define maxn 105
using namespace std;

long long lcmB=1;
int lcm(long long lcmA){ //����С������
	long long a,b,r;
	a=lcmA;b=lcmB;
	r=lcmA%lcmB;
	while(r!=0){
		lcmA=lcmB;
		lcmB=r;
		r=lcmA%lcmB;
	}
	lcmB=a*b/lcmB;
	return lcmB;
}

int gcd(long long a,long long b){//�����Լ��
	long long r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main(){
	int n;
	long long a[maxn]={0},b[maxn]={0},c[3]={0},fenMu; //a���ӣ�b��ĸ�����:c[0]���ӣ�c[1]��ĸ��c[2]��������
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%lld/%lld",&a[i],&b[i]);
		if(a[i]!=0 && b[i]!=0) fenMu=lcm(b[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0 && b[i]!=0){
   			a[i]=a[i]*(fenMu/b[i]);
			c[0]+=a[i];
		}
	}
	if(c[0]==0) cout<<"0";
	else{
		long long r=gcd(abs(c[0]),fenMu);
		c[1]=fenMu/r;
		c[2]=c[0]/fenMu;
		if(c[0]<0) c[0]=c[0]/r+abs(c[2])*c[1];
		else c[0]=c[0]/r-abs(c[2])*c[1];

		if(c[2]!=0){
			cout<<c[2];
			if(c[0]!=0) cout<<" ";
		}
		if(c[0]!=0) cout<<c[0]<<"/"<<c[1];
	}
	return 0;
}
