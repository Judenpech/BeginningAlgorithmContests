#include <iostream>
using namespace std;

void pinyin(int sum,int flag){
    if(sum>=10){
		pinyin(sum/10,1); 	//除输出的最后一个数字后面无空格，其它数字后面带上空格，flag置为1 
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
	while((t=cin.get())!='\n'){ //不确定个数的输入，用回车进行判断 
		sum+=t-'0';
	}
    pinyin(sum,0); //递归输出，输出的最后一个数字后面无空格，将flag置为0 
    return 0;
}
