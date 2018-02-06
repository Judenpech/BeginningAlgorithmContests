#include <iostream>
using namespace std;
int main(){
	int jiuA,jiuB,n,sayA,sayB,doA,doB,say;
	cin>>jiuA>>jiuB>>n;
	int drinkA=jiuA,drinkB=jiuB;
	for(int i=0;i<n;i++){
		cin>>sayA>>doA>>sayB>>doB;
		say=sayA+sayB;
		
		if(doA==say && doB!=say){
			jiuA--;
			if(jiuA==-1){
				cout<<'A'<<endl<<drinkB-jiuB;
				return 0;
			}
		}
		if(doB==say && doA!=say){
			jiuB--;
			if(jiuB==-1){
				cout<<'B'<<endl<<drinkA-jiuA;
				return 0;
			}
		}
	}
	return 0;
}
