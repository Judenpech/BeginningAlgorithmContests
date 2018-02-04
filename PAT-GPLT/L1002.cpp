#include <iostream>
using namespace std;
int main(){
	int n,layer=1;
	char c;
	cin>>n>>c;
	for(int i=3,t=n-1;t>0;i+=2){
		t-=2*i;
		if(t>=0) layer++;
	}
	for(int i=layer;i>0;i--){
		for(int j=0;j<layer-i;j++){
			cout<<" ";
		}
		for(int k=0;k<2*i-1;k++){
			cout<<c;
			n--;
		}
		cout<<endl;
	}
	for(int i=1;i<layer;i++){
		for(int j=1;j<layer-i;j++){
			cout<<" ";
		}
		for(int k=0;k<2*i+1;k++){
			cout<<c;
			n--;
		}
		cout<<endl;
	}
	cout<<n<<endl;
	return 0;
}
