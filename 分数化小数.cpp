#include <iostream>
#include <iomanip>  //setprecision() Í·ÎÄ¼þ 
using namespace std;
int main(){
	int a,b,c,cnt=1;
	while(cin>>a>>b>>c && a!=0 && b!=0 && c!=0){
		cout<<"Case "<<cnt++<<": "<<setprecision(c)<<fixed<<(double)a/b<<endl;
	}	
}
