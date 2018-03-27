#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int pre[10000];
struct Person{
	int renkou;
	int minNo=-1;
	double pinjunArea;
	double pinjunHouse;
	int cntHouse=0;
	double area=0;
}ps[10000],ans[10000];
bool cmp(Person a,Person b){
	if(a.pinjunArea==b.pinjunArea){
		return a.minNo<b.minNo;
	}
	return a.pinjunArea>b.pinjunArea;
}
int Find(int n){
	if(n!=pre[n]) pre[n]=Find(pre[n]);
	return pre[n];
}
int main(){//²¢²é¼¯
	int n;
	cin>>n;
	for(int i=0;i<10000;i++) pre[i]=i;
	set<int> s1;
	for(int i=0;i<n;i++){
		int no,fu,mu,k,son;
		cin>>no>>fu>>mu>>k;
		s1.insert(no);
		no=Find(no);
		if(fu!=-1){
			s1.insert(fu);
			pre[Find(fu)]=no;
		} 
		if(mu!=-1){
			s1.insert(mu);
			pre[Find(mu)]=no;
		} 
		while(k--){
			cin>>son;
			pre[Find(son)]=no;
			s1.insert(son);
		}
		int house;
		double area;
		cin>>house>>area;
		ps[no].cntHouse+=house;
		ps[no].area+=area;
		
	}
	set<int> s2;
	set<int>::iterator it;
	for(it=s1.begin();it!=s1.end();it++){
		s2.insert(Find(*it));
	}
	cout<<s2.size()<<endl;;
	for(it=s2.begin();it!=s2.end();it++){
		int t=*it;
		for(int i=0;i<10000;i++){
			int p=Find(i);
			if(p==t){
				ps[t].renkou++;
				if(p>ps[t].minNo) ps[t].minNo=p;
			} 
		}
	}
	int idx=0;
	for(it=s2.begin();it!=s2.end();it++){
		int t=*it;
		ps[t].pinjunArea=ps[t].area/ps[t].renkou;
		ps[t].pinjunHouse=ps[t].cntHouse/ps[t].renkou;
		ans[idx]=ps[t];
	}
	sort(ps,ps+s2.size(),cmp);
	for(it=s2.begin();it!=s2.end();it++){
		int t=*it;
		printf("%04d %d %.03f %.03f\n",ps[t].minNo,ps[t].renkou,ps[t].pinjunHouse,ps[t].pinjunArea);
	}
	return 0;
}
