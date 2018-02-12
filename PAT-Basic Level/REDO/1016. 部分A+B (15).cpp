#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int pa,pb,suma=0,sumb=0;
	string sa,sb;
	cin>>sa>>pa>>sb>>pb;
	for(int i=0;i<sa.length();i++){
		if(sa[i]-48==pa){
			suma=suma*10+pa;
		} 
	}
	for(int i=0;i<sb.length();i++){
		if(sb[i]-48==pb){
			sumb=sumb*10+pb;
		} 
	}
	cout<<suma+sumb<<endl;
	return 0;
}
