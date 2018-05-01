#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	while(n--){
		stack<char> s;
		string str;
		getline(cin,str);
		for(int i=0;i<str.length();i++){
			char c=str[i];
			if(!s.empty()){
				char t=s.top();
				if(t=='[' && c==']' || t=='(' && c==')'){
					s.pop();
				}else{
					s.push(c);
				}
			}else{
				s.push(c);
			}
		}
		if(s.empty()) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
