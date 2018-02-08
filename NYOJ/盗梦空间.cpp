#include <iostream>
#include <cstring>

using namespace std;

double f(int l,int s){
	if(l==1){
		return (double)s/60*3; 
	} 
	return f(l-1,(double)s/60*3);
}

int main(){
	int t,m,s,layer;
	double time;
	cin>>t;
	while(t--){
		layer=0;
		time=0;
		cin>>m;
		while(m--){
			char a[10];
			cin>>a;
			if(strcmp(a,"IN")==0){
				layer++;
			}
			if(strcmp(a,"STAY")==0){
				cin>>s;
				time+=f(layer,s)*60;
			}
			if(strcmp(a,"OUT")==0){
				layer--;
			}
		}
		cout<<time<<endl;
	}
	return 0;
}
