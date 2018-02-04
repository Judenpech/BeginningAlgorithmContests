#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,team[1001]={0},name,score,x;
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d-%d %d",&name,&x,&score);
		team[name]+=score;
	}
	int max=1;
	for(int i=2;i<=1000;i++){
		if(team[i]>team[max]) max=i;
	}
	cout<<max<<" "<<team[max];
	return 0;
}
