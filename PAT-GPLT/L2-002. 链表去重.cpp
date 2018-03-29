#include <iostream>
#include <cmath>
using namespace std;
struct Node{
	int key;
	int next;
}node[100005];
int Key[10005]={0};
int main(){
	int l1,l2=-1,n;
	cin>>l1>>n;
	int t;
	for(int i=0;i<n;i++){
		cin>>t;
		cin>>node[t].key>>node[t].next;
	}cout<<endl;
	int now=l1,now1;int cnt=0;
	while(node[now].next!=-1){
		if(Key[abs(node[now].key)]==0){
			Key[abs(node[now].key)]=1;
			if(Key[abs(node[node[now].next].key)]==0){
				printf("%05d %d %05d\n",now,node[now].key,node[now].next);
				now=node[now].next;
			}else{
				if(l2==-1){
					l2=now;
					now1=l2;
				}
				node[now].next=node[node[now].next].next;
				printf("%05d %d %05d\n",now,node[now].key,node[now].next);
				now=node[now].next;
				node[now1].next=now;
				now1=node[now1].next;
			}
		}else{
			if(Key[abs(node[node[now].next].key)]==0){
				printf("%05d %d %05d\n",now,node[now].key,node[now].next);
				now=node[now].next;
			}else{
				if(l2==-1){
					l2=now;
					now1=l2;
				}
				node[now].next=node[node[now].next].next;
				printf("%05d %d %05d\n",now,node[now].key,node[now].next);
				now=node[now].next;
				node[now1].next=now;
				now1=node[now1].next;
			}
		}
	}
	return 0;
}
