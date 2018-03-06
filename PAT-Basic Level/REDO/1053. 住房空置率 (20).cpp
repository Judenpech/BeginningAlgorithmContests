#include <iostream>
using namespace std;
int main(){
	int n,d;
	int knkz=0,kz=0;//¿ÉÄÜ¿ÕÖÃ£¬¿ÕÖÃ
	double e;
	cin>>n>>e>>d;
	for(int i=0;i<n;i++){
		int k,cnt=0;
		double t;
		cin>>k;
		for(int j=0;j<k;j++){
			cin>>t;
			if(t<e) cnt++;
		}
		if(cnt>k/2){
			knkz++;
			if(k>d){
				knkz--;
				kz++;
			} 
		} 
	}
	double a=knkz/(double)n*100;
	double b=kz/(double)n*100;
	printf("%.01f%% %.01f%%\n",a,b);
	return 0;
}
