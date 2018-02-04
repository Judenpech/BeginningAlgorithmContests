#include <iostream>
using namespace std;

int main(){
	int m,n,a,b,gray;
	int tmp;
	cin>>m>>n>>a>>b>>gray;
	while(m--){
		for(int j=0; j<n; j++){
			cin>>tmp;
			if(j!=0) cout<<" ";
			if(tmp>=a && tmp<=b){
				tmp=gray;
			}
			printf("%03d",tmp);
		}
		cout<<endl;
	} 
	return 0;
}
