#include <iostream>
#include <string>

using namespace std;
void printReverse(int flag){ //递归后进先出 
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
