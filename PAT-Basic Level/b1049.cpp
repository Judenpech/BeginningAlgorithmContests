#include <iostream>
using namespace std;

int main(){
	int n;
	double tmp,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		sum+=tmp*(n-i)*(i+1);
	}
	printf("%.2f",sum);
	return 0;
}
