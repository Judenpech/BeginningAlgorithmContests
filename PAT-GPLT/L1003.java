package gplt;
import java.util.*;
public class L1003 {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		String n=sc.nextLine();
		int[] count=new int[10];
		for(int i=0;i<n.length();i++){
			count[n.charAt(i)-48]++;
		}
		for(int i=0;i<10;i++){
			if(count[i]!=0){
				System.out.println(i+":"+count[i]);
			}
		}
		sc.close();
	}
}
