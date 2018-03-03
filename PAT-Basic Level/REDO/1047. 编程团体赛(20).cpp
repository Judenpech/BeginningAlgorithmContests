#include <iostream>
using namespace std;
int a[1005]={0};
int main(){
	int n;
	cin>>n;
	int team,member,score;
	while(n--){
		scanf("%d-%d %d",&team,&member,&score);
		a[team]+=score;
	}
	int max=1;
	for(int i=2;i<=1000;i++){
		if(a[i]>a[max]) max=i;
	}
	cout<<max<<" "<<a[max]<<endl;
	return 0;
}
