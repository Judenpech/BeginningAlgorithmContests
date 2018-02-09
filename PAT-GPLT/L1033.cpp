#include <iostream>
#include <set> //集合set头文件
using namespace std;
int main(){
	int n,y,num,t;
	cin>>y>>n;
	for(int i=y;i<=3012;i++){ //输入的年份最大为3000，则4个数字都不相同的情况为3012
		set<int> s;  //定义集合set
		num=i;
		for(int j=0;j<4;j++){
			t=num%10;
			num/=10;
			s.insert(t); //插入数据
		}
		if(s.size()==n){  //集合数据不允许重复
			printf("%d %04d",i-y,i);
			break;
		}
	}
	return 0;
}
