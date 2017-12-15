package gplt;
import java.util.*;
public class L1008 {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int sum=0;
		int count=0;
		for(int i=a;i<=b;i++){
			System.out.printf("%5d",i);
			sum+=i;
			if(++count%5==0) System.out.println();
		}
		System.out.println("\nSum = "+sum);
		sc.close();
	}

}
