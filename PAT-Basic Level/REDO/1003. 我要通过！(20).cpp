#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		int result=1;
		int count1=0,count2=0,count3=0;
		int countP=0,countT=0;
		cin>>s;
		for(int j=0;j<s.length();j++){
			if(s[j]!='P' && s[j]!='A' && s[j]!='T'){
				result=0;
				break;
			}
			if(s[j]=='P'){
				countP++;
				if(countP==2){
					result=0;
					break;
				}
			}
			if(s[j]=='T'){
				countT++;
				if(countT==2){
					result=0;
					break;
				}
			}
		}
		if(result){
			count1=s.find("P");
			count2=s.find("A");
			count3=s.find("T");
			if(count1==-1 || count2==-1 || count3==-1){
				result=0;
			}
			else{
				result= ((count1 * (count3 - count1 - 1)) == (s.length() - count3 - 1)) ? true : false;
			}
		}
		if(result) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;

}
