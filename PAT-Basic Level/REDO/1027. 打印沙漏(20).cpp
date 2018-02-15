#include <iostream>
using namespace std;
int main(){
	int n,layer=1;
	char c;
	cin>>n>>c;
	for(int i=3,p=n-1;;i+=2){
		p-=2*i;
		if(p<0){
			n=p+2*i;
			break;
		} 
		layer++;
	}
	for(int i=0;i<layer;i++){
		for(int j=0;j<i;j++) cout<<" ";
		for(int k=0;k<2*(layer-i)-1;k++) cout<<c;
		cout<<endl;
	}
	for(int i=layer-2;i>=0;i--){
		for(int j=0;j<i;j++) cout<<" ";
		for(int k=0;k<2*(layer-i)-1;k++) cout<<c;
		cout<<endl;
	}
	cout<<n<<endl;
	return 0;
}
