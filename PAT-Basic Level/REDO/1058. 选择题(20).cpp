#include <iostream>
#include <cstring>
using namespace std;
struct Ti{
	int mf; //����ֵ
	int xxgs; //ѡ�����
	int zqxxgs; //��ȷѡ�����
	char zqxs[7]; //��ȷѡ��
	int cuo=0; //�������
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
	int k;//ѡ�е�ѡ�����
	char xx; //ѡ��
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
