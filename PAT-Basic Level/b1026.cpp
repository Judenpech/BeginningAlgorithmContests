#include <iostream>
using namespace std;

const int CLK_TCK=100;
int main(){
	int c1,c2;
	cin>>c1>>c2;
	int interval=(c2-c1+50)/CLK_TCK;  //+50Ϊ�������� 
	int h,m,s;
	h=interval/3600;
	m=(interval%3600)/60;
	s=interval%60;
	printf("%02d:%02d:%02d",h,m,s);  //ע���ʽ����� 
	return 0;
}
