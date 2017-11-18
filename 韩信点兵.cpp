#include <iostream>
using namespace std;
int main(){
	int a,b,c,s,flag,cnt=1;
	//while(cin>>a>>b>>c){
	while(scanf("%d %d %d",&a,&b,&c)==3){
		flag=0;
		for(int i=10;i<=100;i++){
			if(i%3==a && i%5==b && i%7==c){
				s=i;
				flag=1;
				break;
			}
		}
		if(flag){
			cout<<"Case "<<cnt<<": "<<s<<endl;
		}else{
			cout<<"Case "<<cnt<<": No answer";
		}
		cnt++;
	}
	return 0;
}
