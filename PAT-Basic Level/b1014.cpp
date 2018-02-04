#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
	string a,b,c,d;
	char weekday,hour;
	int minute,haveWD=0;
	cin>>a>>b>>c>>d;
	int len1=a.length()<b.length() ?a.length():b.length();
	int len2=c.length()<d.length() ?c.length():d.length();
	for(int i=0;i<len1;i++){
		if(!haveWD){
			if(a[i] >= 'A' && a[i] <= 'G' && b[i] >= 'A' && b[i] <= 'G'){
				if(a[i]==b[i]){		
				    weekday=a[i];
			        haveWD=1;	
				}
		    }
		}else{
			if((a[i] >= '0' && a[i] <= '9' || a[i] >= 'A' && a[i] <= 'N') 
			   && (b[i] >= '0' && b[i] <= '9' || b[i] >= 'A' && b[i] <= 'N'))
			   {
			   	if(a[i]==b[i]){
			   		hour=a[i];
			        break;
				} 		
			}
		}	
	}
	for(int i=0;i<len2;i++){
		if((c[i] >= 'a' && c[i] <= 'z' || c[i] >= 'A' && c[i] <= 'Z') 
		   && (d[i] >= 'a' && d[i] <= 'z' || d[i] >= 'A' && d[i] <= 'Z'))
		   {
			if(c[i]==d[i]){
				minute=i;
				break;
			}
		 } 
	}
    switch(weekday){
        case 'A': cout<<"MON ";break;
        case 'B': cout<<"TUE ";break;
        case 'C': cout<<"WED ";break;
        case 'D': cout<<"THU ";break;
        case 'E': cout<<"FRI ";break;
        case 'F': cout<<"SAT ";break;
        case 'G': cout<<"SUN ";break;
    }
	if(hour>='0' && hour<='9') printf("0%c:",hour);
	else if(hour>='A' && hour<='Z'){
		switch(hour){
            case 'A': printf("10:");break;
            case 'B': printf("11:");break;
            case 'C': printf("12:");break;
            case 'D': printf("13:");break;
            case 'E': printf("14:");break;
            case 'F': printf("15:");break;
            case 'G': printf("16:");break;
            case 'H': printf("17:");break;
            case 'I': printf("18:");break;
            case 'J': printf("19:");break;
            case 'K': printf("20:");break;
            case 'L': printf("21:");break;
            case 'M': printf("22:");break;
            case 'N': printf("23:");break;
        }
	}
	printf("%02d",minute);
	return 0;
}
