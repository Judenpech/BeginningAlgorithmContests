#include <iostream>
using namespace std;
int main(){
	string psw,t;
	int n;
	cin>>psw>>n;
	getchar();
	while(getline(cin,t) && t!="#"){//���Ե�������ܰ����ո�Ҫ��getline
		if(t!=psw && n!=0){
			cout<<"Wrong password: "<<t<<endl;
			n--;
		}else{
			cout<<"Welcome in"<<endl;
			return 0;
		}
		if(n==0){
			cout<<"Account locked"<<endl;
			return 0;
		}
	}
	return 0;
}
