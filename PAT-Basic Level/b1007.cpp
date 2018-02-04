#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,suShuDui=0;
	cin>>n;
	int suShu[10000],k=0,flag;
	for(int i=2;i<=n;i++){
		flag=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=0;
				break;
			} 
		}
		if(flag){
			suShu[k++]=i;
		}
	}
	for(int i=0;i<k-1;i++){
		if(suShu[i+1]-suShu[i]==2) suShuDui++;
	}
	cout<<suShuDui;
}
