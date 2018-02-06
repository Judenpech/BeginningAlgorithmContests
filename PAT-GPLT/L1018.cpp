#include <iostream>
using namespace std;
int main(){
	int h,m;
	scanf("%d:%d",&h,&m);
	if(h>=13 && h<=23){
		if(m==0){
			for(int i=1;i<=h-12;i++){
				cout<<"Dang";
			}
		}else{
			for(int i=1;i<=h-12+1;i++){
				cout<<"Dang";
			}
		}
	}else{
		printf("Only %02d:%02d.  Too early to Dang.",h,m);
	}
	return 0;
}
