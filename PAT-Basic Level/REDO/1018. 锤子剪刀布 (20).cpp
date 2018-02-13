#include <iostream>
using namespace std;
int main(){
	int n,a[6]={0},b[6]={0};
	char ta,tb;
	cin>>n;
	while(n--){
		cin>>ta>>tb;
		if(ta=='B'){
			if(tb=='B'){
				b[4]++;
				a[4]++;
			} 
			else if(tb=='C'){
				a[0]++;
				a[3]++;
				b[5]++;
			} 
			else{
				b[2]++;
				a[5]++;
				b[3]++;
			} 
		} 
		else if(ta=='C'){
			if(tb=='B'){
				b[0]++;
				a[5]++;
				b[3]++;
			}
			else if(tb=='C'){
				b[4]++;
				a[4]++;
			}
			else{
				a[1]++;
				a[3]++;
				b[5]++;
			}
		}else{
			if(tb=='B'){
				a[2]++;
				a[3]++;
				b[5]++;
			}
			else if(tb=='C'){
				b[1]++;
				a[5]++;
				b[3]++;
			}
			else{
				b[4]++;
				a[4]++;
			}
		} 
	}
	cout<<a[3]<<" "<<a[4]<<" "<<a[5]<<endl;
	cout<<b[3]<<" "<<b[4]<<" "<<b[5]<<endl;
	int maxa=2,maxb=2;
	for(int i=2;i>=0;i--){
		if(a[i]>=a[maxa]) maxa=i;
		if(b[i]>=b[maxb]) maxb=i;
	}
	if(maxa==0) cout<<"B ";
	else if(maxa==1) cout<<"C ";
	else cout<<"J ";
	if(maxb==0) cout<<"B";
	else if(maxb==1) cout<<"C";
	else cout<<"J";
	return 0;
}
