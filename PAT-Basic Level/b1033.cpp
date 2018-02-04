#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	char c[36];
	int upperBroken=0,flag,j=0,count=0;
	getline(cin,a);
	cin>>b;
	if(a==""){  //»µ¼üÎª¿Õ 
		cout<<b;
		return 0;
	}
	for(int i=0;i<a.length();i++){
		if(a[i]=='+') upperBroken=1;
		else c[j++]=a[i];
	}
	for(int i=0;i<b.length();i++){
		flag=1;
		if(upperBroken){
			for(int k=0;k<j;k++){
				if(b[i]>='A' && b[i]<='Z'){
					flag=0; break;
				} 
			    else if(b[i]>='a' && b[i]<='z'){
			    	if(b[i]-32==c[k]){
			    		flag=0; break;
					} 
				}else{
					if(b[i]==c[k]){
					    flag=0; break;	
					}
				}
		    }	
		}else{
			for(int k=0;k<j;k++){
			    if(b[i]>='a' && b[i]<='z'){
			    	if(b[i]-32==c[k]){
			    		flag=0; break;
					} 
				}else{
					if(b[i]==c[k]){
						flag=0; break;
					}
				}
		    }
		}
		if(flag){
			cout<<b[i];
			count++;
		}
		
	}
	if(!count) cout<<endl;
	return 0;
}

