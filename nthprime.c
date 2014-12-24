#include<stdio.h>
#include<math.h>
#define MAX 1000
#define LAST_PRIME 168
int isComposite[MAX+1];
int primeArray[LAST_PRIME+1];
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
	int n;
	primes();
	scanf("%d",&n);
	printf("%d\n",primeArray[n]);
	
}
