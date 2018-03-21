#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
using namespace std;
struct YongHu{
	string name;
	int cnt;
	double pj;
}yh[105];
bool cmp(YongHu a,YongHu b){
	if(a.cnt==b.cnt){
		return a.pj<b.pj;
	}else{
		return a.cnt>b.cnt;
	}

}
int main(){
	int n,k,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>yh[i].name>>k;
		set<int> s1;
		for(int i=0;i<k;i++){
			cin>>t;
			s1.insert(t);
		}
		yh[i].cnt=s1.size();//cout<<yh[i].cnt<<endl;
		yh[i].pj=(double)k/s1.size();
	}
	sort(yh,yh+n,cmp);
	for(int i=0;i<n;i++){
		if(i!=0) cout<<" ";
		cout<<yh[i].name;
		if(i==2) break;
	}
	if(n<3){
		cout<<" ";
		for(int i=0;i<3-n;i++){
			if(i!=0) cout<<" ";
			cout<<"-";
		}
	}
	return 0;
}
