#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
struct Ti{
	int bh; //���
	int mf; //����ֵ
	int xxgs; //ѡ�����
	int zqxxgs; //��ȷѡ�����
	string zqxs; //��ȷѡ��
	int cuo=0; //�������
}ti[105];
bool cmp(Ti a,Ti b){
	if(a.cuo==b.cuo){
		return a.bh<b.bh;
	}else{
		return a.cuo>b.cuo;
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	char t;
	for(int i=0;i<m;i++){
		cin>>ti[i].mf>>ti[i].xxgs>>ti[i].zqxxgs;
		ti[i].bh=i+1;
		for(int j=0;j<ti[i].zqxxgs;j++){
			cin>>t;
			ti[i].zqxs+=t;
		}
	}
	getchar();
	int flag=1;
	string s;
	int k;//ѡ�е�ѡ�����
	for(int i=0;i<n;i++){
		int defen=0;
		getline(cin,s);
		for(int j=0,mm=0;j<s.length();j++){
			string xx; //ѡ��
			if(isdigit(s[j])){
				k=s[j]-'0';
				for(int q=j+2,p=0;p<k;q+=2,p++){
					xx+=s[q];
				}
				if(k!=ti[mm].zqxxgs || xx!=ti[mm].zqxs){
					ti[mm].cuo++;
					flag=0;
				}else{
					defen+=ti[mm].mf;
				}
				mm++;
			}
		}
		cout<<defen<<endl;
	}
	sort(ti,ti+m,cmp);
	if(flag) cout<<"Too simple"<<endl;
	else{
		cout<<ti[0].cuo<<" "<<ti[0].bh;
		for(int i=1;i<m;i++){
			if(ti[i].cuo==ti[0].cuo){
				cout<<" "<<ti[i].bh;
			}else{
				break;
			}

		}
	}
	return 0;
}
