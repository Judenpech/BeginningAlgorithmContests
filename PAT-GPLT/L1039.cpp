#include <iostream>
#include <cstring>
#define maxn 1005
using namespace std;
int main(){
	int n;
	char s[maxn],ans[100][100];
	cin>>n;
	getchar();
	gets(s);
	int col=(strlen(s)-1)/n+1;
	for(int i=col-1,k=0;i>=0;i--){
		for(int j=0;j<n;j++){
			if(k!=strlen(s)){
				ans[j][i]=s[k++];
			}else{
				ans[j][i]=' ';
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<col;j++){
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}
