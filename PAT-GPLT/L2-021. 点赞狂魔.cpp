#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

struct User{
	string name;
	int cnt;
	double pj;
}u[105];
bool cmp(User a,User b){
	if(a.cnt==b.cnt) return a.pj<b.pj;
	return a.cnt>b.cnt;
}
int main(){
	int n,k,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u[i].name>>k;
		set<int> s1;
		for(int j=0;j<k;j++){
			cin>>t;
			s1.insert(t);
		}
		u[i].cnt=s1.size();
		u[i].pj=(double)k/s1.size();
	}
	sort(u,u+n,cmp);
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<u[i].name;
		if(i==2) break;
	}
	for(int i=0;i<3-n;i++){
		cout<<" -";
	}
	return 0;
}
