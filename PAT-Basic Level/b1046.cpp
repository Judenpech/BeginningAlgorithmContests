#include <iostream>
using namespace std;

int main(){
	int n,aSay,aDo,bSay,bDo;
	int aDrink=0,bDrink=0;
	int saySum;
	cin>>n;
	while(n--){
		cin>>aSay>>aDo>>bSay>>bDo;
		saySum=aSay+bSay;
		if(aDo==saySum && bDo!=saySum) bDrink++;
		else if(bDo==saySum && aDo!=saySum) aDrink++;
	}
	cout<<aDrink<<" "<<bDrink;
	return 0;
}
