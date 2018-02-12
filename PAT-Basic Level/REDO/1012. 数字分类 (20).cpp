#include <iostream>
using namespace std;
int main(){
	int n,t,flag=1,cnt2=0,cnt4=0;
	int a[5]={0};
	cin>>n;
	while(n--){
		cin>>t;
		if(t%5==0){
			if(t%2==0) a[0]+=t;
		}else if(t%5==1){
			a[1]+=t*flag;
			flag=-flag;
			cnt2++;
		}else if(t%5==2){
			a[2]++;
		}else if(t%5==3){
			a[3]+=t;
			cnt4++;
		}else if(t%5==4){
			if(t>a[4]) a[4]=t;
		}
	}
	for(int i=0;i<5;i++){
		if(i!=0) cout<<" ";
		if(a[i]==0){
			if(i==1 && cnt2!=0) cout<<"0"; //注意交错求和的结果可能为0
			else cout<<"N";
		} 
		else{
			switch(i){
				case 0:
				case 1:
				case 2:
				case 4:cout<<a[i];break;
				case 3:printf("%.1f",a[i]/(double)cnt4);break;
			};
		}
	}
	return 0;
}
