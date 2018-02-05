#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string n,a[11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"};
	cin>>n;
	for(int i=0;i<n.length();i++){
		if(i!=0) cout<<" ";
		if(n[i]=='-') cout<<a[10];
		else cout<<a[n[i]-48];
	}
	return 0;
}
