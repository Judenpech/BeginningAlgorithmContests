#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	getchar();
	while(n--){
		getline(cin,s);//��Ȼ��Ŀ��֤�ǿ��ַ�����������cin�Ļ���2�����Ե������
		if(s.length()<6){
			cout<<"Your password is tai duan le."<<endl;
			continue;
		}
		int f1=0,f2=0,f3=0; //f1:�����ĸ;f2:�������;f3:��������ַ�
		for(int i=0;i<s.length();i++){
			if(isalnum(s[i]) || s[i]=='.'){
				if(isalpha(s[i])) f1=1;
				else if(isdigit(s[i])) f2=1;
			}else{
				f3=1;
				break;
			}
		}
		if(f3){
			cout<<"Your password is tai luan le."<<endl;
		}else{
			if(f1 && f2) cout<<"Your password is wan mei."<<endl;
			else if(!f2) cout<<"Your password needs shu zi."<<endl;
			else if(!f1) cout<<"Your password needs zi mu."<<endl;
		}
	}
	return 0;
}
