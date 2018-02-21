#include <iostream>
using namespace std;

int qz[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
int main(){
	int n,flag=1,sum;
	char s[20];
	cin>>n;
	while(n--){
		cin>>s;
		sum=0;
		for(int i=0;i<17;i++){
			sum+=(s[i]-48)*qz[i];
		}
		if(M[sum%11]!=s[17]){
			cout<<s<<endl;
			flag=0;
		}
	}
	if(flag) cout<<"All passed"<<endl;
	return 0;
}
