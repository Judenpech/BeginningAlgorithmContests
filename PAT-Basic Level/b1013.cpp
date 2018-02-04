#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int m,n,flag,count=0,count1=0;
	cin>>m>>n;
	for(int i=2;count<n;i++){
	    flag=1;
	    for(int j=2;j<=sqrt((double)i);j++){
	    	if(i%j==0){
	    		flag=0;
	    		break;
			}
		}
		if(flag){
			count++;
			if(count>=m){
				count1++;
				if(count1!=1) cout<<" "<<i;
		    	else cout<<i;
				if(count1%10==0){
					 cout<<endl;
					 count1=0;
				}
			}
		} 			
    }	
	return 0;			
}
