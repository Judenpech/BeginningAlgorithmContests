package gplt;
import java.util.*;
public class L1005 {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		String[] zkzh=new String[n]; //准考证号
		int[] sjzwh=new int[n];  //试机座位号
		int[] kszwh=new int[n];  //考试座位号
		for(int i=0;i<n;i++){
			zkzh[i]=sc.next();
			sjzwh[i]=sc.nextInt();
			kszwh[i]=sc.nextInt();
		}
		int m=sc.nextInt();
		int cx;
		for(int i=0;i<m;i++){
			cx=sc.nextInt();
			for(int j=0;j<n;j++){
				if(cx==sjzwh[j]){
					System.out.println(zkzh[j]+" "+kszwh[j]);
				}
			}
		}
		sc.close();
	}

}
