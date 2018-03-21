#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
const int maxn=105;
int a[maxn][maxn],b[maxn][maxn];
int main(){
	int ra,ca,rb,cb;
	cin>>ra>>ca;
	for(int i=0;i<ra;i++){
		for(int j=0;j<ca;j++){
			cin>>a[i][j];
		}
	}
	cin>>rb>>cb;
	for(int i=0;i<rb;i++){
		for(int j=0;j<cb;j++){
			cin>>b[i][j];
		}
	}
	if(ca!=rb){
		printf("Error: %d != %d",ca,rb);
		return 0;
	}
	cout<<ra<<" "<<cb<<endl;
	for(int i=0;i<ra;i++){
		for(int j=0;j<cb;j++){
			int sum=0;
			for(int k=0;k<rb;k++){
				sum+=a[i][k]*b[k][j];
			}
			if(j!=0) cout<<" ";
			cout<<sum;
		}
		cout<<endl;
	}
	return 0;
}
