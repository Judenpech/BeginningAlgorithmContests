#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];
int main(){
	int n;
	long long p; //p����С����˿��ܻᳬ��int��Χ
	cin>>n>>p;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=i+cnt;j<n;j++){
			if(a[j]<=a[i]*p) cnt++;
			else break;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
