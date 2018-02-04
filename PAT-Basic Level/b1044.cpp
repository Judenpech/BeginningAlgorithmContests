#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
using namespace std;

int main(){
	int n,num,q,r;
	string diWei[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
	string gaoWei[13]={" ","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
	string tmp,tmp2;
	cin>>n;
	cin.clear();
	cin.ignore();
	while(n--){
		getline(cin,tmp);
		if(isdigit(tmp[0])){
			num=atoi(tmp.c_str());
			if(num<13){
				cout<<diWei[num]<<endl;
			}else{
				q=num/13;
				r=num%13;
				if(r==0){
					cout<<gaoWei[q]<<endl;
				}else{
					cout<<gaoWei[q]<<" "<<diWei[r]<<endl;
				}
				
			}
		}else{
			num=0;
			if(tmp.length()>3){
				tmp2=tmp.substr(4,3);
			    tmp=tmp.substr(0,3);
			    for(int i=1;i<13;i++){
				    if(tmp==gaoWei[i]){
					    num=i*13;
				    }
			    }
			   for(int i=1;i<13;i++){
				    if(tmp2==diWei[i]){
				        num+=i;
				    } 
		    	}
			}else{
				for(int i=0;i<13;i++){
				    if(tmp==diWei[i]){
					    num=i;
				    }
			    }
			    for(int i=1;i<13;i++){
				    if(tmp==gaoWei[i]){
					    num=i*13;
				    }
			    }
			}
			cout<<num<<endl;
		}
	}
	return 0;
}
