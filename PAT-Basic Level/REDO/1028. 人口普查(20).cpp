#include <iostream>
#include <cstring>
using namespace std;

struct person{
	string name;
	string birthDate;
}pmax,pmin;

int main(){
	int n,valid=0;
	cin>>n;
	string t1,t2;
	pmax.birthDate="2014/09/07";
	pmin.birthDate="1814/09/05";
	for(int i=0;i<n;i++){
		cin>>t1>>t2;
		if(t2<="2014/09/06" && t2>="1814/09/06"){
			valid++;
			if(t2<pmax.birthDate){//年长，出生年月小
				pmax.name=t1;
				pmax.birthDate=t2;
			}
			if(t2>pmin.birthDate){//年幼，出生年月大
				pmin.name=t1;
				pmin.birthDate=t2;
			}
		}
	}
	if(valid==0) cout<<0;
	else cout<<valid<<" "<<pmax.name<<" "<<pmin.name<<endl;
	return 0;
}
