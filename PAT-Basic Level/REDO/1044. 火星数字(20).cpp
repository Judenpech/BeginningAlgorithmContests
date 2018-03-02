#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string a[]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};//��λ0-12
string b[]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};//��λ1-12
int main(){
	int n;
	string t;
	cin>>n;
	getchar();
	while(n--){	
		getline(cin,t);
		if(isdigit(t[0])){
			int ti=0;
			for(int i=0;i<t.length();i++){
				ti=ti*10+t[i]-'0';
			}
			if(ti>=13){
				int q=ti/13;
				int r=ti%13;
				if(r==0){//�������
					cout<<b[q-1]<<endl;
				}else{
					cout<<b[q-1]<<" "<<a[r]<<endl;
				}
			}else{
				cout<<a[ti]<<endl;
			}
		}else if(isalpha(t[0])){
			string sdi,sgao;
			int sum=0;
			if(t.length()>3){
				sgao=t.substr(0,3);
				sdi=t.substr(4,3);
				for(int i=0;i<12;i++){
					if(sgao==b[i]){
						sum+=(i+1)*13;
						break;
					} 
				}
				for(int i=0;i<13;i++){
					if(sdi==a[i]){
						sum+=i;
						break;
					}
				}
			}else{
				for(int i=0;i<12;i++){
					if(t==b[i]){
						sum+=(i+1)*13;
						break;
					}
				}
				for(int i=0;i<13;i++){
					if(t==a[i]){
						sum+=i;
						break;
					}
				}
			}
			cout<<sum<<endl;
		}
	}
	return 0;
}
