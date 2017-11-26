#include <iostream>
#include <algorithm> 
#include <cstring>
#define max 105
using namespace std;

int main(){
	char a[max],b[max],c[max];
	int n,len;
	cin>>n;
	getchar();
	while(n--){
		gets(a);
		len=strlen(a);
		memcpy(c,a,sizeof(a));
		for(int i=1;i<len;i++){
			for(int k=0,j=i; k<len; j=(j+1)%len,k++){
				b[k]=a[j];
			}			
			if(strcmp(c,b)>0){
				memcpy(c,b,sizeof(b));
			}
		}
		for(int i=0;i<len;i++){
			cout<<c[i];
		}
		cout<<endl;
	}	
	return 0;
}
