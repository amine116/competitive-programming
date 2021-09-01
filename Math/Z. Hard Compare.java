
import java.util.Scanner;

public class Test {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long a = sc.nextLong(), b = sc.nextLong(), c = sc.nextLong(), d = sc.nextLong();
		sc.close();
		
		if(getPower(a, b) > getPower(c, d)) print("YES");
		else print("NO");
		
	}
	
	private static double getPower(long a, long b){
		return ((double)b)*Math.log10((double)a);
	}
	
	private static void print(String s){
		System.out.println(s);
	}
	
	

}
