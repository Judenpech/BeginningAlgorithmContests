#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <stack>
#include <queue>

typedef long long ll;

using namespace std;
double a[100005]={0};
int b[100005]={0};
int main(){//wa
	int n,k;
	double z,r;
	cin>>n>>z>>r;
	a[0]=z;
	int t;
	int t2;
	for(int i=0;i<n;i++){
		cin>>k;
		if(k==0){
			cin>>t;
			b[i]=1;
			a[i]*=t;
		}else{
			if(a[i]==0){
				t2*=(1-r*0.01);
			}
			for(int j=0;j<k;j++){
				cin>>t;
				if(a[i]==0){
					a[t]=t2*(1-r*0.01);
				}else{
					a[t]=a[i]*(1-r*0.01);
				}
			}
		}
	}
	double sum=0;
	int cnt=0;
	for(int i=0;i<n;i++){cout<<a[i]<<endl;
		if(b[i]==1){
			sum+=a[i];
			cnt++;
		}
	}
	printf("%.0f",sum/cnt);
	return 0;
} 
