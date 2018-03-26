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
int main(){//2
	int hh,mm;
	scanf("%d:%d",&hh,&mm);
	if(hh>=0 && hh<=12){
		printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
	}else{
		hh-=12;
		if(mm>0) hh++;
		for(int i=0;i<hh;i++){
			cout<<"Dang";
		}
	}
	return 0;
} 
