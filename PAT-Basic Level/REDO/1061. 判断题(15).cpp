#include <iostream>
using namespace std;
void input(int a[],int m){
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	int a[105],b[105];
	input(a,m);
	input(b,m);
	while(n--){
		int t,sum=0;
		for(int i=0;i<m;i++){
			cin>>t;
			if(t==b[i]) sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
