#include <iostream>
#define maxn 1005
using namespace std;
int main(){
	int x,indx=0,q,n=1;
	char ans[maxn];
	cin>>x;
	for(int i=1;;i++){
		q=n/x;
		if(indx || q){
			ans[indx++]=q+48;
			n%=x;
		}
		if(n==0){
			ans[indx]='\0';
			cout<<ans<<" "<<i<<endl;
			break;
		}
		n=n*10+1;
	}
	return 0;
}
