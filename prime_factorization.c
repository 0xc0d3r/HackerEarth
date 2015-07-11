#include<stdio.h>
#define LAST_PRIME 168
void print_array(int arr[],int len) {
	int i;
	for(i=0;i<len;i++){
		printf("%d\n",arr[i]);
	}
}

void prime_factorization(int n){
	int primes[LAST_PRIME],i,j,primeCount=1,factor=0;
	primes[0] = 2;
	for(i=3;i<=n;i+=2){
		factor=0;
		for(j=0;j<primeCount;j++){
			if( !(i%primes[j]) ) {
				factor=1;
				break;
			}
		}
		if(!factor) primes[primeCount++] = i;
	}
	print_array(primes,primeCount);
}
int main(void) {
	int n;
	printf("Enter N = ");
	scanf("%d",&n);
	if(n>1) prime_factorization(n);
	else printf("No primes!!\n");
}
