#include <iostream>
#include <stack>

using namespace std;
int main(){
	int a,b,d;
	cin>>a>>b>>d;
	int tmp=a+b;
	stack<int> s;
	do{
		s.push(tmp%d);
		tmp/=d;
	}while(tmp!=0);   //ע��a��bΪ0����� 
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
	return 0;
}
