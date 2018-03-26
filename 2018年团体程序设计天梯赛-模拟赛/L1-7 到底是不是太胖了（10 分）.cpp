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
int main(){
	int n;
	cin>>n;
	int h,w;
	double bz;
	while(n--){
		cin>>h>>w;
		bz=(h-100)*0.9*2;
		if(abs(w-bz)<bz*0.1){
			cout<<"You are wan mei!"<<endl;
		}else{
			if(w>bz){
				cout<<"You are tai pang le!"<<endl;
			}else{
				cout<<"You are tai shou le!"<<endl;
			}
		}
	}
	return 0;
} 
