#include<stdio.h>
#include<math.h>
#define MAX 1000000
#define LAST_PRIME 78498
int isComposite[MAX+1];
int primeArray[LAST_PRIME+1];
void primes() {
	int i,pi=1,j;
	isComposite[0]=1;
	isComposite[1]=1;
	for(i=2;i<=MAX;i++) {
		if(!isComposite[i]) {
			//primeArray[pi++] = i;
			for(j=i+i;j<=MAX;j+=i) isComposite[j] = 1;
		}
	}
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
int main(void) {
	int t,i;
	scanf("%d",&t);
	primes();
	for(i=0;i<t;i++) {
		int s,e,j;
		unsigned long long sum = 0;
		scanf("%d %d",&s,&e);
		for(j=s;j<=e;j++) {
			if(!isComposite[j]) {
				sum+=j;
			}
		}
		puts(isPrime(sum)?"YES":"NO");
	}
}
