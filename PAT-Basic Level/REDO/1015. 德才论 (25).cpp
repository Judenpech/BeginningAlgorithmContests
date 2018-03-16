#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=100005;
struct dc{
	int zkzh;
	int de;
	int cai;
	int sum;
};
dc a[maxn],b[maxn],c[maxn],d[maxn];
int main(){
	int n,l,h,m=0;
	cin>>n>>l>>h;
	int t1,t2,t3;
	int lena=0,lenb=0,lenc=0,lend=0;
	for(int i=0;i<n;i++){
		cin>>t1>>t2>>t3;
		if(t2>=l && t3>=l){
			if(t2>=h && t3>=h){
				a[lena].zkzh=t1;
				a[lena].de=t2;
				a[lena].cai=t3;
				a[lena].sum=t1+t2;
				lena++;
			}else if(t2>=h && t3<h){
				b[lenb].zkzh=t1;
				b[lenb].de=t2;
				b[lenb].cai=t3;
				b[lenb].sum=t1+t2;
				lenb++;
			}else if(t2<h && t3<h && t2>t3){
				c[lenc].zkzh=t1;
				c[lenc].de=t2;
				c[lenc].cai=t3;
				c[lenc].sum=t1+t2;
				lenc++;
			}else{
				d[lend].zkzh=t1;
				d[lend].de=t2;
				d[lend].cai=t3;
				d[lend].sum=t1+t2;
				lend++;
			}
			m++;
		}
	}
	//sort(a,a+lena);
	return 0;
}
