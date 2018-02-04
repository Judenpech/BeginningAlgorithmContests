#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int n,x,a[5]={0},count1=0,count3=0;
	cin>>n;
	while(n--){
		cin>>x;
		switch(x%5){
		case 0:{
			if(x%2==0) a[0]+=x;
			break;
		}
		case 1:{
			a[1]=a[1]+x*pow(-1,count1);
			count1++;
			break;
		}
		case 2:{
			a[2]++;
			break;
		}
		case 3:{
			a[3]+=x;
			count3++;
			break;
		}
		case 4:{
			if(x>a[4]) a[4]=x;
			break;
		}
    	}
	}
	for(int i=0;i<5;i++){
		if(a[i]==0){
			if(i==1 && count1!=0) cout<<"0";  //注意交错求和的结果可能为0 
			else cout<<"N";
		} 
		else{
			if(i==3) printf("%.1f",(double)a[i]/count3);
			else cout<<a[i];
		}
		if(i!=4) cout<<" ";
	}
	return 0;
}
