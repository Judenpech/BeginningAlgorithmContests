#include <iostream>
using namespace std;

int main(){
	int n,m,ji,tu;
	cin>>n>>m;
	ji=(4*n-m)/2;
	tu=(m-2*n)/2;
	if(m%2==0 && ji>=0 && tu>=0)
		cout<<ji<<" "<<tu<<endl;
	else
		cout<<"No answer"<<endl;
	return 0;
} 
