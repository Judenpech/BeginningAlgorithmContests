#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int arr[100000];
int arr1[10005];
int ans[10005];
int main(){
	int n;
	cin>>n;
	memset(arr,-1,sizeof(arr));
	int a,b;
	while(n--){
		cin>>a>>b;
		arr[a]=b;
		arr[b]=a;
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>arr1[i];
	}
	sort(arr1,arr1+m);
	int cnt=0,t,flag;
	for(int i=0;i<m;i++){
		if(arr1[i]==-1) continue;
		t=arr[arr1[i]];
		if(t==-1){
			ans[cnt++]=arr1[i];
			continue;
		}
		flag=1;
		for(int j=i+1;j<m;j++){
			if(t==arr1[j]){
				arr1[j]=-1;
				flag=0;
				break;
			}
		}
		if(flag){
			ans[cnt++]=arr1[i];
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		if(i!=0) cout<<" ";
		printf("%05d",ans[i]); //ע�ⲹ0
	}
	return 0;
}
