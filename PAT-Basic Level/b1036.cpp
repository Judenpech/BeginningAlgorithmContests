#include <iostream>
using namespace std;

int main(){
	int n;
	char c;
	cin>>n>>c;
	int tmp=n-2;
	for(int i=1;i<=(n+1)/2;i++){
		if(i==1 || i==(n+1)/2){
			for(int j=0;j<n;j++) cout<<c;
		}else{
			cout<<c;
			for(int j=n-2;j>0;j--){
				cout<<" ";
			}
			cout<<c;
		}
		cout<<endl;	
	}
	return 0;
}
