#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t,n,cnt;
	cin>>t;
	while(t--){
		cin>>n;
		cnt=0;
		for(int i=2;i<=sqrt(n+1);i++){
			if((n+1)%i==0) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
/*
i*j+i+j =N �����۲죬���Ա���Ϊi*j+i+j+1=N+1,Ҳ����˵�����Խ�һ������Ϊ(i+1)*(j+1)=N+1
����i��2�жϵ�sqrt(n+1)���� 
*/
