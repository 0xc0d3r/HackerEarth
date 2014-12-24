import java.util.Scanner;
import java.util.Arrays;
class SpiralPrime {
	public static final int MAX = 10000000;
	public static int[] getPrimesSum() {
		boolean isPrime[] = new boolean[MAX+1];
		Arrays.fill(isPrime,true);
		for(int i=2;i*i<=MAX;i++) {
			if(isPrime[i]) {
				for(int j=i;i*j<=MAX;j++) {
					isPrime[i*j] = false;
				}
			}
		}
		int numPrimes = 1;
		for(int i=3;i<=MAX;i+=2) {
			if(isPrime[i]) numPrimes++;
		}
		int primesArray[] = new int[numPrimes];
		primesArray[0] = 2;
		for(int i=3,primeIndex=1;i<=MAX;i+=2) {
			if(isPrime[i]) primesArray[primeIndex++] = i;
		}
		return primesArray;
	}
	public static void main(String cla[]) {
		Scanner input = new Scanner(System.in);
		for(int i=input.nextInt();i>0;i--) {
			int []primes = getPrimesSum();
			System.out.println(primes[input.nextInt()-1]);
		}
	}
}
