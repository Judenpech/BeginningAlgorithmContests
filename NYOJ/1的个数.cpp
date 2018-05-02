#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	while(n--){
		cin>>m;
		int cnt=0;
		while(m!=0){
			if(m%2==1){
				cnt++;
			}
			m/=2;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
