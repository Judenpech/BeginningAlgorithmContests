#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int c1,c2;
	cin>>c1>>c2;
	int time=floor(((c2-c1)/100.0+0.5));
	int h=time/3600;
	int m=time/60%60;
	int s=time%3600%60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
