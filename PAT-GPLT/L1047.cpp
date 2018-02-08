#include <iostream>
using namespace std;
int main(){
	int n;
	char s[5];
	int a,b;
	cin>>n;
	while(n--){
		cin>>s>>a>>b;
		if(a<15 || a>20 || b<50 || b>70) cout<<s<<endl;
	}
	return 0;
}
