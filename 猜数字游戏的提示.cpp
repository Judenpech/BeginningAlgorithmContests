#include <iostream>
#define maxn 1001
using namespace std;
int main(){
	int a[maxn],b[maxn];
	int n,p,q,c1,c2,cnt=1;
	while(cin>>n && n!=0){
		cout<<"Game "<<cnt++<<":"<<endl;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		while(cin>>b[0]){
			p=0;q=0;
			for(int i=1;i<n;i++){
				cin>>b[i];
			}
			if(b[0]==0) break;
			for(int i=0;i<n;i++){
				if(a[i]==b[i]) p++;
			}
			
			for(int i=1;i<=9;i++){
				c1=0;c2=0;
				for(int j=0;j<n;j++){
					if(i==a[j]) c1++;
					if(i==b[j]) c2++;
				}
				if(c1<c2) q+=c1;
				else q+=c2; 
			}
			cout<<"("<<p<<","<<q-p<<")"<<endl;
		}
	}
	return 0;
}
