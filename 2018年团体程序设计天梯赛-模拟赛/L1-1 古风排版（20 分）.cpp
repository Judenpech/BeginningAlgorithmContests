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
	int n;
	string s;
	char ans[103][103];
	memset(ans,' ',sizeof(ans));
	cin>>n;
	getchar();
	getline(cin,s);
	int k=0,ii;
	int flag=0;
	for(int i=0;;i++){
		for(int j=0;j<n;j++){
			ans[j][i]=s[k++];
			if(k==s.length()){
				ii=i;
				flag=1;
				break;
			}
		}
		if(flag) break;
	}
	for(int i=0;i<n;i++){
		for(int j=ii;j>=0;j--){
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
} 
