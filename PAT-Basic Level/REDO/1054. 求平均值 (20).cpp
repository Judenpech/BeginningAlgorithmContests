#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n,valid=0;
	double t,sum=0.0;
	cin>>n;
	char s1[50],s2[50];
	while(n--){
		scanf("%s",s1);
		sscanf(s1,"%lf",&t);
		sprintf(s2,"%.2lf",t);
		int flag=1;
		for(int i=0;i<strlen(s1);i++){
			if(s1[i]!=s2[i]){
				flag=0;
				break;
			}
		}
		if(flag==0 || t<-1000 || t>1000){
			cout<<"ERROR: "<<s1<<" is not a legal number"<<endl;
		}
		else{
			sum+=t;
			valid++;
		}
	}
	if(valid==1){
		printf("The average of 1 number is %.2lf\n",sum);//number²»¼Ós£¬¿ÞÁË
	}
	else if(valid>1){
		printf("The average of %d numbers is %.2lf\n",valid,sum/valid);
	}else{
		printf("The average of 0 numbers is Undefined\n");
	}
	return 0;
}
