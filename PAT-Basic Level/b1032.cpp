#include <iostream>
using namespace std;

int main(){
	int n,tmp,score,num[100000]={0};
	cin>>n;
	while(n--){
		cin>>tmp>>score;
		num[tmp]+=score;
	}
	int max=0;
	for(int i=1;i<100000;i++){
		if(num[i]>num[max]) max=i;
	}
	cout<<max<<" "<<num[max];
	return 0;
}
