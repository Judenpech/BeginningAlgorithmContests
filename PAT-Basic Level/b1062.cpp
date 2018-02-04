#include <iostream>
using namespace std;

int main(){
	int a,b,k,n,r,count=0;
	double nm1,nm2,tmp; 
	scanf("%d/%d",&a,&b);
	nm1=(double)a/b;
	scanf("%d/%d",&a,&b);
	nm2=(double)a/b;
	cin>>k;
	if(nm1>nm2){
		tmp=nm1;
		nm1=nm2;
		nm2=tmp;
	}
	for(n=1;(double)n/k<nm2;n++){
		if((double)n/k>nm1 && (double)n/k<nm2){
			a=k;
		    b=n;
		    r=a%b;
		    while(r!=0){
			    a=b;
			    b=r;
			    r=a%b;
	    	}
	    	if(b==1){
				if(count!=0) cout<<" ";
                cout<<n<<"/"<<k;
			    count++;
			}
		}
	}
	return 0;
}
