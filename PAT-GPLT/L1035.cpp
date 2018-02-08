#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char t[15],a[15],b[15];
	int i=0;
	while(cin>>t && t[0]!='.'){
		i++;
		if(i==2){
			strcpy(a,t);
		}
		if(i==14){
			strcpy(b,t);
		}
	}
	if(i>14) cout<<a<<" and "<<b<<" are inviting you to dinner..."<<endl;
	else if(i>1) cout<<a<<" is the only one for you..."<<endl;
	else cout<<"Momo... No one is for you ..."<<endl;
	return 0;
}
