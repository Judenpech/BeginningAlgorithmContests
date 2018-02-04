#include <iostream>
using namespace std;

int main(){
	int n,left,maxC,line=1;
	char c;
	cin>>n>>c;
	left=n-1;
	n-=1;
	for(int i=3;;i+=2){
		n-=2*i;
		if(n>=0){
			line++;
			left-=2*i;
			maxC=i;
		} 
		else break;
	}
	for(int i=line;i>0;i--){
		for(int j=line-i;j>0;j--){
			cout<<" ";
		}
		for(int k=maxC;k>0;k--){
			cout<<c;
		}
		cout<<endl;
		maxC-=2;
	}
	for(int i=2;i<=line;i++){
		for(int j=line-i;j>0;j--){
			cout<<" ";
		}
		for(int k=2*i-1;k>0;k--){
			cout<<c;
		}
		cout<<endl;
	}
	cout<<left;
} 
