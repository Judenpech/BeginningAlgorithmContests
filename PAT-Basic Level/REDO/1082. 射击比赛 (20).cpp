#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,t,x,y;
	cin>>n;
	double max=-1,min=101;
	int maxID,minID;
	double dist;
	for(int i=0;i<n;i++){
		cin>>t>>x>>y;
		dist=sqrt(x*x+y*y);
		if(dist>max){
			max=dist;
			maxID=t;
		} 
		else if(dist<min){
			min=dist;
			minID=t;
		} 
	}
	printf("%04d %04d",minID,maxID);
	return 0;
}
