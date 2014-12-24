import java.util.Scanner;
class SievePrimes {
	public static final int MAX = 10000000;
	public static final int LAST_PRIME = 664579;
	static boolean isComposite[] = new boolean[MAX+1];
	static int primeArray[] = new int[LAST_PRIME+1];
	public static void primes() {
		for(int i=2,index=1;i<=MAX;i++) {
			if(!isComposite[i]) {
				primeArray[index++] = i;
				for(int j=i+i;j<=MAX;j+=i) isComposite[j] = true;
			}
		}
	}
	public static void main(String cla[]) {
		Scanner input = new Scanner(System.in);
		primes();
		for(int i=input.nextInt();i>0;i--) {
			System.out.println(primeArray[input.nextInt()]);
		}
	}
}
