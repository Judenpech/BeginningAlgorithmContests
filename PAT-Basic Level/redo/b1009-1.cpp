#include <iostream>
#include <string>

using namespace std;
void printReverse(int flag){ //�ݹ����ȳ� 
	string s;
	cin>>s;
	if(cin.get()!='\n') printReverse(1);
	cout<<s;
	if(flag) cout<<" ";
}
int main(){
	printReverse(0);
	return 0;
}
