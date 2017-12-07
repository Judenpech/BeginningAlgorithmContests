#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char a[]={"OOTTFFSSEN"};
	char n[15];
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=strlen(n)-1;i>=0;i--){
			cout<<a[n[i]-48];
		}
		cout<<endl;
	}
	return 0;
}
