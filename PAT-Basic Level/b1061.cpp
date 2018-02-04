#include <iostream>
using namespace std;

int main(){
	int m,n;
	int aN[100],key[100],score[100],total[100]={0};
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>score[i];
	}
	for(int i=0;i<m;i++){
		cin>>key[i];
	}
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>tmp;
			if(tmp==key[j]){	
			    total[i]+=score[j];
	    	}
		}	
	}
	for(int i=0;i<n;i++){
		cout<<total[i]<<endl;
	}
	return 0;
}
