#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int a[10]={0};
	char s[15];
	cin>>s;
	for(int i=0;i<strlen(s);i++){
		a[s[i]-48]=1;
	}
	cout<<"int[] arr = new int[]{";
	for(int i=9,j=0;i>=0;i--){
		if(a[i]!=0){
			if(j!=0) cout<<",";
			a[i]=j++;
			cout<<i;
			
		} 
	}
	cout<<"};"<<endl<<"int[] index = new int[]{";
	for(int i=0;i<strlen(s);i++){
		if(i!=0) cout<<",";
		cout<<a[s[i]-48];
	}
	cout<<"};"<<endl;
	return 0;
}
