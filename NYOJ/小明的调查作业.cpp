#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int a[1005];
int main(){
	int n,t;
	cin>>n;
	set<int> s;
	while(n--){
		cin>>t;
		s.insert(t);
	}
	cout<<s.size()<<endl;
	set<int>::iterator it;
	int p=0;
	for(it=s.begin();it!=s.end();it++){
		a[p++]=*it;
	}
	sort(a,a+s.size());
	for(int i=0;i<s.size();i++){
		if(i!=0) cout<<" ";
		cout<<a[i];
	}
	return 0;
}
