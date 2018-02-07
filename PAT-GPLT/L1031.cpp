#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,h,w;
	double sW,ans;
	cin>>n;
	while(n--){
		cin>>h>>w;
		sW=(h-100)*0.9*2;
		ans=abs(w-sW)-sW*0.1;
		if(ans<0){
			cout<<"You are wan mei!"<<endl;
		}else{
			if(w>sW) cout<<"You are tai pang le!"<<endl;
			else cout<<"You are tai shou le!"<<endl;
		} 
	}
	return 0;
}
