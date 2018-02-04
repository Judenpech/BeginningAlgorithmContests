#include <iostream>

using namespace std;

int main(){
	int a,b,first=1;	
	while(1){
	    cin>>a>>b;
		if(first){
			if(b==0){
		       cout<<"0 0";
		    } else{
			cout<<(a*b)<<" "<<(b-1);
	    	}	
		    first=0;
		}else{
			if(b>0){
			cout<<" "<<(a*b)<<" "<<(b-1);
	    	}
		}
		if(cin.get()=='\n') return 0;
	}
	return 0;
}
