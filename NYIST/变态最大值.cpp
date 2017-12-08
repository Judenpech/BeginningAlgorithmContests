#include <iostream>
#define inf 10005
using namespace std;
int main(){
	int n,t,max,flag;
	int a[inf];
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>a[i];	
		}
		flag=1;
		max=-inf;
		for(int i=0;i<n;i+=3){
			if(flag){
				t=a[i]>a[i+1]?(a[i]>a[i+2]?a[i]:a[i+2]):(a[i+1]>a[i+2]?a[i+1]:a[i+2]);	
				flag=0;
			}else{
				t=a[i]<a[i+1]?(a[i]<a[i+2]?a[i]:a[i+2]):(a[i+1]<a[i+2]?a[i+1]:a[i+2]);	
				flag=1;
			}
			max=t>max?t:max;	
		}
		cout<<max<<endl;
	}
	return 0;
}
