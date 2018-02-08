#include <iostream>
#include <cstring>
#define maxn 55
using namespace std;
int main(){
	int n,a[maxn];
	string b[maxn];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n/2;i++){
		for(int j=n-1;j>=0;j--){
			if(a[i]!=a[j] && a[j]!=2){
				cout<<b[i]<<" "<<b[j]<<endl;
				a[j]=2;
				break;
			}
		}
	}
	return 0;
}
