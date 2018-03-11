#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s,ans;
	getchar();
	while(n--){
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			if(s[i]=='T'){
				ans+=(s[i-2]-64+'0');
				break;
			} 
		}
	}
	cout<<ans<<endl;
	return 0;
}
