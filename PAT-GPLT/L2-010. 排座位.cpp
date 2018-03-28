#include <iostream>
using namespace std;
int pre[105];
int mp[105][105];
int Find(int n){
	if(n!=pre[n]) return pre[n]=Find(pre[n]);
	return pre[n];
}
void Union(int x,int y){
	int a=Find(pre[x]),b=Find(pre[y]);
	if(a!=b) pre[a]=b;
}
int main(){//²¢²é¼¯
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) pre[i]=i;
	for(int i=0;i<m;i++){
		int x,y,r;
		cin>>x>>y>>r;
		mp[x][y]=mp[y][x]=r;
		if(r==1){
			Union(pre[x],pre[y]);
		}
	}
	int x,y;
	for(int i=0;i<k;i++){
		cin>>x>>y;
		if(mp[x][y]==1) cout<<"No problem"<<endl;
		else if(mp[x][y]==-1){
			if(Find(pre[x])==Find(pre[y])) cout<<"OK but..."<<endl;
			else cout<<"No way"<<endl;
		}else{
			cout<<"OK"<<endl;
		}
	}
	return 0;
}
