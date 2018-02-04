#include <iostream>

using namespace std;

int main(){
	int num[10];
	for(int i=0;i<10;i++){ 
		cin>>num[i];
	}
	for(int i=1;i<10;i++){  //第一个数字不能为0，所以输出除0外的最小数 
		if(num[i]!=0){
			cout<<i;
			num[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++){
		for(int j=num[i];j>0;j--){
			cout<<i;
		}
	}
	return 0;
}
