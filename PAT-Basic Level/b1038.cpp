#include <iostream>
using namespace std;

int main(){
	int n,k,score[101]={0},tmp;
	cin>>n;
	while(n--){
		cin>>tmp;
		score[tmp]++;
	}
	cin>>k;
	for(int i=0;i<k;i++){
		if(i!=0) cout<<" ";
		cin>>tmp;
		cout<<score[tmp];
	}
	return 0;
}
