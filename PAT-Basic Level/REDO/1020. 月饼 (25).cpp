#include <iostream>
#include <algorithm>
using namespace std;

struct YueBin{
	double stock;
	double totalPrc;
	double unitPrc;
}yb[1002];

bool cmp(YueBin a,YueBin b){
	return a.unitPrc>b.unitPrc;
} 

void getUnitPrc(int n){
	for(int i=0;i<n;i++){
		yb[i].unitPrc=yb[i].totalPrc/yb[i].stock;
	}
}

int main(){ //½á¹¹ÌåÅÅÐò
	int n;
	double d,MaxProfit=0;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>yb[i].stock;
	}
	for(int i=0;i<n;i++){
		cin>>yb[i].totalPrc;
	}
 	getUnitPrc(n);
 	sort(yb,yb+n,cmp);
 	for(int i=0;i<n;i++){
 		if(d>yb[i].stock){
 			MaxProfit+=yb[i].totalPrc;
 			d-=yb[i].stock;
		}else{
			MaxProfit+=d*yb[i].unitPrc;
			break;
		}
	 }
	printf("%.02f",MaxProfit);
	return 0;
}
