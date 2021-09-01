
import java.util.Scanner;

public class SimplyStrangeSort {


	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
			int n = sc.nextInt(); int[] didits = new int[n + 1];
			for(int i = 0; i < n; i++) didits[i] = sc.nextInt();
			
			Solve solve = new Solve(n, didits, 0);
			solve.solve();
			println(solve.getCount() + "");
		}
		sc.close();
	}
	
	private static void println(String s){
		System.out.println(s);
	}
	private static void print(String s){
		System.out.print(s + " ");
	}
	
	private static class Solve{
		int n, count;
		int[] digits;
		public Solve(int n, int[] digits, int count){
			this.n = n;
			this.digits = digits;
			this.count = count;
		}
		public int getN(){
			return n;
		}
		public int getCount(){
			return count;
		}
		
		public void solve(){
			
			while(true){
				boolean sorted = isSorted();
				if(sorted) break;
				else{
					oddOp();
					count++;
				}
				sorted = isSorted();
				if(sorted) break;
				else{
					evenOp();
					count++;
				}
			}
			
		}
		private void printAll(){
			for(int i = 0; i < getN(); i++){
				print(digits[i] + "");
			}
			println("");
		}
		private void oddOp(){
			for(int i = 0; i < getN() - 2; i += 2){
				if(digits[i] > digits[i + 1]){
					//printAll();
					int temp = digits[i];
					digits[i] = digits[i + 1];
					digits[i + 1] = temp;
					//count++;
				}
			}
		}
		private void evenOp(){
			for(int i = 1; i < getN() - 1; i += 2){
				if(digits[i] > digits[i + 1]){
					//printAll();
					int temp = digits[i];
					digits[i] = digits[i + 1];
					digits[i + 1] = temp;
					//count++;
				}
			}
		}
		
		private boolean isSorted(){
			for(int i = 0; i < getN() - 1; i++) 
				if(digits[i] > digits[i + 1]) return false;
			return true;
		}
	}
	/*
	 * 100
9
2 5 8 9 7 4 1 3 6
3
1 2 3
7
6 4 5 3 2 7 1
17
17 16 7 2 14 8 3 6 11 13 12 10 1 15 5 4 9
3
1 2 3
23
4 20 8 16 22 1 14 23 13 10 12 3 9 19 6 17 15 21 5 2 18 7 11
5
2 4 1 3 5
	 */

}
