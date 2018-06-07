#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[10];
	while(n--){
		for(int i=0;i<10;i++){
			cin>>a[i];
		}
		cin>>m;
		m+=30;
		int cnt=0;
		for(int i=0;i<10;i++){
			if(a[i]<=m) cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
