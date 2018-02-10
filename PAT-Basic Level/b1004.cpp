#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	string tname,tno;
	string maxname,minname,maxno,minno;
	int tscore,maxscore,minscore;
	cin>>tname>>tno>>tscore;
	maxname=minname=tname;
	maxno=minno=tno;
	maxscore=minscore=tscore;
	n--;
	while(n--){
		cin>>tname>>tno>>tscore;
		if(tscore>maxscore){
			maxname=tname;
			maxno=tno;
			maxscore=tscore;
		}
		if(tscore<minscore){
			minname=tname;
			minno=tno;
			minscore=tscore;
		}
	}
	cout<<maxname<<" "<<maxno<<endl;
	cout<<minname<<" "<<minno<<endl;
	return 0;
}
