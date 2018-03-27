#include <iostream>
#include <set>
using namespace std;
int pre[10004];
int findPre(int n){
	if(n!=pre[n]) return pre[n]=findPre(pre[n]);
	return n;
}
int main(){//���鼯
	int n,k;
	for(int i=0;i<10000;i++) pre[i]=i;//�Գ�һ��
	cin>>n;
	set<int> s1;//ͳ������������
	for(int i=0;i<n;i++){
		cin>>k;
		int t,ppre;
		cin>>ppre;
		s1.insert(ppre);
		ppre=findPre(ppre);//��һ���˵�����Ϊ������
		for(int j=1;j<k;j++){
			cin>>t;
			s1.insert(t);
			pre[findPre(t)]=ppre;
		}
	}
	set<int> s2;//ͳ��Ȧ����
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
