#include <iostream>
#include <string>
const int N=9989899;
using namespace std;

int p[N]={0};

void setPrime(){
	for(int i=2;i<=N;i++){
  		if(p[i]==0){
			for(int j=i+i;j<=N;j+=i){
				p[j]=1;
			} 
		}
	}
}

int main(){
	int a,b;
	cin>>a>>b;
	setPrime();
	for(int i=a;i<=b && i<=9989899;i++){
		if(p[i]==0){
			int t=i;
			int c=0;
			while(t!=0){
				c=c*10+t%10;
				t/=10;
			}
			if(i==c) cout<<i<<endl;
		}
	}
	return 0;
}
