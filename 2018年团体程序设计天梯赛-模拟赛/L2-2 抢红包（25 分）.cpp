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
	int hb=0;//hong bao
	int cnthb=0; //hong bao shu
	double money=0;
	int flagP[10004]={0};
}p[10004];//内存超限，改成1000可以拿19分

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
int main(){
	int n;
	cin>>n;
	int k;
	for(int i=0;i<n;i++){
		cin>>k;
		p[i].bh=i+1;
		int n1,p1;
		while(k--){
			cin>>n1>>p1;
			if(p[n1-1].flagP[i]==0){
				p[n1-1].cnthb++;
				p[n1-1].money+=p1;
				p[n1-1].flagP[i]=1;
				p[i].money-=p1;
			}
		}
	}
	sort(p,p+n,cmp);
	for(int i=0;i<n;i++){
		printf("%d %.2f\n",p[i].bh,p[i].money/100);
	}
	return 0;
} 
