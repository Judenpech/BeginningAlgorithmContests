#include <iostream>
#include <cstring>
using namespace std;
int cj[10005];//查缴物品
int main(){
	memset(cj,0,sizeof(cj));
	int n,m;
	cin>>n>>m;
	int t;
	while(m--){
		cin>>t;
		cj[t]=1;
	}
	string stu;
	int k,flag,cntStu=0,cnt=0;
	while(n--){
		cin>>stu>>k;
		flag=1;
		while(k--){
			cin>>t;
			if(cj[t]==1){
				if(flag){
					cout<<stu<<": ";
					flag=0;
				}else cout<<" ";
				printf("%04d",t);//注意输出格式补零
				cnt++;
			}
		}
		if(flag==0){
			cntStu++;
			cout<<endl;
		} 
	}
	cout<<cntStu<<" "<<cnt<<endl;
	return 0;
}
