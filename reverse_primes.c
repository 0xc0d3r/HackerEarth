#include<stdio.h>
#include<math.h>
#define MAX 10000000
#define LAST_PRIME 664579
int isComposite[MAX+1];
int primeArray[LAST_PRIME+1];
int reverse(int n) {
	int newNum = 0;
	while(n>0) {
		newNum = (newNum *10) +(n%10);
		n/=10;
	}
	return newNum;
}

int isPrime(int n) {
	if(n<=1) return 0;
	if(n==2) return 1;
	if((n&1) == 0) return 0;
	int i;
	for(i=3;i<=sqrt(n);i+=2) {
		if(n%i == 0) return 0;
	}
	return 1;
}

void primes() {
	int i,pi=1,j;
	for(i=2;i<=MAX;i++) {
		if(!isComposite[i]) {
			primeArray[pi++] = i;
			for(j=i+i;j<=MAX;j+=i) isComposite[j] = 1;
		}
	}
}
int main(void) {
	int i;
	primes();
	for(i=0;i<LAST_PRIME;i++) {
		int rev = reverse(primeArray[i]);
		if(rev>=primeArray[i] && isPrime(rev)) {
			printf("%d\n",primeArray[i]);
		}
	}
}
