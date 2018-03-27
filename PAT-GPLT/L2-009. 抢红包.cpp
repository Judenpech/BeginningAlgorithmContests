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

struct Person{
	int bh;
	int hb=0;//红包
	int cnthb=0; //红包数
	int money=0; //金额
}p[10004];

bool cmp(Person a,Person b){
	if(a.money==b.money){
		if(a.cnthb==b.cnthb){
			return a.bh<b.bh;
		}else{
			return a.cnthb>b.cnthb;
		}
	}else{
		return a.money>b.money;
	}
}
using namespace std;
int flagP[10004];
int main(){
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++){
		memset(flagP,0,sizeof(int)*n);
		cin>>k;
		p[i].bh=i+1;
		int n1,p1;
		while(k--){
			cin>>n1>>p1;
			if(flagP[n1-1]==0){
				p[n1-1].cnthb++;
				p[n1-1].money+=p1;
				p[i].money-=p1;
				flagP[n1-1]=1;
			}
		}
	}
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++){
		printf("%d %.2lf\n",p[i].bh,p[i].money/100.0);
	}
	return 0;
} 
