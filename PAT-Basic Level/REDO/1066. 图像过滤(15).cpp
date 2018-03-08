#include <iostream>
using namespace std;

int main(){
	int m,n,a,b,c;
	cin>>m>>n>>a>>b>>c;
	int t;
	while(m--){
		for(int i=0;i<n;i++){
			cin>>t;
			if(i!=0) cout<<" ";
			if(t>=a && t<=b) t=c;
			printf("%03d",t);
		}
		cout<<endl;
	}
	return 0;
}
