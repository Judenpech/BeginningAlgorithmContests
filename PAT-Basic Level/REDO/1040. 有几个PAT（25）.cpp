#include <iostream>
#include <string>
using namespace std;
const int mod=1000000007;
int main(){
	string s;
	cin>>s;
	int cnt=0,cntp=0,cntt=0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='T') cntt++;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]=='P') cntp++;
		if(s[i]=='T') cntt--;
		if(s[i]=='A'){
			cnt=(cnt+(cntp*cntt)%mod)%mod;//对于每一个A，它前面的P个数和后面的T个数的乘积就是能构成的PAT的个数。然后相加即可
		}
	}
	cout<<cnt<<endl;
	return 0;
}
