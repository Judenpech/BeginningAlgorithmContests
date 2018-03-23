#include <iostream>
#include <cstring>
using namespace std;
struct Ti{
	int mf; //满分值
	int xxgs; //选项个数
	int zqxxgs; //正确选项个数
	char zqxs[7]; //正确选项
	int cuo=0; //错误次数
}ti[105];
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>ti[i].mf>>ti[i].xxgs>>ti[i].zqxxgs;
		for(int j=0;j<ti[i].zqxxgs;j++){
			cin>>ti[i].zqxs[j];
		}
	}
	int flag=1;
	string s;
	int k;//选中的选项个数
	char xx; //选项
	for(int i=0;i<n;i++){
		int defen=0;
		getline(cin,s);
		for(int j=0;j<s.length();j++){
			if(isdigit(s[j])){
				int cnt=0;
				k=s[j]-'0';
				for(int q=j+2;s[q]!=')';q++){
					xx=
					for(int p=0;p<ti[j].zqxxgs;p++){
						if(xx=ti[j].zqxs[p]){
							cnt++;
							break;
						}
					}
				}
			}
			
			
			if(k!=ti[j].zqxxgs || cnt!=ti[j].zqxxgs){
				ti[j].cuo++;
			}else{
				defen+=ti[j].mf;
			}
			getchar();
		}
		cout<<defen<<endl;
	}
	//if(flag) cout<<"Too simple"<<endl;
	return 0;
}
