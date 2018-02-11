#include <iostream>
#include <cstring>
using namespace std;
string pinyin[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
void print(int n,int flag){
	if(n>=10) print(n/10,1);
	cout<<pinyin[n%10];
	if(flag) cout<<" ";
}
int main(){
	string s;
	int sum=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		sum+=s[i]-48;
	}
	print(sum,0);
	return 0;
}
