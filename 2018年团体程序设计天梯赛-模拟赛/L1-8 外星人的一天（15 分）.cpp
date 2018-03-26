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
int main(){//9·Ö
	int n;
	cin>>n;
	int d,h,m;
	while(n--){
		scanf("%d %d:%d",&d,&h,&m);
		int sum=((d-1)*1440+h*60+m)/2;
		int h1=sum/60;
		int m1=sum%60;
		int d1;
		if(sum>=(d-1)*720 && sum>=720){
			d1=d/2;
		}else{
			d1=d;
		}
		if(h1>0 && m1>0){
			printf("%d %02d:%02d\n",d1,h1,m1);
		}else{
			printf("%d %02d:%02d\n",d,h,m);
		}
	}
	return 0;
} 
