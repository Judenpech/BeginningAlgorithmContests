#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int flag=1;
	for(int i=10;i<=100;i++){
		if(i%3==a && i%5==b && i%7==c){
			cout<<i<<endl;
			flag=0;
			break;
		}
	}
	if(flag) cout<<"No answer"<<endl;
	return 0;
}
