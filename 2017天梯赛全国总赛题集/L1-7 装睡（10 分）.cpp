#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	string s;
	while(n--){
		cin>>s>>a>>b;
		if(a<15 || a>20 || b<50 || b>70) cout<<s<<endl;
	}
	return 0;
}
