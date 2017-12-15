package gplt;
import java.util.*;
public class L1002 {
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String c=sc.next();
		
		int l=1,s=1; 
		for(int i=3;;i+=2){
			s=s+i*2;
			if(s>n){ 
				s=s-i*2;
				break;
			}
			l++;
		}
		
		for(int i=l;i>1;i--){
			for(int k=l-i;k>0;k--) System.out.print(" ");		
			for(int j=i*2-1;j>=1;j--) System.out.print(c);				
			System.out.println();
		}
		for(int i=1;i<=l;i++){
			for(int k=l-i;k>0;k--) System.out.print(" ");
			for(int j=i*2-1;j>=1;j--) System.out.print(c);
			System.out.println();
		}
		System.out.println(n-s);
		sc.close();
	}

}
