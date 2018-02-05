#include <iostream>
using namespace std;
int main(){
	int a,b,sum=0;
	cin>>a>>b;
	for(int i=a,j=0;i<=b;i++){
		sum+=i;
		printf("%5d",i);
		if(++j%5==0) cout<<endl;
	}
	if((b-a+1)%5!=0) cout<<endl;
	cout<<"Sum = "<<sum;
	return 0;
}
