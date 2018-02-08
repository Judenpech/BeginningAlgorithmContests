#include <iostream>
using namespace std;
int main(){
	int n;
	char sex;
	double h,ans;
	cin>>n;
	while(n--){
		cin>>sex>>h;
		if(sex=='M'){
			ans=h/1.09;
		}else{
			ans=h*1.09;
		}
		printf("%.2f\n",ans);
	}
	return 0;
}
