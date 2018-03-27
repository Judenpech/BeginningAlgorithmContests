#include <iostream>
#include <set>
using namespace std;
int pre[10004];
int findPre(int n){
	if(n!=pre[n]) return pre[n]=findPre(pre[n]);
	return n;
}
int main(){//并查集
	int n,k;
	for(int i=0;i<10000;i++) pre[i]=i;//自成一派
	cin>>n;
	set<int> s1;//统计社区总人数
	for(int i=0;i<n;i++){
		cin>>k;
		int t,ppre;
		cin>>ppre;
		s1.insert(ppre);
		ppre=findPre(ppre);//第一个人的掌门为掌门人
		for(int j=1;j<k;j++){
			cin>>t;
			s1.insert(t);
			pre[findPre(t)]=ppre;
		}
	}
	set<int> s2;//统计圈子数
	set<int>::iterator it;
	for(it=s1.begin();it!=s1.end();it++){
		s2.insert(findPre(*it));
	}
	cout<<s1.size()<<" "<<s2.size()<<endl;
	int q;
	cin>>q;
	int a,b;
	while(q--){
		cin>>a>>b;
		if(findPre(a)==findPre(b)) cout<<"Y"<<endl;
		else cout<<"N"<<endl;
	}
	return 0;
}
