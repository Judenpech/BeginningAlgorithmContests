#include <iostream>
using namespace std;
int main(){
	int T,k;
	cin>>T>>k;
	int n1,b,t,n2;
	while(k--){
		cin>>n1>>b>>t>>n2;
		if(T<t){
			printf("Not enough tokens.  Total = %d.\n",T);
			continue;
		}
		if(b==0){
			if(n2<n1){
				T+=t;
				printf("Win %d!  Total = %d.\n",t,T);
			}else{
				T-=t;
				printf("Lose %d.  Total = %d.\n",t,T);
			}
		}else if(b==1){
			if(n2>n1){
				T+=t;
				printf("Win %d!  Total = %d.\n",t,T);
			}else{
				T-=t;
				printf("Lose %d.  Total = %d.\n",t,T);
			}
		}
		if(T<=0){
			cout<<"Game Over."<<endl;
			break;
		}
	}
	return 0;
}
