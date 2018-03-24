#include <iostream>
#include <algorithm>
using namespace std;
struct FenShu{
	int fenzi;
	int fenmu;
	double value;
}fs[2];
bool cmp(FenShu a,FenShu b){
	return a.value<b.value;
}
int main(){
	int k;
	scanf("%d/%d %d/%d %d",&fs[0].fenzi,&fs[0].fenmu,&fs[1].fenzi,&fs[1].fenmu,&k);
	fs[0].value=(double)fs[0].fenzi/fs[0].fenmu;
	fs[1].value=(double)fs[1].fenzi/fs[1].fenmu;
	sort(fs,fs+2,cmp);
	double t;
	int a,b,r,flag=0;
	for(int i=1;i/(double)k<fs[1].value;i++){
		t=i/(double)k;
		if(t>fs[0].value && t<fs[1].value){
			a=i;
			b=k;
			r=a%b;
			while(r!=0){
				a=b;
				b=r;
				r=a%b;
			}
			if(b==1){ //最大公约数为1，即为最简分数
				if(flag) cout<<" ";
				printf("%d/%d",i,k);
				flag=1;
			}
		}
	}
	return 0;
}
