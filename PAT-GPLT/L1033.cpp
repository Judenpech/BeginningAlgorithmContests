#include <iostream>
#include <set> //����setͷ�ļ�
using namespace std;
int main(){
	int n,y,num,t;
	cin>>y>>n;
	for(int i=y;i<=3012;i++){ //�����������Ϊ3000����4�����ֶ�����ͬ�����Ϊ3012
		set<int> s;  //���弯��set
		num=i;
		for(int j=0;j<4;j++){
			t=num%10;
			num/=10;
			s.insert(t); //��������
		}
		if(s.size()==n){  //�������ݲ������ظ�
			printf("%d %04d",i-y,i);
			break;
		}
	}
	return 0;
}
