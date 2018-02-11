#include <iostream>
using namespace std;
int main(){
	int n,tScore,maxScore,minScore;
	string maxName,minName,maxNo,minNo,tName,tNo;
	cin>>n>>tName>>tNo>>tScore;
	maxName=minName=tName;
	maxNo=minNo=tNo;
	maxScore=minScore=tScore;
	while(--n){
		cin>>tName>>tNo>>tScore;
		if(tScore>maxScore){
			maxName=tName;
			maxNo=tNo;
			maxScore=tScore;
		}
		if(tScore<minScore){
			minName=tName;
			minNo=tNo;
			minScore=tScore;
		}
	}
	cout<<maxName<<" "<<maxNo<<endl;
	cout<<minName<<" "<<minNo<<endl;
	return 0;
}
