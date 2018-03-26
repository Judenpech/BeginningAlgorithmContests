#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>
#include <queue>

typedef long long ll;

using namespace std;
int main(){
	int cnt=0;
	string s;
	string a,b;
	while(cin>>s && s!="."){
		cnt++;
		if(cnt==2) a=s;
		else if(cnt==14) b=s;
	}
	if(cnt<2){
		cout<<"Momo... No one is for you ...";
	}else if(cnt>=2 && cnt<14){
		cout<<a<<" is the only one for you...";
	}else{
		cout<<a<<" and "<<b<<" are inviting you to dinner...";
	}
	return 0;
} 
