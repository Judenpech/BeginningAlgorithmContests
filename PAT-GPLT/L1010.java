package gplt;
import java.util.*;
public class L1010 {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		if(a>b){
			a=a+b;
			b=a-b;
			a=a-b;
		}
		if(b>c){
			b=b+c;
			c=b-c;
			b=b-c;
		}
		if(a>b){
			a=a+b;
			b=a-b;
			a=a-b;
		}
		System.out.println(a+"->"+b+"->"+c);
		sc.close();
	}

}
