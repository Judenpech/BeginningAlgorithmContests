#include <iostream>
using namespace std;

void pinyin(int sum,int flag){
    if(sum>=10){
		pinyin(sum/10,1); 	//����������һ�����ֺ����޿ո��������ֺ�����Ͽո�flag��Ϊ1 
    }
	switch(sum%10){
		case 0:cout<<"ling";break;
		case 1:cout<<"yi";break;
		case 2:cout<<"er";break;
		case 3:cout<<"san";break;
		case 4:cout<<"si";break;
		case 5:cout<<"wu";break;
		case 6:cout<<"liu";break;
		case 7:cout<<"qi";break;
		case 8:cout<<"ba";break;
		case 9:cout<<"jiu";break;
	}
	if(flag) cout<<" ";
}
int main(){
	char t;
	int sum=0;
	while((t=cin.get())!='\n'){ //��ȷ�����������룬�ûس������ж� 
		sum+=t-'0';
	}
    pinyin(sum,0); //�ݹ��������������һ�����ֺ����޿ո񣬽�flag��Ϊ0 
    return 0;
}
