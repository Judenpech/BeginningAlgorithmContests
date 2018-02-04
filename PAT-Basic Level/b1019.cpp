#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

bool compare(const int& a,const int& b){
	return a>b;
}

int main(){
	int n;
	cin>>n;
	if(n%1111==0){
		printf("%d - %d = 0000",n,n);
		return 0;
	}else{
		int tmp=n,a,b;
		while(1){	
		    char c[4];
		    for(int i=0;i<4;i++){
			    c[4-i-1]=tmp%10+'0';
			    tmp=tmp/10;
		    }
		    sort(c,c+4,compare);
		    a=(c[0]-'0')*1000+(c[1]-'0')*100+(c[2]-'0')*10+(c[3]-'0');
		    sort(c,c+4);
		    b=(c[0]-'0')*1000+(c[1]-'0')*100+(c[2]-'0')*10+(c[3]-'0');
		    tmp=a-b;
		    printf("%04d - %04d = %04d\n",a,b,tmp);
		    if(tmp==6174) break;
	    }
	}
	return 0;
}
