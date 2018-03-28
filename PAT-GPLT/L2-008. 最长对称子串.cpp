#include <iostream>
#include <string>
using namespace std;
int main(){//DP
	string s;
	getline(cin,s);
	int maxLen=0;
	for(int i=0;i<s.length();i++){
		for(int j=(s.length()-i)/2;j>=1;j--){
			string a,b;
			a=s.substr(i,j);
			b=s.substr(i+j,j);
			int flag=1;
			for(int l=0,k=b.length()-1;k>=0;l++,k--){
				if(a[l]!=b[k]){
					flag=0;
					break;
				}
			}
			if(flag && j+j>maxLen){
				maxLen=j+j;
				break;
			}
			if(i+j+1<s.length()){
				b="";
				flag=1;
				b=s.substr(i+j+1,j);
				for(int l=0,k=b.length()-1;k>=0;l++,k--){
					if(a[l]!=b[k]){
						flag=0;
						break;
					}
				}
				if(flag && j+j+1>maxLen){
					maxLen=j+j+1;
					break;
				}
			}
			
		}
	}
	cout<<maxLen<<endl;
	return 0;
}
