#include <iostream>
#include <string.h>
using namespace std;

int main(){
	string a,b;
	char tmpA,tmpB,output[36];
	int flag,k=0;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
		if(a[i]>='a' && a[i]<='z'){
			tmpA=a[i]-32;
		}else{
			tmpA=a[i];
		}
		flag=1;
		for(int j=0;j<b.length();j++){
			if(b[j]>='a' && b[j]<='z'){
			    tmpB=b[j]-32;
		    }else{
		    	tmpB=b[j];
			}
		    if(tmpA==tmpB){
		    	flag=0;
		    	break;
			} 
		}
		if(flag){
			for(int m=0;m<k;m++){
				if(tmpA==output[m] || tmpA=='_'){
					flag=0;
					break;
				}
			}
			if(flag){
				output[k++]=tmpA;
			}
		}
	}
	puts(output);
	return 0;
}
