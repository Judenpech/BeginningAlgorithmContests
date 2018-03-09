#include <iostream>
using namespace std;

int main(){
	int m,n,a,b,c;
	cin>>m>>n>>a>>b>>c;
	int arr[505];
	while(m--){
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>=a && arr[i]<=b) arr[i]=c;
		}
		for(int i=0;i<n;i++){
			if(i!=0) cout<<" ";
			printf("%03d",arr[i]);
		}
		cout<<endl;
	}
	return 0;
}
