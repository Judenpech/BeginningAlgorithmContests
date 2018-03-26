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
	string n,a,b;
	cin>>n>>a>>b;
	int len=a.length();
	for(int i=0;i<21-len;i++){
		a='0'+a;
	}
	len=b.length();
	for(int i=0;i<21-len;i++){
		b='0'+b;
	}
	int t=0;
	for(int i=20,j=n.length()-1;i>=0;i--){
		a[i]=a[i]+b[i]+t-'0';
		if(n[j]=='0') n[j]+=10;
		t=(a[i]-'0')/(n[j]-'0');
		a[i]=(a[i]-'0')%(n[j]-'0')+'0';
		j--;
	}
	int flag=0;
	for(int i=0;i<21;i++){
		if(a[i]!='0') flag=1;
		if(flag) cout<<a[i];
	}
	if(flag==0) cout<<'0';
	return 0;
} 
