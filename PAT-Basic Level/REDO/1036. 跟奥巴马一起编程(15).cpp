#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,col;
	char c;
	cin>>n>>c;
	col=floor((double)n/2+0.5);
	for(int i=0;i<col;i++){
		if(i==0 || i==col-1){
			for(int j=0;j<n;j++) cout<<c;
		}else{
			cout<<c;
			for(int j=1;j<n-1;j++) cout<<" ";
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}
