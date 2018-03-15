#include <iostream>
#include <string>
#include <cctype>
using namespace std;
char hour[]="0123456789ABCDEFGHIJKLMN";
string week[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int len=s1.length()>s2.length()?s1.length():s2.length();
	int cnt=0;
	for(int i=0;i<len;i++){
		if(s1[i]==s2[i]){
			if(s1[i]>='A' && s1[i]<='G' && cnt==0){//周一到周日A-G
				cout<<week[s1[i]-'A']<<" ";
				cnt++;
			}else if(cnt==1){
				for(int j=0;j<24;j++){
					if(s1[i]==hour[j]){
						printf("%02d:",j);
						cnt++;
						break;
					} 
				}
			}
			if(cnt==2) break;
		}
  	}
  	len=s3.length()>s4.length()?s3.length():s4.length();
  	for(int i=0;i<len;i++){
  		if(s3[i]==s4[i] && isalpha(s3[i])){
  			printf("%02d",i);
  			break;
		}
	}
	return 0;
}
