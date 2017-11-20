#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
#define maxn 20
int a[maxn][maxn];
int main(){
	int n,x,y,m;
	cin>>n;
	memset(a,0,sizeof(a));
	x=0;
	y=n-1;
	a[x][y]=m=1;
	while(m<n*n){
		while(x+1<n && !a[x+1][y]) a[++x][y]=++m;
		while(y-1>=0 && !a[x][y-1]) a[x][--y]=++m;
		while(x-1>=0 && !a[x-1][y]) a[--x][y]=++m;
		while(y+1<n && !a[x][y+1]) a[x][++y]=++m;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<setw(3)<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
