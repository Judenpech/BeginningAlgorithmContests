#include <iostream>
using namespace std;
struct Student{
	string zkzh;
	int shiji;
	int kaoshi;
}stu[1005];
int main(){
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>stu[i].zkzh>>stu[i].shiji>>stu[i].kaoshi;
	}
	cin>>m;
	int t;
	while(m--){
		cin>>t;
		for(int i=0;i<n;i++){
			if(t==stu[i].shiji){
				cout<<stu[i].zkzh<<" "<<stu[i].kaoshi<<endl;
				break;
			}
		}
	}
	return 0;
}
