#include <iostream>
#include <algorithm>
#define maxn 100
using namespace std;

int main(){
	int a[maxn];
	int t,n,tmp,p;
	cin>>t;
	while(t--){
		cin>>n;
		p=n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		tmp=a[0];
		for(int i=1;i<n;i++){
			if(tmp==a[i]){
				p--;
				a[i]=0;
			} 
			else tmp=a[i];
		}
		cout<<p<<endl;
		for(int i=0;i<n;i++){
			if(i!=0) cout<<" ";
			if(a[i]!=0) cout<<a[i];
		}
		cout<<endl;
	}
	
	return 0;
}
