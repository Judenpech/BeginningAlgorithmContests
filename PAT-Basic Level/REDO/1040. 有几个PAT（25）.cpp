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
			cnt=(cnt+(cntp*cntt)%mod)%mod;//����ÿһ��A����ǰ���P�����ͺ����T�����ĳ˻������ܹ��ɵ�PAT�ĸ�����Ȼ����Ӽ���
		}
	}
	cout<<cnt<<endl;
	return 0;
}
