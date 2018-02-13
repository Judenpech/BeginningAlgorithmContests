#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int a,b,c;
	char sc[4];
	cin>>c;
	if(c%1111==0){
		printf("%d - %d = 0000\n",c,c);
		return 0;
	}
	while(1){
		for(int i=3;i>=0;i--){
			sc[i]=c%10+48;
			c/=10;
		}
		sort(sc,sc+4,greater<int>());
		a=atoi(sc);
		b=(sc[0]-48)+(sc[1]-48)*10+(sc[2]-48)*100+(sc[3]-48)*1000;
		c=a-b;
		printf("%04d - %04d = %04d\n",a,b,c);
		if(c==6174) break; //判断6174不能在while里面，否则当输入为6174时没有输出
	}
	return 0;
}
