#include <iostream>
using namespace std;

int main(){
	int n,a,b,max;
	while(cin>>n && n!=0){
		max=-1;
		while(n--){
			cin>>a>>b;
			if(a+b>max) max=a+b;
		}
		cout<<max<<endl;
	}
	return 0;
}
